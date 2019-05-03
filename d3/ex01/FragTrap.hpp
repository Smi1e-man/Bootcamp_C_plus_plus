/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seshevch <seshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 14:09:37 by seshevch          #+#    #+#             */
/*   Updated: 2019/04/05 11:20:07 by seshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <string.h>

class FragTrap
{
	private:
			int				Hit_points;
			int				Max_hit_points;
			int				Energy_points;
			int				Max_energy_points;
			int				Level_;
			std::string		Name_;
			int				Melee_attack_damage;
			int				Ranged_attack_damage;
			int				Lazer_damage;
			int				Strange_damage;
			int				Skyrim_damage;
			int				Armor_damage_reduction;

	public:
			FragTrap();
			FragTrap(std::string);
			~FragTrap();
			FragTrap(FragTrap const &);
			FragTrap&		operator=(FragTrap const &);

			void			rangedAttack(std::string const & target);
			void			meleeAttack(std::string const & target);
			void			lazerAttack(std::string const & target);
			void			strangeAttack(std::string const & target);
			void			skyrimAttack(std::string const & target);

			void			takeDamage(unsigned int amount);
			void			beRepaired(unsigned int amount);

			void			vaulthunter_dot_exe(std::string const & target);
};

#endif
