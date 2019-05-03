/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seshevch <seshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 14:09:41 by seshevch          #+#    #+#             */
/*   Updated: 2019/04/05 12:07:35 by seshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout<< "Default Constructor_FragTrap: Norm game!"<< std::endl;
	this->Hit_points = 100;
	this->Max_hit_points = 100;
	this->Energy_points = 100;
	this->Max_energy_points = 100;
	this->Level_ = 1;
	this->Name_ = "NON";
	this->Melee_attack_damage = 30;
	this->Ranged_attack_damage = 20;
	this->Lazer_damage = 55;
	this->Strange_damage = 1;
	this->Skyrim_damage = 33;
	this->Armor_damage_reduction = 5;
}
FragTrap::FragTrap(std::string name)
{
	std::cout<< "Constructor_FragTrap: Let's get this party started!"<< std::endl;
	this->Hit_points = 100;
	this->Max_hit_points = 100;
	this->Energy_points = 100;
	this->Max_energy_points = 100;
	this->Level_ = 1;
	this->Name_ = name;
	this->Melee_attack_damage = 30;
	this->Ranged_attack_damage = 20;
	this->Lazer_damage = 55;
	this->Strange_damage = 1;
	this->Skyrim_damage = 33;
	this->Armor_damage_reduction = 5;
}
FragTrap::~FragTrap()
{
	std::cout<< "DeConstructor_FragTrap: I'll die the way I lived: annoying!"<< std::endl;
}
FragTrap::FragTrap(FragTrap const & src)
{
	std::cout<< "Constructor Copy_FragTrap: Come back here! I'll gnaw your legs off!"<< std::endl;
	*this = src;
}
FragTrap&	FragTrap::operator=(FragTrap const & rhs)
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
		this->Armor_damage_reduction = rhs.Armor_damage_reduction;
	}
	return *this;
}

void		FragTrap::rangedAttack(std::string const & target)
{
	std::cout<< "FR4G-TP_FragTrap: "<< this->Name_<< " Range_attack..--WOW! I hit 'em!-->> "<< target<<
	" at range, causing >>"<< this->Ranged_attack_damage<< "<< points of DAMAGE->>Bad guy go boom!!!<<\n"<< std::endl;
}
void		FragTrap::meleeAttack(std::string const & target)
{
	std::cout<< "FR4G-TP_FragTrap: "<< this->Name_<< " Melee_attack..--WOW! I hit 'em!-->> "<< target<<
	" at range, causing >>"<< this->Ranged_attack_damage<< "<< points of DAMAGE->>Bad guy go boom!!!<<\n"<< std::endl;
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

void		FragTrap::takeDamage(unsigned int amount)
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
void		FragTrap::beRepaired(unsigned int amount)
{
	std::cout<< this->Name_<<" : Health! ++"<< amount<<" . ..:Eww, what flavor is red?"<< std::endl;
	if (this->Hit_points + amount >= this->Max_hit_points)
		this->Hit_points = 100;
	else
		this->Hit_points += amount;
	std::cout<< "Now my HP = ---->"<< this->Hit_points<< "<---..:I found health!\n"<< std::endl;	
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

