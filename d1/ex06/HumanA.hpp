/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seshevch <seshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 19:06:51 by seshevch          #+#    #+#             */
/*   Updated: 2019/04/02 20:07:57 by seshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanA
{
	public:
			HumanA(std::string, Weapon&);
			~HumanA();

			void			attack();
			
	private:
			std::string		name_;
			Weapon			&weap_;
};
#endif
