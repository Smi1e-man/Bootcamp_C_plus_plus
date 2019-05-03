/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seshevch <seshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 13:37:55 by seshevch          #+#    #+#             */
/*   Updated: 2019/04/09 17:12:21 by seshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("ANON")
{
	_grade = 150;
}
Bureaucrat::Bureaucrat(std::string const name, int grade) : _name(name)
{
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	_grade = grade;
}
Bureaucrat::~Bureaucrat()
{
	return ;
}
Bureaucrat::Bureaucrat(Bureaucrat const & src) : _name(src._name)
{
	*this = src;
}
Bureaucrat&		Bureaucrat::operator=(Bureaucrat const & rhs)
{
	if (this != &rhs)
	{
		_grade = rhs._grade;
	}
	return *this;
}

Bureaucrat::GradeTooHighException::GradeTooHighException()
{
	return ;
}
Bureaucrat::GradeTooHighException::~GradeTooHighException() throw()
{
	return ;
}
Bureaucrat::GradeTooHighException::GradeTooHighException(GradeTooHighException const & src)
{
	*this = src;
}
Bureaucrat::GradeTooHighException&		Bureaucrat::GradeTooHighException::operator=(GradeTooHighException const &)
{
	return *this;
}

const char		*Bureaucrat::GradeTooHighException::what() const throw()
{
	return "GradeTooHighException !";
}

Bureaucrat::GradeTooLowException::GradeTooLowException()
{
	return ;
}
Bureaucrat::GradeTooLowException::~GradeTooLowException() throw()
{
	return ;
}
Bureaucrat::GradeTooLowException::GradeTooLowException(GradeTooLowException const & src)
{
	*this = src;
}
Bureaucrat::GradeTooLowException&		Bureaucrat::GradeTooLowException::operator=(GradeTooLowException const &)
{
	return *this;
}
const char		*Bureaucrat::GradeTooLowException::what() const throw()
{
	return "GradeTooLowException !";
}

void					Bureaucrat::increment()
{
	if (_grade - 1 < 1)
	{
		throw GradeTooHighException();
	}
	else
	{
		_grade -= 1;
	}
}
void					Bureaucrat::decrement()
{
	if (_grade + 1 > 150)
	{
		throw GradeTooLowException();
	}
	else
	{
		_grade += 1;
	}
}

std::string				Bureaucrat::getName() const
{
	return _name;
}
int						Bureaucrat::getGrade() const
{
	return _grade;
}

std::ostream&					operator<<(std::ostream& out, Bureaucrat const & src)
{
	out << src.getName()<< ", bureaucrat grade "<< src.getGrade()<< std::endl;
	return out;
}