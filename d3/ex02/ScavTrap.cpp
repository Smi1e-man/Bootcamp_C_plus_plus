/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seshevch <seshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 11:22:17 by seshevch          #+#    #+#             */
/*   Updated: 2019/04/05 15:46:52 by seshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap():ClapTrap()
{
	std::cout<< "Default Constructor_ScavTrap : Norm game!"<< std::endl;
	ClapTrap::Hit_points = 100;
	ClapTrap::Max_hit_points = 100;
	ClapTrap::Energy_points = 50;
	ClapTrap::Max_energy_points = 50;
	ClapTrap::Level_ = 1;
	ClapTrap::Name_ = "NON";
	ClapTrap::Melee_attack_damage = 20;
	ClapTrap::Ranged_attack_damage = 15;
	ClapTrap::Armor_damage_reduction = 3;
}

ScavTrap::ScavTrap(std::string name):ClapTrap(name)
{
	std::cout<< "Constructor_ScavTrap: Let's get this party started!"<< std::endl;
	ClapTrap::Hit_points = 100;
	ClapTrap::Max_hit_points = 100;
	ClapTrap::Energy_points = 50;
	ClapTrap::Max_energy_points = 50;
	ClapTrap::Level_ = 1;
	ClapTrap::Name_ = name;
	ClapTrap::Melee_attack_damage = 20;
	ClapTrap::Ranged_attack_damage = 15;
	ClapTrap::Armor_damage_reduction = 3;
}
ScavTrap::~ScavTrap()
{
	std::cout<< "DeConstructor_ScavTrap: I'll die the way I lived: annoying!"<< std::endl;
}
ScavTrap::ScavTrap(ScavTrap const & src):ClapTrap(src)
{
	std::cout<< "Constructor Copy_ScavTrap: Come back here! I'll gnaw your legs off!"<< std::endl;
	*this = src;
}


void		ScavTrap::water_challenge()
{
	std::cout<< "Water_Challenge: >>>Take me Water, MAaan!<<<"<< std::endl;
}
void		ScavTrap::lopata_challenge()
{
	std::cout<< "Lopata_Challenge: >>>Shovel. Snow. You know what doing;)<<<"<< std::endl;
}
void		ScavTrap::maneken_challenge()
{
	std::cout<< "Maneken_Challenge: >>>Stand still...<<<"<< std::endl;
}

typedef void (ScavTrap::*ScavTrap_)(void);

void		ScavTrap::challengeNewcomer()
{
	if (this->Energy_points - 25 < 0)
		std::cout<< "I need energy..-> NOW ENERGY = "<< this->Energy_points<< std::endl;
	else
	{
		ScavTrap_ MassAttack[] =
		{
			&ScavTrap::water_challenge,
			&ScavTrap::lopata_challenge,
			&ScavTrap::maneken_challenge,
			NULL
		};
		this->Energy_points -= 25;
		srand(time(0) + rand());
		((*this).*(MassAttack[std::rand() % 3]))();
		srand(time(0) + rand());
	}
}