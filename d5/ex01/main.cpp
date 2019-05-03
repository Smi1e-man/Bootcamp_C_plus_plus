/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seshevch <seshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 13:56:47 by seshevch          #+#    #+#             */
/*   Updated: 2019/04/09 16:40:21 by seshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int			main(void)
{
	try
	{
		Bureaucrat a("Mad_Bureaucrat", 15);
		Form b("FORM1", 25, 18);
		a.signForm(b);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Bureaucrat a("Mad_Bureaucrat", 15);
		Form b("FORM2", 12, 7);
		a.signForm(b);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}