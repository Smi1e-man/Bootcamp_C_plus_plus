/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seshevch <seshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 11:20:12 by seshevch          #+#    #+#             */
/*   Updated: 2019/04/05 15:47:26 by seshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include <string.h>

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
			ScavTrap();
			ScavTrap(std::string name);
			~ScavTrap();
			ScavTrap(ScavTrap const & src);

			void			water_challenge();
			void			lopata_challenge();
			void			maneken_challenge();

			void			challengeNewcomer();
};
#endif