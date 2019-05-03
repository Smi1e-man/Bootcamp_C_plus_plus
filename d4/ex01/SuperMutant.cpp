/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seshevch <seshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 20:31:44 by seshevch          #+#    #+#             */
/*   Updated: 2019/04/06 13:58:32 by seshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant()
{
	std::cout<< "Gaaah. Me want smash heads !"<< std::endl;
	_hp = 170;
	_type = "Super Mutant";
	return ;
}
SuperMutant::SuperMutant(SuperMutant const & src)
{
	std::cout<< "Gaaah. Me want smash heads !"<< std::endl;
	*this = src;
}
SuperMutant::~SuperMutant()
{
	std::cout<< "Aaargh ..."<< std::endl;
	return ;
}
SuperMutant&				SuperMutant::operator=(SuperMutant const & rhs)
{
	if (this != &rhs)
	{
		_hp = rhs._hp;
		_type = rhs._type;
	}
	return *this;
}
void			SuperMutant::takeDamage(int damage)
{
	damage -= 3;
	if (damage < 0)
		return ;
	else if (_hp - damage < 0)
		_hp = 0;
	else
		_hp -= damage;
}