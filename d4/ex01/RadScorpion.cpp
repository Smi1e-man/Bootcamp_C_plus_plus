/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seshevch <seshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 12:17:50 by seshevch          #+#    #+#             */
/*   Updated: 2019/04/06 13:59:06 by seshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion()
{
	std::cout<< "* click click click *"<< std::endl;
	_hp = 80;
	_type = "Rad Scorpion";
	return ;
}
RadScorpion::RadScorpion(RadScorpion const & src)
{
	std::cout<< "* click click click *"<< std::endl;
	*this = src;
}
RadScorpion::~RadScorpion()
{
	std::cout<< "* SPROTCH *"<< std::endl;
	return ;
}
RadScorpion&				RadScorpion::operator=(RadScorpion const & rhs)
{
	if (this != &rhs)
	{
		_hp = rhs._hp;
		_type = rhs._type;
	}
	return *this;
}
void			RadScorpion::takeDamage(int damage)
{
	if (damage < 0)
		return ;
	else if (_hp - damage < 0)
		_hp = 0;
	else
		_hp -= damage;
}