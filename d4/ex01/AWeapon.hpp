/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seshevch <seshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 19:03:07 by seshevch          #+#    #+#             */
/*   Updated: 2019/04/06 15:04:43 by seshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <iostream>

class AWeapon
{
	protected:
			std::string				_name;
			int						_damage;
			int						_apcost;
	public:
			AWeapon(std::string const & name, int apcost, int damage);
			AWeapon(AWeapon const &);
			AWeapon();
			virtual ~AWeapon();
			AWeapon&				operator=(AWeapon const &);
			std::string const		getName() const;
			int						getAPCost() const;
			int						getDamage() const;
			virtual void			attack() const = 0;
};
#endif