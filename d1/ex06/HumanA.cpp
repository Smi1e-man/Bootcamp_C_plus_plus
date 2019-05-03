/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seshevch <seshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 19:11:44 by seshevch          #+#    #+#             */
/*   Updated: 2019/04/02 20:08:47 by seshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weap) : name_(name), weap_(weap)
{
	return ;
}
HumanA::~HumanA()
{
	return ;
}

void			HumanA::attack()
{
	std::cout<< HumanA::name_<< " attack with his ---> "<< HumanA::weap_.getType()<< std::endl;
}
