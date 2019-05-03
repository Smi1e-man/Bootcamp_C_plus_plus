/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seshevch <seshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 13:56:47 by seshevch          #+#    #+#             */
/*   Updated: 2019/04/09 20:25:54 by seshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int			main(void)
{
	try
	{
		Bureaucrat a("Mad_Bureaucrat1", 15);
		ShrubberyCreationForm b("house1");
		a.signForm(b);
		a.executeForm(b);
		b.execute(a);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Bureaucrat a("Mad_Bureaucrat2", 150);
		RobotomyRequestForm b("house2");
		a.signForm(b);
		a.executeForm(b);
		b.execute(a);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
		try
	{
		Bureaucrat a("Mad_Bureaucrat3", 21);
		PresidentialPardonForm b("house3");
		a.signForm(b);
		a.executeForm(b);
		b.execute(a);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}