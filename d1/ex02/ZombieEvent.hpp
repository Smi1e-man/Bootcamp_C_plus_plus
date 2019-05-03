/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seshevch <seshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 13:07:16 by seshevch          #+#    #+#             */
/*   Updated: 2019/04/02 16:12:48 by seshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_EVENT_HPP
# define ZOMBIE_EVENT_HPP

# include <iostream>
# include "Zombie.hpp"

class ZombieEvent
{
	public:
			ZombieEvent();
			~ZombieEvent();
			void			setZombieType(std::string);
			Zombie			*newZombie (std::string name);

	private:
			std::string		type;
};
#endif
