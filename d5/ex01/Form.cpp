/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seshevch <seshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 15:34:07 by seshevch          #+#    #+#             */
/*   Updated: 2019/04/09 17:26:35 by seshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("ANON"), _grade_sign(1), _grade_exe(1)
{
	_sign = 0;
	return ;
}
Form::Form(std::string name, int const grade_sign, int const grade_exe) : _name(name), _grade_sign(grade_sign), _grade_exe(grade_exe)
{
	if (grade_sign < 1 || grade_exe < 1)
		throw GradeTooHighException();
	else if (grade_sign > 150 || grade_exe < 1)
		throw GradeTooLowException();
	_sign = 0;
}
Form::~Form()
{
	return ;
}
Form::Form(Form const & src) : _name(src._name), _grade_sign(src._grade_sign), _grade_exe(src._grade_exe) 
{
	*this = src;
}
Form&		Form::operator=(Form const & rhs)
{
	if (this != &rhs)
	{
		_sign = rhs._sign;
	}
	return *this;
}

Form::GradeTooHighException::GradeTooHighException()
{
	return ;
}
Form::GradeTooHighException::~GradeTooHighException() throw()
{
	return ;
}
Form::GradeTooHighException::GradeTooHighException(GradeTooHighException const & src)
{
	*this = src;
}
Form::GradeTooHighException&		Form::GradeTooHighException::operator=(GradeTooHighException const &)
{
	return *this;
}

const char		*Form::GradeTooHighException::what() const throw()
{
	return "GradeTooHighException !";
}

Form::GradeTooLowException::GradeTooLowException()
{
	return ;
}
Form::GradeTooLowException::~GradeTooLowException() throw()
{
	return ;
}
Form::GradeTooLowException::GradeTooLowException(GradeTooLowException const & src)
{
	*this = src;
}
Form::GradeTooLowException&		Form::GradeTooLowException::operator=(GradeTooLowException const &)
{
	return *this;
}
const char		*Form::GradeTooLowException::what() const throw()
{
	return "GradeTooLowException !";
}

void					Form::beSigned(Bureaucrat const & rhs)
{
	if (rhs.getGrade() > getGradeReq())
	{
		throw GradeTooLowException();
	}
	else
	{
		_sign = 1;
	}
}

std::string				Form::getName() const
{
	return _name;
}
bool					Form::getSign() const
{
	return _sign;
}
int						Form::getGradeExe() const
{
	return _grade_exe;
}
int						Form::getGradeReq() const
{
	return _grade_sign;
}

std::ostream&					operator<<(std::ostream& out, Form const & src)
{
	out << src.getName()<< ", Form grade required to sign it = "<< src.getGradeReq()<<
	", grade required to execute it = "<< src.getGradeExe()<< ". Form_sign = "<< src.getSign()<< std::endl;
	return out;
}