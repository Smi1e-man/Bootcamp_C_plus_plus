/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Star.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seshevch <seshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 18:52:20 by seshevch          #+#    #+#             */
/*   Updated: 2019/04/07 18:58:08 by seshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Star.hpp"

int		Star::clmp(int input, int lower, int upper) { return (std::max(lower, std::min(input, upper))); }

Star::Star()
{
	_coords[0] = 0;
	_coords[1] = 0;
}
Star::Star(int x, int y)
{
	_coords[0] = clmp(x, 0, 148);
	_coords[1] = clmp(y, 1, 44);
}
Star::Star(Star const & src)
{
	*this = src;
}
Star::~Star()
{
	return ;
}
Star&				Star::operator=(Star const & rhs)
{
	if (this != &rhs)
	{
		_coords[0] = rhs._coords[0];
		_coords[1] = rhs._coords[1];
	}
	return *this;
}

int*		Star::getCoords()
{
	return _coords;
}
void		Star::moveX(int x)
{
	clean_display();
	_coords[0] = clmp(_coords[0] + x, 0, 148);

}
void		Star::moveY(int y)
{
	clean_display();
	_coords[1] = clmp(_coords[1] + y, 1, 44);
}

void				Star::clean_display()
{
	mvprintw(_coords[1], _coords[0], " ");
}

void				Star::display()
{
	mvprintw(_coords[1], _coords[0], ".");
}