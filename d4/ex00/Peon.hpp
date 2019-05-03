/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seshevch <seshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 17:33:10 by seshevch          #+#    #+#             */
/*   Updated: 2019/04/05 19:13:48 by seshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

# include <iostream>

# include "Victim.hpp"

class Peon : public Victim
{
	private:
			Peon();
	public:
			Peon(std::string);
			Peon(Peon const &);
			~Peon();
			Peon&					operator=(Peon const &);
};

#endif
