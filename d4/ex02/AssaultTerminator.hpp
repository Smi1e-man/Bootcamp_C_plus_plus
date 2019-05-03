/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seshevch <seshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 16:32:21 by seshevch          #+#    #+#             */
/*   Updated: 2019/04/06 16:51:16 by seshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP

# include <iostream>

# include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{
	public:
			AssaultTerminator();
			AssaultTerminator(AssaultTerminator const &);
            virtual	~AssaultTerminator();
			AssaultTerminator&						operator=(AssaultTerminator const &);

			virtual AssaultTerminator*				clone() const;
			virtual void							battleCry() const;
			virtual void							rangedAttack() const;
			virtual void							meleeAttack() const;
};
#endif