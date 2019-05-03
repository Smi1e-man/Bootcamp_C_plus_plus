/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seshevch <seshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 16:20:27 by seshevch          #+#    #+#             */
/*   Updated: 2019/04/06 16:51:03 by seshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP

# include <iostream>

# include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{
	public:
			TacticalMarine();
			TacticalMarine(TacticalMarine const &);
            virtual	~TacticalMarine();
			TacticalMarine&						operator=(TacticalMarine const &);

			virtual TacticalMarine*		clone() const;
			virtual void				battleCry() const;
			virtual void				rangedAttack() const;
			virtual void				meleeAttack() const;
};
#endif