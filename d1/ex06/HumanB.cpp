/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seshevch <seshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 19:18:37 by seshevch          #+#    #+#             */
/*   Updated: 2019/04/02 20:13:03 by seshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::~HumanB()
{
	return ;
}
HumanB::HumanB(std::string name) : name_(name)
{
	return ;
}

void			HumanB::setWeapon(Weapon &weap)
{
	HumanB::weap_ = &weap;
}

void			HumanB::attack()
{
	std::cout<< HumanB::name_<< " attack with his ---> "<< HumanB::weap_->getType()<< std::endl;
}
