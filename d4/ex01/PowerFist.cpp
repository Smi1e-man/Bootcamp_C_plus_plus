/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seshevch <seshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 20:04:51 by seshevch          #+#    #+#             */
/*   Updated: 2019/04/06 13:55:13 by seshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist(PowerFist const & src)
{
	*this = src;
}
PowerFist::PowerFist()
{
	_name = "Power Fist";
	_damage = 50;
	_apcost = 8;
}
PowerFist::~PowerFist()
{
	return ;
}
PowerFist&				PowerFist::operator=(PowerFist const & rhs)
{
	if (this != &rhs)
	{
		_name = rhs._name;
		_apcost = rhs._apcost;
		_damage = rhs._damage;
	}
	return *this;
}
void PowerFist::attack() const
{
	std::cout<< "* pschhh... SBAM! *"<< std::endl;
}