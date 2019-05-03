/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seshevch <seshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 16:35:45 by seshevch          #+#    #+#             */
/*   Updated: 2019/04/05 18:19:35 by seshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer()
{
	_name = "ANON";
	_title = "ANONIMUS";
	std::cout<< _name<< ", "<< _title<< ", is born !"<<std::endl;
}
Sorcerer::Sorcerer(std::string name, std::string title)
{
	std::cout<< name<< ", "<< title<< ", is born !"<<std::endl;
	_name = name;
	_title = title;
}
Sorcerer::Sorcerer(Sorcerer const & src)
{
	std::cout<< _name<< ", "<< _title<< ", is born !"<<std::endl;
	*this = src;
}
Sorcerer::~Sorcerer()
{
	std::cout<< _name<< ", "<< _title<< ", is dead. Consequences will never be the same !"<<std::endl;	
}
Sorcerer&						Sorcerer::operator=(Sorcerer const & rhs)
{
	if (this != &rhs)
	{
		_name = rhs._name;
		_title = rhs._title;
	}
	return *this;
}

std::string						Sorcerer::getName() const
{
	return _name;
}
std::string						Sorcerer::getTitle() const
{
	return _title;
}

std::ostream&					operator<<(std::ostream & out, Sorcerer const & rhs)
{
	out<< "I am "<< rhs.getName()<< ", "<< rhs.getTitle()<< ", and I like ponies !"<< std::endl;
	return out;
}

void						Sorcerer::polymorph(Victim const & rhs) const
{
	rhs.getPolymorphed();
}
