/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seshevch <seshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 12:46:04 by seshevch          #+#    #+#             */
/*   Updated: 2019/04/02 15:48:30 by seshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
	public:
			Zombie(std::string, std::string);
			Zombie();
			~Zombie();

			void			set_name(std::string);
			std::string		get_name();

			void			set_type();
			std::string		get_type();

			void			announce();

	private:
			std::string		name;
			std::string		type;
};
#endif
