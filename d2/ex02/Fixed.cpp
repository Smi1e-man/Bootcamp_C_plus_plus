/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seshevch <seshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 15:50:29 by seshevch          #+#    #+#             */
/*   Updated: 2019/04/04 12:18:45 by seshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	this->fix_p_ = 0;
	return ;
}

Fixed::Fixed(int const nb) : fix_p_(nb << bit_)
{
	return ;
}
Fixed::Fixed(float const nb_f)
{
	this->fix_p_ = (int)roundf(nb_f * (1 << this->bit_));
}

Fixed::Fixed(Fixed const & src)
{
	*this = src;
}

Fixed::~Fixed()
{
	return ;
}

Fixed&				Fixed::operator=(Fixed const & rhs)
{
	if (this != &rhs)
		this->fix_p_ = rhs.getRawBits();
	return *this;
}

bool				Fixed::operator>(Fixed const & rhs)
{
	return this->fix_p_ > rhs.getRawBits();
}
bool				Fixed::operator<(Fixed const & rhs)
{
	return this->fix_p_ < rhs.getRawBits();
}
bool				Fixed::operator>=(Fixed const & rhs)
{
	return this->fix_p_ >= rhs.getRawBits();
}
bool				Fixed::operator<=(Fixed const & rhs)
{
	return this->fix_p_ <= rhs.getRawBits();
}
bool				Fixed::operator==(Fixed const & rhs)
{
	return this->fix_p_ == rhs.getRawBits();
}
bool				Fixed::operator!=(Fixed const & rhs)
{
	return this->fix_p_ != rhs.getRawBits();
}
Fixed				Fixed::operator+(Fixed const & rhs) const
{
	return Fixed(this->toFloat() + rhs.toFloat());
}
Fixed				Fixed::operator-(Fixed const & rhs) const
{
	return Fixed(this->toFloat() - rhs.toFloat());
}
Fixed				Fixed::operator*(Fixed const & rhs) const
{
	return Fixed(this->toFloat() * rhs.toFloat());
}
Fixed				Fixed::operator/(Fixed const & rhs) const
{
	return Fixed(this->toFloat() / rhs.toFloat());
}

Fixed				&Fixed::operator++()
{
	this->fix_p_++;
	return *this;
}
Fixed				Fixed::operator++(int)
{
	Fixed tmp = *this;
	this->fix_p_++;
	return tmp;
}
Fixed				&Fixed::operator--()
{
	this->fix_p_--;
	return *this;
}
Fixed				Fixed::operator--(int)
{
	Fixed tmp = *this;
	this->fix_p_--;
	return tmp;
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

Fixed&				Fixed::max(Fixed & a, Fixed & b)
{
	if (a.toFloat() < b.toFloat())
		return b;
	else
		return a;
}
const Fixed&				Fixed::max(Fixed const & a, Fixed const & b)
{
	if (a.toFloat() < b.toFloat())
		return b;
	else
		return a;
}
Fixed&				Fixed::min(Fixed & a, Fixed & b)
{
	if (a.toFloat() > b.toFloat())
		return b;
	else
		return a;
}
const Fixed&				Fixed::min(Fixed const & a, Fixed const & b)
{
	if (a.toFloat() > b.toFloat())
		return b;
	else
		return a;
}
