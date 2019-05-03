/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seshevch <seshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 17:18:06 by seshevch          #+#    #+#             */
/*   Updated: 2019/04/05 18:54:08 by seshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim()
{
	return ;
}
Victim::Victim(std::string name)
{
	_name = name;
	std::cout<< "Some random victim called "<< _name<< " just popped !"<<std::endl;
}
Victim::Victim(Victim const & src)
{
	*this = src;
	std::cout<< "Some random victim called "<< _name<< " just popped !"<<std::endl;
}
Victim::~Victim()
{
	std::cout<< "Victim "<< _name<< " just died for no apparent reason !"<<std::endl;	
}
Victim&						Victim::operator=(Victim const & rhs)
{
	if (this != &rhs)
	{
		_name = rhs._name;
	}
	return *this;
}

std::string						Victim::getName() const
{
	return _name;
}
std::ostream&					operator<<(std::ostream & out, Victim const & rhs)
{
	out<< "I am "<< rhs.getName()<< " and I like otters !"<< std::endl;
	return out;
}

void							Victim::getPolymorphed() const
{
	std::cout<< this->_name<< " has been turned into a cute little sheep !"<< std::endl;
}