/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seshevch <seshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 15:30:18 by seshevch          #+#    #+#             */
/*   Updated: 2019/04/09 17:23:29 by seshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;
class Form
{
	private:
			std::string	const		_name;
			bool					_sign;
			int	const				_grade_sign;
			int	const				_grade_exe;

	public:
			Form();
			Form(std::string const, int const, int const);
			~Form();
			Form(Form const &);
			Form&		operator=(Form const &);

			class GradeTooHighException : public std::exception
 			{
				public:
						GradeTooHighException();
						virtual ~GradeTooHighException() throw();
						GradeTooHighException(GradeTooHighException const &);
						GradeTooHighException&		operator=(GradeTooHighException const &);
						virtual const char		*what() const throw();

			};
			class GradeTooLowException : public std::exception
			{
				public:
						GradeTooLowException();
						virtual ~GradeTooLowException() throw();
						GradeTooLowException(GradeTooLowException const &);
						GradeTooLowException&		operator=(GradeTooLowException const &);
						virtual const char		*what() const throw();

			};

			void					beSigned(Bureaucrat const &);

			std::string				getName() const;
			bool					getSign() const;
			int						getGradeExe() const;
			int						getGradeReq() const;
};
std::ostream&					operator<<(std::ostream& out, Form const &);

#endif