/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seshevch <seshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 12:10:46 by seshevch          #+#    #+#             */
/*   Updated: 2019/04/10 14:27:56 by seshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>

# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{
	public:
			Intern();
			~Intern();
			Intern(Intern const &);
			Intern&		operator=(Intern const &);

			int				valid(std::string);

			Form*			Pres(std::string target);
			Form*			Rob(std::string target);
			Form*			Shrub(std::string target);

			Form*			makeForm(std::string, std::string);
};

#endif