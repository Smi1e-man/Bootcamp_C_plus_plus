/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seshevch <seshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 12:13:51 by seshevch          #+#    #+#             */
/*   Updated: 2019/04/05 15:54:40 by seshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout<< "Default Constructor_ClapTrap: Norm game!"<< std::endl;
	this->Hit_points = 100;
	this->Max_hit_points = 100;
	this->Energy_points = 100;
	this->Max_energy_points = 100;
	this->Level_ = 1;
	this->Name_ = "NON";
	this->Melee_attack_damage = 30;
	this->Ranged_attack_damage = 20;
	this->Armor_damage_reduction = 5;
}
ClapTrap::ClapTrap(std::string name)
{
	std::cout<< "Constructor_ClapTrap: Let's get this party started!"<< std::endl;
	this->Hit_points = 100;
	this->Max_hit_points = 100;
	this->Energy_points = 100;
	this->Max_energy_points = 100;
	this->Level_ = 1;
	this->Name_ = name;
	this->Melee_attack_damage = 30;
	this->Ranged_attack_damage = 20;
	this->Armor_damage_reduction = 5;
}
ClapTrap::~ClapTrap()
{
	std::cout<< "DeConstructor_ClapTrap: I'll die the way I lived: annoying!"<< std::endl;
}
ClapTrap::ClapTrap(ClapTrap const & src)
{
	std::cout<< "Constructor Copy_ClapTrap: Come back here! I'll gnaw your legs off!"<< std::endl;
	*this = src;
}
ClapTrap&	ClapTrap::operator=(ClapTrap const & rhs)
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

void		ClapTrap::rangedAttack(std::string const & target)
{
	std::cout<< "FR4G-TP: "<< this->Name_<< " Range_attack..--WOW! I hit 'em!-->> "<< target<<
	" at range, causing >>"<< this->Ranged_attack_damage<< "<< points of DAMAGE->>Bad guy go boom!!!<<\n"<< std::endl;
}
void		ClapTrap::meleeAttack(std::string const & target)
{
	std::cout<< "FR4G-TP: "<< this->Name_<< " Melee_attack..--WOW! I hit 'em!-->> "<< target<<
	" at range, causing >>"<< this->Ranged_attack_damage<< "<< points of DAMAGE->>Bad guy go boom!!!<<\n"<< std::endl;
}

void		ClapTrap::takeDamage(unsigned int amount)
{
	std::cout<< this->Name_<< " .I'm take...>    "<< amount<< "    <DAMAGE ..: Holy Moly! Recompiling my combat code!"<< std::endl;
	if (this->Hit_points + this->Armor_damage_reduction - amount <= 0)
		this->Hit_points = 0;
	else if ((unsigned int)this->Armor_damage_reduction < amount)
		this->Hit_points -= (amount - this->Armor_damage_reduction);
	std::cout<< "Now my HP = ---->"<< this->Hit_points<< "<---..:Aaaaaaahhh!\n"<< std::endl;
	if (this->Hit_points == 0)
		std::cout<< "I'm DIE! I'm really flying!\n"<<std::endl;
}
void		ClapTrap::beRepaired(unsigned int amount)
{
	std::cout<< this->Name_<<" : Health! ++"<< amount<<" . ..:Eww, what flavor is red?"<< std::endl;
	if (this->Hit_points + amount >= (unsigned int)this->Max_hit_points)
		this->Hit_points = 100;
	else
		this->Hit_points += amount;
	std::cout<< "Now my HP = ---->"<< this->Hit_points<< "<---..:I found health!\n"<< std::endl;	
}
