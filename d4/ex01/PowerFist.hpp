/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seshevch <seshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 20:03:59 by seshevch          #+#    #+#             */
/*   Updated: 2019/04/05 20:19:36 by seshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
# define POWERFIST_HPP

# include <iostream>
# include <string.h>

# include "AWeapon.hpp"

class PowerFist : public AWeapon
{
	public:
			PowerFist();
			PowerFist(PowerFist const &);
			~PowerFist();
			PowerFist&				operator=(PowerFist const &);
			void					attack() const;
};
#endif