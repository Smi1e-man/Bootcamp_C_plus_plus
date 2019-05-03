/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seshevch <seshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 12:49:23 by seshevch          #+#    #+#             */
/*   Updated: 2019/04/02 15:48:18 by seshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type)
{
	Zombie::name = name;
	Zombie::type = type;
}

Zombie::Zombie()
{
	return ;
}

Zombie::~Zombie()
{
	return ;
}

void			Zombie::set_name(std::string name)
{
	Zombie::name = name;
}
std::string		Zombie::get_name()
{
	return (Zombie::name);
}

void			Zombie::set_type()
{
	Zombie::type = "zombie";
}
std::string		Zombie::get_type()
{
	return (Zombie::type);
}

void			Zombie::announce()
{
	std::cout<< "<" + Zombie::name + " (" + Zombie::type + ")>";
	std::cout<< " Huuummaaan's....BBrrraaaaaaiiiiiinnsss....."<< std::endl;
}
