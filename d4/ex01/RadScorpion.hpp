/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seshevch <seshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 12:16:35 by seshevch          #+#    #+#             */
/*   Updated: 2019/04/06 12:17:38 by seshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

# include <iostream>
# include <string.h>

# include "Enemy.hpp"

class RadScorpion : public Enemy
{
	public:
			RadScorpion();
			RadScorpion(RadScorpion const &);
            ~RadScorpion();
			RadScorpion&				operator=(RadScorpion const &);
			virtual	void				takeDamage(int);
};

#endif
