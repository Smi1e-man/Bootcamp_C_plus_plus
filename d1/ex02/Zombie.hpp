/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seshevch <seshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 12:46:04 by seshevch          #+#    #+#             */
/*   Updated: 2019/04/02 13:25:15 by seshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
	public:
			Zombie(std::string, std::string);
			~Zombie();

			void			announce();

	private:
			std::string		name;
			std::string		type;
};
#endif
