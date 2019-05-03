/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seshevch <seshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 19:17:57 by seshevch          #+#    #+#             */
/*   Updated: 2019/04/02 20:13:20 by seshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanB
{
	public:
			HumanB(std::string);
			~HumanB();

			void			attack();
			void			setWeapon(Weapon&);
			
	private:
			std::string		name_;
			Weapon			*weap_;
};
#endif
