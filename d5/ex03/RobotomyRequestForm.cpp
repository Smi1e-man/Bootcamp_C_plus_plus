/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seshevch <seshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 18:43:37 by seshevch          #+#    #+#             */
/*   Updated: 2019/04/09 20:02:13 by seshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45, target)
{	
	
	return ;
}
RobotomyRequestForm::~RobotomyRequestForm()
{
	return ;
}
RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src)
{
	*this = src;
}
RobotomyRequestForm&		RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs)
{
	Form::operator=(rhs);
	return *this;
}

void		RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	Form::execute(executor);

	if (rand() % 2 == 0)
		std::cout<< "BRRRR... " + Form::getTarget() + " has been robotomized successfully 50%/ of the time."<< std::endl;
	else
		std::cout<< "it’s a failure."<< std::endl;
}