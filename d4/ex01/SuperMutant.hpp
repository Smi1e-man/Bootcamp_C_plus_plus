/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seshevch <seshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 20:29:11 by seshevch          #+#    #+#             */
/*   Updated: 2019/04/06 12:17:11 by seshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

# include <iostream>
# include <string.h>

# include "Enemy.hpp"

class SuperMutant : public Enemy
{
	public:
			SuperMutant();
			SuperMutant(SuperMutant const &);
            ~SuperMutant();
			SuperMutant&				operator=(SuperMutant const &);
			virtual	void				takeDamage(int);
};

#endif