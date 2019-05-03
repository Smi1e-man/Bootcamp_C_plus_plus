/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seshevch <seshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 17:34:07 by seshevch          #+#    #+#             */
/*   Updated: 2019/04/05 18:55:31 by seshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon()
{
	return ;
}
Peon::Peon(std::string name):Victim(name)
{
	std::cout<< "Zog zog."<<std::endl;
}
Peon::Peon(Peon const & src)
{
	std::cout<< "Zog zog."<<std::endl;
	*this = src;
}
Peon::~Peon()
{
	std::cout<< "Bleuark..."<< std::endl;	
}

Peon&						Peon::operator=(Peon const & rhs)
{
	if (this != &rhs)
	{
		_name = rhs._name;
	}
	return *this;
}