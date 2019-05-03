/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seshevch <seshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 12:20:56 by seshevch          #+#    #+#             */
/*   Updated: 2019/04/06 15:05:22 by seshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include <string.h>

# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character
{
        private:
				std::string					_name;
				int							_ap_number;
				AWeapon*					_weapon;
        public:
                Character(std::string const & name);
				Character(Character const &);
				Character();
				~Character();
				Character&					operator=(Character const & rhs);
				void						recoverAP();
				void						equip(AWeapon*);
				void						attack(Enemy*);
				std::string const			getName() const;
				int							getApNumber() const;
				AWeapon*					getWeapon() const;
};
std::ostream&					operator<<(std::ostream &, Character const &);

#endif