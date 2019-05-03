/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Object_data.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seshevch <seshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 14:54:20 by seshevch          #+#    #+#             */
/*   Updated: 2019/04/01 16:45:04 by seshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Object_data.hpp"

//First_NAME
void			Object_data::set_f_name(std::string f_name)
{
	Object_data::f_name = f_name;
}
std::string		Object_data::get_f_name()
{
	return (Object_data::f_name);
}

//Last_NAME
void			Object_data::set_l_name(std::string l_name)
{
	Object_data::l_name = l_name;
}
std::string		Object_data::get_l_name()
{
	return (Object_data::l_name);
}

//Nick_NAME
void			Object_data::set_nick_name(std::string nick_name)
{
	Object_data::nick_name = nick_name;
}
std::string		Object_data::get_nick_name()
{
	return (Object_data::nick_name);
}

//Login
void			Object_data::set_login(std::string login)
{
	Object_data::login = login;
}
std::string		Object_data::get_login()
{
	return (Object_data::login);
}

//Postal_address
void			Object_data::set_postal_address(std::string postal_address)
{
	Object_data::postal_address = postal_address;
}
std::string		Object_data::get_postal_address()
{
	return (Object_data::postal_address);
}

//Email
void			Object_data::set_email(std::string email)
{
	Object_data::email = email;
}
std::string		Object_data::get_email()
{
	return (Object_data::email);
}

//Phone_number
void			Object_data::set_phone_nbr(std::string phone_nbr)
{
	Object_data::phone_nbr = phone_nbr;
}
std::string		Object_data::get_phone_nbr()
{
	return (Object_data::phone_nbr);
}

//Birthday_date
void			Object_data::set_birthday(std::string birthday)
{
	Object_data::birthday = birthday;
}
std::string		Object_data::get_birthday()
{
	return (Object_data::birthday);
}

//Favorite_meal
void			Object_data::set_favorite_meal(std::string favorite_meal)
{
	Object_data::favorite_meal = favorite_meal;
}
std::string		Object_data::get_favorite_meal()
{
	return (Object_data::favorite_meal);
}

//Color
void			Object_data::set_color(std::string color)
{
	Object_data::color = color;
}
std::string		Object_data::get_color()
{
	return (Object_data::color);
}

//Secret
void			Object_data::set_secret(std::string secret)
{
	Object_data::secret = secret;
}
std::string		Object_data::get_secret()
{
	return (Object_data::secret);
}
