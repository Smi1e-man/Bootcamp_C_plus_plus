/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seshevch <seshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 14:09:45 by seshevch          #+#    #+#             */
/*   Updated: 2019/04/05 12:02:22 by seshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int			main()
{
	FragTrap a;
	FragTrap b("LordOfTheHaos"); 
	FragTrap c = b;
	FragTrap d(a);

	a.rangedAttack("_Zork_");
	a.takeDamage(15);
	d.meleeAttack("_HellTrain_");
	b.strangeAttack("_BigZork_");
	b.takeDamage(99);
	b.beRepaired(101);
	c.lazerAttack("__BadMario__");
	c.takeDamage(999);
	b.skyrimAttack("_DragonBorn_");
	b.takeDamage(0);
	b.vaulthunter_dot_exe("_RANDOM_");

	ScavTrap A;
	ScavTrap B("WhiteLord"); 
	ScavTrap C = B;
	ScavTrap D(A);

	B.challengeNewcomer();
	B.challengeNewcomer();

	return 0;
}