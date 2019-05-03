/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seshevch <seshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 19:56:58 by seshevch          #+#    #+#             */
/*   Updated: 2019/04/06 13:57:49 by seshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(PlasmaRifle const & src)
{
	*this = src;
}
PlasmaRifle::PlasmaRifle()
{
	_name = "Plasma Rifle";
	_damage = 21;
	_apcost = 5;
}
PlasmaRifle::~PlasmaRifle()
{
	return ;
}
PlasmaRifle&				PlasmaRifle::operator=(PlasmaRifle const & rhs)
{
	if (this != &rhs)
	{
		_name = rhs._name;
		_apcost = rhs._apcost;
		_damage = rhs._damage;
	}
	return *this;
}
void PlasmaRifle::attack() const
{
	std::cout<< "* piouuu piouuu piouuu *"<< std::endl;
}