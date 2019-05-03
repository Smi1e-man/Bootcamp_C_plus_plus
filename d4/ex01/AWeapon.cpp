/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seshevch <seshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 19:16:17 by seshevch          #+#    #+#             */
/*   Updated: 2019/04/06 13:40:54 by seshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const & name, int apcost, int damage)
{
	_name = name;
	_damage = damage;
	_apcost = apcost;
}
AWeapon::AWeapon(AWeapon const & src)
{
	*this = src;
}
AWeapon::AWeapon()
{
	_name = "ANON";
	_damage = 0;
	_apcost = 0;
}
AWeapon::~AWeapon()
{
	return ;
}
AWeapon&				AWeapon::operator=(AWeapon const & rhs)
{
	if (this != &rhs)
	{
		_name = rhs._name;
		_apcost = rhs._apcost;
		_damage = rhs._damage;
	}
	return *this;
}
std::string const		AWeapon::getName() const
{
	return _name;
}
int AWeapon::getAPCost() const
{
	return _apcost;
}
int AWeapon::getDamage() const
{
	return _damage;
}
void AWeapon::attack() const
{
	return ;
}