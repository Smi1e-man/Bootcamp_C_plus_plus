/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seshevch <seshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 18:50:40 by seshevch          #+#    #+#             */
/*   Updated: 2019/04/09 20:14:16 by seshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 25, 5, target)
{
	return ;
}
PresidentialPardonForm::~PresidentialPardonForm()
{
	return ;
}
PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src)
{
	*this = src;
}
PresidentialPardonForm&		PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs)
{
	Form::operator=(rhs);
	return *this;
}

void		PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	Form::execute(executor);

	std::cout<< Form::getTarget()<< " has been pardoned by Zaphod Beeblebrox."<< std::endl;
}
