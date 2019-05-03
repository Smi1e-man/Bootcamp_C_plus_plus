/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seshevch <seshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 15:50:29 by seshevch          #+#    #+#             */
/*   Updated: 2019/04/03 19:40:13 by seshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout<< "Default constructor called"<< std::endl;
	this->fix_p = 0;
	return ;
}

Fixed::Fixed(Fixed const & src)
{
	std::cout<< "Copy constructor called"<< std::endl;
	*this = src;
}

Fixed::~Fixed()
{
	std::cout<< "Destructor called"<< std::endl;
}

Fixed&				Fixed::operator=(Fixed const & rhs)
{
	std::cout<< "Assignation operator called"<< std::endl;
	this->fix_p = rhs.getRawBits();
	return *this;
}

int					Fixed::getRawBits() const
{
	std::cout<< "getRawBits member function called"<< std::endl;
	return this->fix_p;
}

void				Fixed::setRawBits(int const raw)
{
	std::cout<< "setRawBits member function called"<< std::endl;
	this->fix_p = raw;
}
