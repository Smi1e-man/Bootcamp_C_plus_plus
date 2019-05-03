/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seshevch <seshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 12:30:44 by seshevch          #+#    #+#             */
/*   Updated: 2019/04/03 14:08:03 by seshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>

int			main(int ac, char **av)
{
	if (ac == 4)
	{
		std::string		s1 = av[1];
		std::string		s2 = av[2];
		std::string		s3 = av[3];

		std::ifstream inin(s1);
		if (!inin.is_open())
			std::cout<< "BAD_FILE\n";
		else
		{
			std::stringstream	buf;
			buf<< inin.rdbuf();
			inin.close();
			
			std::string str = buf.str();
			std::size_t	i = str.find(s2);
			while (i != std::string::npos)
			{
				str.replace(i, s2.length(), s3);
				i = str.find(s2);
			}

			std::ofstream outout(s1 + ".replace");
			outout<< str;
			outout.close();
		}
	}
	else
		std::cout<< "BAD_ARGAMENT\n";
	return (0);
}