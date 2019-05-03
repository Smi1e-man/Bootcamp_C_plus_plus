/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seshevch <seshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 13:15:40 by seshevch          #+#    #+#             */
/*   Updated: 2019/04/06 13:58:45 by seshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"

int main() 
{
       Character* zaz = new Character("zaz");
       std::cout << *zaz;
Enemy* b = new RadScorpion();
AWeapon* pr = new PlasmaRifle();
AWeapon* pf = new PowerFist();
zaz->equip(pr);
std::cout << *zaz;
zaz->equip(pf);
zaz->attack(b);
std::cout << *zaz;
zaz->equip(pr);
std::cout << *zaz;
zaz->attack(b);
std::cout << *zaz;
zaz->attack(b);
std::cout << *zaz;
return 0; 
}