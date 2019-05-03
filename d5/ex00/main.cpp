/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seshevch <seshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 13:56:47 by seshevch          #+#    #+#             */
/*   Updated: 2019/04/09 15:22:53 by seshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int			main(void)
{
	try
	{
		Bureaucrat a("LordOfChaos1", 151);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Bureaucrat b("LordOfChaos2", 0);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Bureaucrat c("LordOfChaos3", 1);
		std::cout<< c;
		c.increment();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Bureaucrat d("LordOfChaos4", 150);
		std::cout<< d;
		d.decrement();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}