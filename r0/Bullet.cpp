/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bullet.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seshevch <seshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 18:25:52 by seshevch          #+#    #+#             */
/*   Updated: 2019/04/07 19:12:53 by seshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bullet.hpp"

int		Bullet::clmp(int input, int lower, int upper) { return (std::max(lower, std::min(input, upper))); }

Bullet::Bullet()
{
	_damage = 100;
	_coords[0] = 0;
	_coords[1] = 0;
}
Bullet::Bullet(int x, int y)
{
	_damage = 100;
	_coords[0] = clmp(x, 1, 149);
	_coords[1] = clmp(y, 1, 44);
}
Bullet::Bullet(Bullet const & src)
{
	*this = src;
}
Bullet::~Bullet()
{
	return ;
}
Bullet&				Bullet::operator=(Bullet const & rhs)
{
	if (this != &rhs)
	{
		_damage = rhs._damage;
		_coords[0] = rhs._coords[0];
		_coords[1] = rhs._coords[1];
	}
	return *this;
}

int*		Bullet::getCoords()
{
	return _coords;
}
void		Bullet::moveX(int x)
{
	clean_display();
	_coords[0] = clmp(_coords[0] + x, 2, 149);
}
void		Bullet::moveY(int y)
{
	clean_display();
	_coords[1] = clmp(_coords[1] + y, 2, 44);
}

void		Bullet::clean_display()
{
	mvprintw(_coords[1], _coords[0], " ");
}

void				Bullet::display()
{
	mvprintw(_coords[1], _coords[0], ">");
}