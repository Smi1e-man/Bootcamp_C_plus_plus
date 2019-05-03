/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seshevch <seshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 11:22:17 by seshevch          #+#    #+#             */
/*   Updated: 2019/04/05 12:05:35 by seshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout<< "Default Constructor_ScavTrap : Norm game!"<< std::endl;
	this->Hit_points = 100;
	this->Max_hit_points = 100;
	this->Energy_points = 50;
	this->Max_energy_points = 50;
	this->Level_ = 1;
	this->Name_ = "NON";
	this->Melee_attack_damage = 20;
	this->Ranged_attack_damage = 15;
	this->Lazer_damage = 55;
	this->Strange_damage = 1;
	this->Skyrim_damage = 33;
	this->Armor_damage_reduction = 3;
}
ScavTrap::ScavTrap(std::string name)
{
	std::cout<< "Constructor_ScavTrap: Let's get this party started!"<< std::endl;
	this->Hit_points = 100;
	this->Max_hit_points = 100;
	this->Energy_points = 50;
	this->Max_energy_points = 50;
	this->Level_ = 1;
	this->Name_ = name;
	this->Melee_attack_damage = 20;
	this->Ranged_attack_damage = 15;
	this->Lazer_damage = 55;
	this->Strange_damage = 1;
	this->Skyrim_damage = 33;
	this->Armor_damage_reduction = 3;
}
ScavTrap::~ScavTrap()
{
	std::cout<< "DeConstructor_ScavTrap: I'll die the way I lived: annoying!"<< std::endl;
}
ScavTrap::ScavTrap(ScavTrap const & src)
{
	std::cout<< "Constructor Copy_ScavTrap: Come back here! I'll gnaw your legs off!"<< std::endl;
	*this = src;
}
ScavTrap&	ScavTrap::operator=(ScavTrap const & rhs)
{
	if (this != &rhs)
	{
		this->Hit_points = rhs.Hit_points;
		this->Max_hit_points = rhs.Max_hit_points;
		this->Energy_points = rhs.Energy_points;
		this->Max_energy_points = rhs.Max_energy_points;
		this->Level_ = rhs.Level_;
		this->Name_ = rhs.Name_;
		this->Melee_attack_damage = rhs.Melee_attack_damage;
		this->Ranged_attack_damage = rhs.Ranged_attack_damage;
		this->Lazer_damage = rhs.Lazer_damage;
		this->Strange_damage = rhs.Strange_damage;
		this->Skyrim_damage = rhs.Skyrim_damage;
		this->Armor_damage_reduction = rhs.Armor_damage_reduction;
	}
	return *this;
}

void		ScavTrap::rangedAttack(std::string const & target)
{
	std::cout<< "FR4G-TP_ScavTrap: "<< this->Name_<< " Range_attack..--WOW! I hit 'em!-->> "<< target<<
	" at range, causing >>"<< this->Ranged_attack_damage<< "<< points of DAMAGE->>Bad guy go boom!!!<<\n"<< std::endl;
}
void		ScavTrap::meleeAttack(std::string const & target)
{
	std::cout<< "FR4G-TP_ScavTrap: "<< this->Name_<< " Melee_attack..--WOW! I hit 'em!-->> "<< target<<
	" at range, causing >>"<< this->Ranged_attack_damage<< "<< points of DAMAGE->>Bad guy go boom!!!<<\n"<< std::endl;
}
void		ScavTrap::lazerAttack(std::string const & target)
{
	std::cout<< "FR4G-TP_ScavTrap: "<< this->Name_<< " Lazer_attack..--Lazeer piu piu Pull pin, throw!-->> "<< target<<
	" at range, causing >>"<< this->Lazer_damage<< "<< DAMAGE->>Frozen and doh-zen.\n"<< std::endl;
}
void		ScavTrap::strangeAttack(std::string const & target)
{
	std::cout<< "FR4G-TP_ScavTrap: "<< this->Name_<< " Strange_attack..--Hot potato!-->> "<< target<<
	" at range, causing >>"<< this->Strange_damage<< "<< DAMAGE->>Eat bomb, baddie!\n"<< std::endl;
}
void		ScavTrap::skyrimAttack(std::string const & target)
{
	std::cout<< "FR4G-TP_ScavTrap: "<< this->Name_<< " Skyrim_attack..--FUS RO DAAAAH!->>->> "<< target<<
	" at range, causing >>"<< this->Skyrim_damage<< "<< DAMAGE->>You stink of death, my friend. I salute you.\n"<< std::endl;
}

void		ScavTrap::takeDamage(unsigned int amount)
{
	std::cout<< this->Name_<< " .I'm take...>    "<< amount<< "    <DAMAGE ..: Holy Moly! Recompiling my combat code!"<< std::endl;
	if (this->Hit_points + this->Armor_damage_reduction - amount <= 0)
		this->Hit_points = 0;
	else if (this->Armor_damage_reduction < amount)
		this->Hit_points -= (amount - this->Armor_damage_reduction);
	std::cout<< "Now my HP = ---->"<< this->Hit_points<< "<---..:Aaaaaaahhh!\n"<< std::endl;
	if (this->Hit_points == 0)
		std::cout<< "I'm DIE! I'm really flying!\n"<<std::endl;
}
void		ScavTrap::beRepaired(unsigned int amount)
{
	std::cout<< this->Name_<<" : Health! ++"<< amount<<" . ..:Eww, what flavor is red?"<< std::endl;
	if (this->Hit_points + amount >= this->Max_hit_points)
		this->Hit_points = 100;
	else
		this->Hit_points += amount;
	std::cout<< "Now my HP = ---->"<< this->Hit_points<< "<---..:I found health!\n"<< std::endl;	
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