/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seshevch <seshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 12:13:56 by seshevch          #+#    #+#             */
/*   Updated: 2019/04/05 15:40:27 by seshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string.h>

class ClapTrap
{
	protected:
			int				Hit_points;
			int				Max_hit_points;
			int				Energy_points;
			int				Max_energy_points;
			int				Level_;
			std::string		Name_;
			int				Melee_attack_damage;
			int				Ranged_attack_damage;
			int				Armor_damage_reduction;

	public:
			ClapTrap();
			ClapTrap(std::string name);
			~ClapTrap();
			ClapTrap(ClapTrap const & src);
			ClapTrap&		operator=(ClapTrap const & rhs);

			void			rangedAttack(std::string const & target);
			void			meleeAttack(std::string const & target);

			void			takeDamage(unsigned int amount);
			void			beRepaired(unsigned int amount);
};

#endif