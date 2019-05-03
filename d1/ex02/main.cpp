/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seshevch <seshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 13:00:24 by seshevch          #+#    #+#             */
/*   Updated: 2019/04/02 16:12:28 by seshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

Zombie			*randomChump()
{
	std::string	name;
	std::string	alph = "abcdefghkuiopftgklwyz";
	int		i;

	srand(time(0) + rand()%9);
	for(i = 0; i < 5; i++)
		name += alph[rand()%21];
	Zombie *newZombie = new Zombie(name, "zombie");
	return (newZombie);
}

int			main()
{
	Zombie *zomb1 = new Zombie("Warren_Spector", "Gamedev-zomb");
	zomb1->announce();
	ZombieEvent *zomb2 = new ZombieEvent();
	zomb2->setZombieType("strange");
	zomb1 = zomb2->newZombie("Doctor");
	zomb1->announce();
	zomb1 = randomChump();
	zomb1->announce();
	zomb1 = randomChump();
	zomb1->announce();
	zomb1 = randomChump();
	zomb1->announce();
	delete zomb1;
	delete zomb2;
	return (0);
}
