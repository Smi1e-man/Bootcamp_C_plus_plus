/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seshevch <seshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 18:03:50 by seshevch          #+#    #+#             */
/*   Updated: 2019/04/07 18:38:18 by seshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

int		Enemy::clmp(int input, int lower, int upper) { return (std::max(lower, std::min(input, upper))); }

Enemy::Enemy()
{
	_hp = 100;
	_damage = 100;
	_coords[0] = 0;
	_coords[1] = 0;
}
Enemy::Enemy(int x, int y)
{
	_hp = 100;
	_damage = 100;
	_coords[0] = clmp(x, 0, 148);
	_coords[1] = clmp(y, 1, 44);
}
Enemy::Enemy(Enemy const & src)
{
	*this = src;
}
Enemy::~Enemy()
{
	return ;
}
Enemy&				Enemy::operator=(Enemy const & rhs)
{
	if (this != &rhs)
	{
		_hp = rhs._hp;
		_damage = rhs._damage;
		_coords[0] = rhs._coords[0];
		_coords[1] = rhs._coords[1];
	}
	return *this;
}

int			Enemy::getHP()
{
	return _hp;
}
void		Enemy::takeDamage(int damage)
{
	if (_hp - damage < 0)
		_hp = 0;
	else
		_hp -= damage;
}

int*		Enemy::getCoords()
{
	return _coords;
}
void		Enemy::moveX(int x)
{
	clean_display();
	_coords[0] = clmp(_coords[0] + x, 0, 148);

}
void		Enemy::moveY(int y)
{
	clean_display();
	_coords[1] = clmp(_coords[1] + y, 1, 44);
}

void				Enemy::clean_display()
{
	mvprintw(_coords[1], _coords[0], " ");
}

void				Enemy::display()
{
	mvprintw(_coords[1], _coords[0], "<");
}