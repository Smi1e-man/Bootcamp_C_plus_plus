/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seshevch <seshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 18:52:55 by seshevch          #+#    #+#             */
/*   Updated: 2019/04/02 20:01:39 by seshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
	return ;
}
Weapon::~Weapon()
{
	return ;
}

Weapon::Weapon(std::string type)
{
	Weapon::type = type;
}

void			Weapon::setType(std::string type)
{
	Weapon::type = type;
}
std::string		&Weapon::getType()
{
	return (Weapon::type);
}
