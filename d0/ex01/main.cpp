/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seshevch <seshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 12:43:14 by seshevch          #+#    #+#             */
/*   Updated: 2019/04/01 20:16:10 by seshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Object_data.hpp"

Object_data		ft_add_object()
{
	Object_data 	phone_book;
	std::string		data;

	std::cout<< "Press your First_Name: ";
	std::cin>> data;
	phone_book.set_f_name(data);

	std::cout<< "Press your Last_Name: ";
	std::cin>> data;
	phone_book.set_l_name(data);

	std::cout<< "Press your Nick_Name: ";
	std::cin>> data;
	phone_book.set_nick_name(data);

	std::cout<< "Press your Login: ";
	std::cin>> data;
	phone_book.set_login(data);

	std::cout<< "Press your Postal_Address: ";
	std::cin>> data;
	phone_book.set_postal_address(data);

	std::cout<< "Press your Email: ";
	std::cin>> data;
	phone_book.set_email(data);

	std::cout<< "Press your Phone_Number: ";
	std::cin>> data;
	phone_book.set_phone_nbr(data);

	std::cout<< "Press your Birthday_Date: ";
	std::cin>> data;
	phone_book.set_birthday(data);

	std::cout<< "Press your Favorite_Meal: ";
	std::cin>> data;
	phone_book.set_favorite_meal(data);

	std::cout<< "Press your Underwear_Color: ";
	std::cin>> data;
	phone_book.set_color(data);

	std::cout<< "Press your Darkest_Secret(avoid spaces, use \"_\" instead): ";
	std::cin>> data;
	phone_book.set_secret(data);

	return (phone_book);
}

void		ft_exit()
{
	exit(1);
}

void		ft_search(Object_data phone_book[8], int count)
{
	std::string		str;
	int				i;

	for (i = 0; count != -1 && i <= count; i++)
	{
		std::cout<< std::setw(10)<< i + 1;
		std::cout<< "|";
		str = phone_book[i].get_f_name();
		if (str.length() > 10)
			std::cout<< std::setw(10)<< str.substr(0,9) + '.';
		else
			std::cout<< std::setw(10)<< str;
		std::cout<< "|";
		str = phone_book[i].get_l_name();
		if (str.length() > 10)
			std::cout<< std::setw(10)<< str.substr(0,9) + '.';
		else
			std::cout<< std::setw(10)<< str;
		std::cout<< "|";
		str = phone_book[i].get_nick_name();
		if (str.length() > 10)
			std::cout<< std::setw(10)<< str.substr(0,9) + '.';
		else
			std::cout<< std::setw(10)<< str;
		std::cout<< "|"<< std::endl;
	}
}

int			main(void)
{
	std::string			command;
	Object_data			phone_book[8];
	int					count;

	count = -1;
	while(true)
	{
		std::cin>> command;
		if (!command.compare("EXIT"))
			ft_exit();
		else if (!command.compare("ADD") && count == 7)
			std::cout<< "FULL PHONE BOOK"<< std::endl;
		else if (!command.compare("ADD"))
			phone_book[++count] = ft_add_object();
		else if (!command.compare("SEARCH"))
			ft_search(phone_book, count);
	}
	return (0);
}