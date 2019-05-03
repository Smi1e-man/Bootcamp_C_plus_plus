/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISpaceMarine.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seshevch <seshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 15:13:01 by seshevch          #+#    #+#             */
/*   Updated: 2019/04/06 15:14:20 by seshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISPACEMARINE_HPP
# define ISPACEMARINE_HPP

# include <iostream>

class ISpaceMarine
{
	public:
			virtual 				~ISpaceMarine() {}
			virtual ISpaceMarine*	clone() const = 0;
			virtual void			battleCry() const = 0;
			virtual void			rangedAttack() const = 0;
			virtual void			meleeAttack() const = 0;
};
#endif