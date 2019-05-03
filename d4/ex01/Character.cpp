/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seshevch <seshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 12:28:01 by seshevch          #+#    #+#             */
/*   Updated: 2019/04/06 14:07:28 by seshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const & name)
{
	_name = name;
	_ap_number = 40;
	_weapon = NULL;
}
Character::Character()
{
	_name = "ANON";
	_ap_number = 40;
	_weapon = NULL;
	return ;
}
Character::Character(Character const & src)
{
	*this = src;
}
Character::~Character()
{
	return ;
}
Character&				Character::operator=(Character const & rhs)
{
	if (this != &rhs)
	{
		_name = rhs._name;
		_ap_number = rhs._ap_number;
		_weapon = rhs._weapon;
	}
	return *this;
}
void					Character::recoverAP()
{
	if (_ap_number + 10 > 40)
		_ap_number = 40;
	else
		_ap_number += 10;
}
void					Character::equip(AWeapon* weap)
{
	_weapon = weap;
}
std::string const		Character::getName() const
{
	return _name;
}
void					Character::attack(Enemy* enemy)
{
	if (_weapon != NULL && _ap_number - _weapon->getAPCost() >= 0 && enemy != NULL)
	{
		_ap_number -= _weapon->getAPCost();
		std::cout<< getName()<< " attacks "<< enemy->getType() << " with a "<< _weapon->getName()<< std::endl;
		_weapon->attack();
		enemy->takeDamage(_weapon->getDamage());
		if (enemy->getHP() <= 0)
			delete enemy;
	}
}
AWeapon*				Character::getWeapon() const
{
	return _weapon;
}
int						Character::getApNumber() const
{
	return _ap_number;
}

std::ostream&			operator<<(std::ostream & out, Character const & src)
{
	if (src.getWeapon() != NULL)
		out<< src.getName()<< " has "<< src.getApNumber()<< " AP and wields a "<< src.getWeapon()->getName()<< std::endl;
	else
		out<< src.getName()<< " has "<< src.getApNumber()<< " AP and is unarmed"<< std::endl;
	return out;
}