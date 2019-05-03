/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seshevch <seshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 16:20:32 by seshevch          #+#    #+#             */
/*   Updated: 2019/04/06 16:52:01 by seshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine()
{
	std::cout<< "Tactical Marine ready for battle"<< std::endl;
	return ;
}
TacticalMarine::TacticalMarine(TacticalMarine const & src)
{
	std::cout<< "Tactical Marine ready for battle"<< std::endl;
	*this = src;
}
TacticalMarine::~TacticalMarine()
{
	std::cout<< "Aaargh ..."<< std::endl;
	return ;
}
TacticalMarine&						TacticalMarine::operator=(TacticalMarine const &)
{
	return *this;
}

TacticalMarine*		TacticalMarine::clone() const
{
	TacticalMarine* _new = new TacticalMarine(*this);
	return _new;
}
void				TacticalMarine::battleCry() const
{
	std::cout<< "For the holy PLOT !"<< std::endl;	
}
void				TacticalMarine::rangedAttack() const
{
	std::cout<< "* attacks with bolter *"<< std::endl;
}
void				TacticalMarine::meleeAttack() const
{
	std::cout<< "* attacks with chainsword *"<< std::endl;
}