/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seshevch <seshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 11:55:33 by seshevch          #+#    #+#             */
/*   Updated: 2019/04/02 12:34:43 by seshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

# include <iostream>

class Pony
{
	public:
			void			set_name(std::string);
			std::string		get_name();

			void			set_color(std::string);
			std::string		get_color();

			void			set_age(std::string);
			std::string		get_age();
	private:
			std::string		name;
			std::string		color;
			std::string		age;
};
#endif
