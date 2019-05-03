/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seshevch <seshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 13:09:13 by seshevch          #+#    #+#             */
/*   Updated: 2019/04/09 17:12:06 by seshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

class Bureaucrat
{
	private:
			std::string const		_name;
			int						_grade;
	public:
			Bureaucrat();
			Bureaucrat(std::string const, int);
			~Bureaucrat();
			Bureaucrat(Bureaucrat const &);
			Bureaucrat&		operator=(Bureaucrat const &);

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

			void					increment();
			void					decrement();

			std::string				getName() const;
			int						getGrade() const;
};
std::ostream&					operator<<(std::ostream& out, Bureaucrat const &);

#endif