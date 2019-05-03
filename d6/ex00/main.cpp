/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seshevch <seshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 15:28:15 by seshevch          #+#    #+#             */
/*   Updated: 2019/04/10 19:24:30 by seshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>
#include <limits>
#include <math.h>
#include <cfloat>

int			main(int ac, char **av)
{
	char	c;
	int		i;
	float	f;
	double	d;
	long double	buff = 0.0;

	if (ac >= 2)
	{
		std::string		s1 = av[1];
		if (s1.length() == 1 && std::isprint(s1[0]) && !std::isdigit(s1[0]))
		{
			c = s1[0];
			i = s1[0];
			f = s1[0];
			d = s1[0];
		}
		else
		{
			buff = strtold(av[1], NULL);
			c = static_cast<int>(buff);
			i = static_cast<int>(buff);
			f = static_cast<float>(buff);
			d = static_cast<double>(buff);
		}
		if ((buff && buff < CHAR_MIN && buff > CHAR_MAX) || isnan(buff))
			std::cout<< "char: impossible"<< std::endl;
		else if (!std::isprint(c))
			std::cout<< "char: Non displayable"<< std::endl;
		else
			std::cout<< "char: "<< c<< std::endl;
		if ((buff && (buff > INT_MAX || buff < INT_MIN)) || isnan(buff))
			std::cout << "int: " << "impossible" << std::endl;
		else
    		std::cout << "int: " << i << std::endl;

		if (buff && (buff > FLT_MAX || buff < FLT_MIN) && !isinf(buff))
       		std::cout << "float: " << "impossible" << std::endl;
		else
		{
			if (f == static_cast<float>(static_cast<int>(f)))
				std::cout << std::fixed << std::setprecision(1);
			std::cout << "float: " << f << "f" << std::endl;
		}

		if (buff && (buff > DBL_MAX || buff < DBL_MIN) && !isinf(buff))
			std::cout << "double: " << "impossible" << std::endl;
		else
			std::cout << "double: " << d << std::endl;
	}
	else
	{
		std::cout<< "./convert <one argument(char or int or float or double)>"<< std::endl;
	}
	return 0;
}