/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seshevch <seshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 12:01:41 by seshevch          #+#    #+#             */
/*   Updated: 2019/04/02 12:34:39 by seshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void			Pony::set_name(std::string name)
{
	Pony::name = name;
}
std::string		Pony::get_name()
{
	return (Pony::name);
}

void			Pony::set_color(std::string color)
{
	Pony::color = color;
}
std::string		Pony::get_color()
{
	return (Pony::color);
}

void			Pony::set_age(std::string age)
{
	Pony::age = age;
}
std::string		Pony::get_age()
{
	return (Pony::age);
}
