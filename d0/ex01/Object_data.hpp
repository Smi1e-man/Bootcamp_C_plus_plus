/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Object_data.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seshevch <seshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 13:55:44 by seshevch          #+#    #+#             */
/*   Updated: 2019/04/01 19:36:08 by seshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __OBJECT_DATA
# define __OBJECT_DATA

# include <iostream>
# include <iomanip>
# include <string>

class Object_data
{
	public:
			void			set_f_name(std::string f_namer);
			std::string		get_f_name();

			void			set_l_name(std::string);
			std::string		get_l_name();

			void			set_nick_name(std::string);
			std::string		get_nick_name();

			void			set_login(std::string);
			std::string		get_login();

			void			set_postal_address(std::string);
			std::string		get_postal_address();

			void			set_email(std::string);
			std::string		get_email();

			void			set_phone_nbr(std::string);
			std::string		get_phone_nbr();

			void			set_birthday(std::string);
			std::string		get_birthday();

			void			set_favorite_meal(std::string);
			std::string		get_favorite_meal();

			void			set_color(std::string);
			std::string		get_color();

			void			set_secret(std::string);
			std::string		get_secret();

	private:
			std::string		f_name;
			std::string		l_name;
			std::string		nick_name;
			std::string		login;
			std::string		postal_address;
			std::string		email;
			std::string		phone_nbr;
			std::string		birthday;
			std::string		favorite_meal;
			std::string		color;
			std::string		secret;
};
#endif
