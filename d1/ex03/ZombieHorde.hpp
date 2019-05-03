/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seshevch <seshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 14:30:01 by seshevch          #+#    #+#             */
/*   Updated: 2019/04/02 15:20:11 by seshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

# include <iostream>
# include "Zombie.hpp"

class ZombieHorde
{
	public:
			ZombieHorde(int);
			~ZombieHorde();

			void			announce();

	private:
			int				N;
			Zombie			*zomb;
};
#endif
