/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seshevch <seshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 15:50:29 by seshevch          #+#    #+#             */
/*   Updated: 2019/04/03 19:39:47 by seshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout<< "Default constructor called"<< std::endl;
	this->fix_p_ = 0;
	return ;
}

Fixed::Fixed(int const nb) : fix_p_(nb << bit_)
{
	std::cout<< "Int constructor called"<< std::endl;
}
Fixed::Fixed(float const nb_f)
{
	std::cout<< "Float constructor called"<< std::endl;
	this->fix_p_ = (int)roundf(nb_f * (1 << this->bit_));
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
	if (this != &rhs)
		this->fix_p_ = rhs.getRawBits();
	return *this;
}

std::ostream&		operator<<(std::ostream & out, Fixed const & obj)
{
	out << obj.toFloat();
	return out;
}

int					Fixed::getRawBits() const
{
	return this->fix_p_;
}

void				Fixed::setRawBits(int const raw)
{
	std::cout<< "setRawBits member function called"<< std::endl;
	this->fix_p_ = raw;
}

float				Fixed::toFloat() const
{
	return (float)this->fix_p_ / (1 << this->bit_);
}
int					Fixed::toInt() const
{
	return this->fix_p_ >> this->bit_;
}
