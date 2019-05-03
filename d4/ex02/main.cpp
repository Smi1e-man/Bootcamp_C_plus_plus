/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seshevch <seshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 16:36:04 by seshevch          #+#    #+#             */
/*   Updated: 2019/04/06 17:19:43 by seshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"

int main()
{
       ISpaceMarine* bob = new TacticalMarine;
       ISpaceMarine* jim = new AssaultTerminator;
ISquad* vlc = new Squad;
vlc->push(bob);
vlc->push(jim);
for (int i = 0; i < vlc->getCount(); ++i)
{
ISpaceMarine* cur = vlc->getUnit(i);
cur->battleCry();
cur->rangedAttack();
cur->meleeAttack();
}
delete vlc;
return 0; 
}