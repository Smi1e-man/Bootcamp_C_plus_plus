/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seshevch <seshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 13:56:47 by seshevch          #+#    #+#             */
/*   Updated: 2019/04/10 14:29:30 by seshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int			main(void)
{
	Intern  someRandomIntern;
	Form*   rrf;
	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	rrf = someRandomIntern.makeForm("qwer34wef", "Bender");
}