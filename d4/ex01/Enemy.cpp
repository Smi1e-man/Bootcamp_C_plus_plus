/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seshevch <seshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 20:18:36 by seshevch          #+#    #+#             */
/*   Updated: 2019/04/06 13:55:21 by seshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const & type)
{
	_hp = hp;
	_type = type;
}
Enemy::Enemy()
{
	return ;
}
Enemy::Enemy(Enemy const & src)
{
	*this = src;
}
Enemy::~Enemy()
{
	return ;
}
Enemy&					Enemy::operator=(Enemy const & rhs)
{
	if (this != &rhs)
	{
		_hp = rhs._hp;
		_type = rhs._type;
	}
	return *this;
}
std::string const 		Enemy::getType() const
{
	return _type;
}
int						Enemy::getHP() const
{
	return _hp;
}
void			Enemy::takeDamage(int damage)
{
	if (damage < 0)
		return ;
	else if (_hp - damage < 0)
		_hp = 0;
	else
		_hp -= damage;
}