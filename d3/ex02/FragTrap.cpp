/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seshevch <seshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 14:09:41 by seshevch          #+#    #+#             */
/*   Updated: 2019/04/05 15:47:35 by seshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap():ClapTrap()
{
	std::cout<< "Default Constructor_FragTrap: Norm game!"<< std::endl;
	ClapTrap::Hit_points = 100;
	ClapTrap::Max_hit_points = 100;
	ClapTrap::Energy_points = 100;
	ClapTrap::Max_energy_points = 100;
	ClapTrap::Level_ = 1;
	ClapTrap::Name_ = "NON";
	ClapTrap::Melee_attack_damage = 30;
	ClapTrap::Ranged_attack_damage = 20;
	this->Lazer_damage = 55;
	this->Strange_damage = 1;
	this->Skyrim_damage = 33;
	ClapTrap::Armor_damage_reduction = 5;
}
FragTrap::FragTrap(std::string name):ClapTrap()
{
	std::cout<< "Constructor_FragTrap: Let's get this party started!"<< std::endl;
	ClapTrap::Hit_points = 100;
	ClapTrap::Max_hit_points = 100;
	ClapTrap::Energy_points = 100;
	ClapTrap::Max_energy_points = 100;
	ClapTrap::Level_ = 1;
	ClapTrap::Name_ = name;
	ClapTrap::Melee_attack_damage = 30;
	ClapTrap::Ranged_attack_damage = 20;
	this->Lazer_damage = 55;
	this->Strange_damage = 1;
	this->Skyrim_damage = 33;
	ClapTrap::Armor_damage_reduction = 5;
}
FragTrap::~FragTrap()
{
	std::cout<< "DeConstructor_FragTrap: I'll die the way I lived: annoying!"<< std::endl;
}
FragTrap::FragTrap(FragTrap const & src):ClapTrap()
{
	std::cout<< "Constructor Copy_FragTrap: Come back here! I'll gnaw your legs off!"<< std::endl;
	*this = src;
}

void		FragTrap::lazerAttack(std::string const & target)
{
	std::cout<< "FR4G-TP_FragTrap: "<< this->Name_<< " Lazer_attack..--Lazeer piu piu Pull pin, throw!-->> "<< target<<
	" at range, causing >>"<< this->Lazer_damage<< "<< DAMAGE->>Frozen and doh-zen.\n"<< std::endl;
}
void		FragTrap::strangeAttack(std::string const & target)
{
	std::cout<< "FR4G-TP_FragTrap: "<< this->Name_<< " Strange_attack..--Hot potato!-->> "<< target<<
	" at range, causing >>"<< this->Strange_damage<< "<< DAMAGE->>Eat bomb, baddie!\n"<< std::endl;
}
void		FragTrap::skyrimAttack(std::string const & target)
{
	std::cout<< "FR4G-TP_FragTrap: "<< this->Name_<< " Skyrim_attack..--FUS RO DAAAAH!->>->> "<< target<<
	" at range, causing >>"<< this->Skyrim_damage<< "<< DAMAGE->>You stink of death, my friend. I salute you.\n"<< std::endl;
}

typedef void (FragTrap::*FragTrap_)(std::string const & target);

void		FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	if (this->Energy_points - 25 < 0)
		std::cout<< "I need energy..-> NOW ENERGY = "<< this->Energy_points<< std::endl;
	else
	{
		FragTrap_ MassAttack[] =
		{
			&FragTrap::rangedAttack,
			&FragTrap::meleeAttack,
			&FragTrap::lazerAttack,
			&FragTrap::strangeAttack,
			&FragTrap::skyrimAttack,
			NULL
		};
		this->Energy_points -= 25;
		srand(time(0) + rand());
		((*this).*(MassAttack[std::rand() % 5]))(target);
		srand(time(0) + rand());
	}
}

