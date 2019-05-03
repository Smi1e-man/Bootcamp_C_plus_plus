/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seshevch <seshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 16:33:48 by seshevch          #+#    #+#             */
/*   Updated: 2019/04/02 17:35:11 by seshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <sstream>

class Brain
{
	public:
			Brain();
			~Brain();

			void			set_iq(std::string);
			std::string		get_iq();

			std::string		identify();
			
	private:
			std::string		iq;
};
#endif