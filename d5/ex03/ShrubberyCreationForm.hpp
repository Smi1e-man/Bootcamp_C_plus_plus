/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seshevch <seshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 17:49:13 by seshevch          #+#    #+#             */
/*   Updated: 2019/04/09 19:49:32 by seshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include <fstream>
# include <sstream>

# include "Form.hpp"

class ShrubberyCreationForm : public Form
{
	public:
			ShrubberyCreationForm();
			ShrubberyCreationForm(std::string);
			~ShrubberyCreationForm();
			ShrubberyCreationForm(ShrubberyCreationForm const &);
			ShrubberyCreationForm&		operator=(ShrubberyCreationForm const &);

			virtual void			execute(Bureaucrat const & executor) const;
};

#endif