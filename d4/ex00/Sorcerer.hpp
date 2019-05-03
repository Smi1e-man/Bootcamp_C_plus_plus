/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seshevch <seshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 16:35:37 by seshevch          #+#    #+#             */
/*   Updated: 2019/04/05 18:15:09 by seshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <iostream>

# include "Victim.hpp"

class Sorcerer
{
	private:
			std::string					_name;
			std::string					_title;
	public:
			Sorcerer();
			Sorcerer(std::string, std::string);
			Sorcerer(Sorcerer const &);
			~Sorcerer();
			Sorcerer&					operator=(Sorcerer const &);

			std::string					getName() const;
			std::string					getTitle() const;

			void						polymorph(Victim const &) const;
};
std::ostream&					operator<<(std::ostream &, Sorcerer const &);

#endif