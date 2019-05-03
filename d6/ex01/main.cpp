/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seshevch <seshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 16:06:07 by seshevch          #+#    #+#             */
/*   Updated: 2019/04/10 17:07:39 by seshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>

struct Data
{
	std::string s1;
	int n;
	std::string s2;
};


std::string		rund8()
{
	std::string		s1 = 	"abcdefghijklmnopqrstuvwxyz"
							"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
							"0123456789";
	std::string		s2;

	srand(time(0));
	for(int i = 0; i < 8; i++)
	{
		s2 += s1[rand() % 62];
	}
	return s2;
}

Data * deserialize( void * raw )
{
	Data*	sc = static_cast<Data*>(raw);
	return sc;
}

void*			serialize( void )
{
	Data*		strct = new Data;

	strct->s1 = rund8();
	strct->n =rand();
	strct->s2 = rund8();
	return strct;
}

int			main(void)
{
	Data*	check;
	check = deserialize(serialize());

	std::cout<< check->s1<< check->n<< check->s2<<std::endl;
	return 0;
}