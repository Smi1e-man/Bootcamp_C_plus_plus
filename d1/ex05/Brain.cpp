/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seshevch <seshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 16:40:00 by seshevch          #+#    #+#             */
/*   Updated: 2019/04/02 17:36:29 by seshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	return ;
}
Brain::~Brain()
{
	return ;
}

void			Brain::set_iq(std::string iq)
{
	Brain::iq = iq;
}
std::string		Brain::get_iq()
{
	return (Brain::iq);
}

std::string		Brain::identify()
{
	std::stringstream	address;
	std::string			data;
	int					i;

	address<< (const void*)this;
	data = address.str();
	for(i = 2; data[i]; i++)
	{
		data[i] = toupper(data[i]);
	}
	return (data);
}
