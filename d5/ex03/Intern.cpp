/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seshevch <seshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 12:34:34 by seshevch          #+#    #+#             */
/*   Updated: 2019/04/10 14:26:05 by seshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	return ;
}
Intern::~Intern()
{
	return;
}
Intern::Intern(Intern const & src)
{
	*this = src;
}
Intern&		Intern::operator=(Intern const &)
{
	return *this;
}

int			Intern::valid(std::string func)
{
	if (!func.compare("robotomy request"))
	{
		return (0);
	}
	else if (!func.compare("shrubbery creation"))
	{
		return (1);
	}
	else if (!func.compare("presidential pardon"))
	{
		return (2);
	}
	else
		return 5;
}

Form*			Intern::Pres(std::string target)
{
	PresidentialPardonForm *_form = new PresidentialPardonForm(target);
	return _form;
}
Form*			Intern::Rob(std::string target)
{
	RobotomyRequestForm *_form = new RobotomyRequestForm(target);
	return _form;
}
Form*			Intern::Shrub(std::string target)
{
	ShrubberyCreationForm *_form = new ShrubberyCreationForm(target);
	return _form;
}

Form*			Intern::makeForm(std::string func, std::string target)
{
	Form *form = NULL;
	int		i;
	try
	{
		typedef Form* (Intern::*Frms_)(std::string);
		Frms_ MassForms[] =
		{
			&Intern::Rob,
			&Intern::Shrub,
			&Intern::Pres
		};
		if ((i = valid(func)) == 5)
			throw "Error: We don't know this function.";
		form = (this->*(MassForms[i]))(target);
		std::cout<< "Intern creates "<< form->getName()<< std::endl;
	}
	catch(const char* error)
	{
		std::cerr << error << '\n';
	}
	return form;
}