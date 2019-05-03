/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seshevch <seshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 19:26:22 by seshevch          #+#    #+#             */
/*   Updated: 2019/04/05 20:18:05 by seshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PlasmaRifle_HPP
# define PlasmaRifle_HPP

# include <iostream>
# include <string.h>

# include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
	public:
			PlasmaRifle();
			PlasmaRifle(PlasmaRifle const &);
			~PlasmaRifle();
			PlasmaRifle&				operator=(PlasmaRifle const &);
			void						attack() const;
};
#endif