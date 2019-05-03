/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seshevch <seshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 17:30:51 by seshevch          #+#    #+#             */
/*   Updated: 2019/04/02 18:45:45 by seshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human()
{
	return ;
}
Human::~Human()
{
	return ;
}

Human::Human(std::string iq)
{
	Human::brain.set_iq(iq);
}

std::string		Human::identify()
{
	return (Human::brain.identify());
}

Brain			&Human::getBrain()
{
	return (Human::brain);
}
