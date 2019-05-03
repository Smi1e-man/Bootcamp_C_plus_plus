/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seshevch <seshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 13:12:52 by seshevch          #+#    #+#             */
/*   Updated: 2019/04/02 16:06:59 by seshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent()
{
	return ;
}

ZombieEvent::~ZombieEvent()
{
	return ;
}

void			ZombieEvent::setZombieType(std::string type)
{
	ZombieEvent::type = type;
}
Zombie			*ZombieEvent::newZombie (std::string name)
{
	Zombie *newZombie = new Zombie(name, ZombieEvent::type);
	return (newZombie);
}
