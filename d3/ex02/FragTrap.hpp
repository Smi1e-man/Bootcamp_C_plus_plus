/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seshevch <seshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 14:09:37 by seshevch          #+#    #+#             */
/*   Updated: 2019/04/05 15:47:42 by seshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <string.h>

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	private:
			int				Lazer_damage;
			int				Strange_damage;
			int				Skyrim_damage;
	public:
			FragTrap();
			FragTrap(std::string name);
			~FragTrap();
			FragTrap(FragTrap const & src);

			void			lazerAttack(std::string const & target);
			void			strangeAttack(std::string const & target);
			void			skyrimAttack(std::string const & target);

			void			vaulthunter_dot_exe(std::string const & target);
};

#endif
