/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seshevch <seshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 18:50:37 by seshevch          #+#    #+#             */
/*   Updated: 2019/04/02 20:01:34 by seshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon
{
	public:
			Weapon(std::string);
			Weapon();
			~Weapon();

			void			setType(std::string);
			std::string		&getType();
			
	private:
			std::string		type;
};
#endif
