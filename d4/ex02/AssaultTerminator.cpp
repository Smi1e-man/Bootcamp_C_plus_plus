/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seshevch <seshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 16:33:16 by seshevch          #+#    #+#             */
/*   Updated: 2019/04/06 16:51:57 by seshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator()
{
	std::cout<< "* teleports from space *"<< std::endl;
	return ;
}
AssaultTerminator::AssaultTerminator(AssaultTerminator const & src)
{
	std::cout<< "* teleports from space *"<< std::endl;
	*this = src;
}
AssaultTerminator::~AssaultTerminator()
{
	std::cout<< "I’ll be back ..."<< std::endl;
	return ;
}
AssaultTerminator&						AssaultTerminator::operator=(AssaultTerminator const &)
{
	return *this;
}

AssaultTerminator*		AssaultTerminator::clone() const
{
	AssaultTerminator* _new = new AssaultTerminator(*this);
	return _new;
}
void				AssaultTerminator::battleCry() const
{
	std::cout<< "This code is unclean. PURIFY IT !"<< std::endl;	
}
void				AssaultTerminator::rangedAttack() const
{
	std::cout<< "* does nothing *"<< std::endl;
}
void				AssaultTerminator::meleeAttack() const
{
	std::cout<< "* attacks with chainfists *"<< std::endl;
}