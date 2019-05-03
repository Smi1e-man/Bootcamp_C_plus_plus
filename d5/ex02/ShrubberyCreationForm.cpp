/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seshevch <seshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 17:58:00 by seshevch          #+#    #+#             */
/*   Updated: 2019/04/09 20:24:08 by seshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145, 137, target)
{
	return ;
}
ShrubberyCreationForm::~ShrubberyCreationForm()
{
	return ;
}
ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src)
{
	*this = src;
}
ShrubberyCreationForm&		ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs)
{
	Form::operator=(rhs);
	return *this;
}

void		ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	Form::execute(executor); 
	std::string	s1 =	"       _-_\n"
						"    /~~   ~~\\\n"
						" /~~         ~~\\\n"
						"{               }\n"
						" \\  _-     -_  /\n"
						"   ~  \\\\ //  ~\n"
						"_- -   | | _- _\n"
						"  _ -  | |   -_\n"
						"      // \\\\\n";
	std::ofstream out(Form::getTarget() + "_shrubbery");
	out << s1;
	out.close();
}