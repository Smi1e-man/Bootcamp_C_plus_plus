/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seshevch <seshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 18:43:10 by seshevch          #+#    #+#             */
/*   Updated: 2019/04/09 20:01:58 by seshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>

# include "Form.hpp"

class RobotomyRequestForm : public Form
{
	public:
			RobotomyRequestForm();
			RobotomyRequestForm(std::string);
			~RobotomyRequestForm();
			RobotomyRequestForm(RobotomyRequestForm const &);
			RobotomyRequestForm&		operator=(RobotomyRequestForm const &);

			virtual void			execute(Bureaucrat const & executor) const;
};

#endif