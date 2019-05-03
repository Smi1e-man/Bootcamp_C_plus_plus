/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seshevch <seshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 18:50:35 by seshevch          #+#    #+#             */
/*   Updated: 2019/04/09 20:02:29 by seshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>

# include "Form.hpp"

class PresidentialPardonForm : public Form
{
	public:
			PresidentialPardonForm();
			PresidentialPardonForm(std::string);
			~PresidentialPardonForm();
			PresidentialPardonForm(PresidentialPardonForm const &);
			PresidentialPardonForm&		operator=(PresidentialPardonForm const &);

			virtual void			execute(Bureaucrat const & executor) const;
};

#endif
