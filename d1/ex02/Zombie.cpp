/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seshevch <seshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 12:49:23 by seshevch          #+#    #+#             */
/*   Updated: 2019/04/02 13:25:01 by seshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type)
{
	Zombie::name = name;
	Zombie::type = type;
}

Zombie::~Zombie()
{
	return ;
}

void			Zombie::announce()
{
	std::cout<< "<" + Zombie::name + " (" + Zombie::type + ")>";
	std::cout<< " Huuummaaan's....BBrrraaaaaaiiiiiinnsss....."<< std::endl;
}
