/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seshevch <seshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 17:16:19 by seshevch          #+#    #+#             */
/*   Updated: 2019/04/05 18:53:25 by seshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <iostream>

class Victim
{
	protected:
			std::string					_name;
			Victim();
	public:
			Victim(std::string);
			Victim(Victim const &);
			~Victim();
			Victim&					operator=(Victim const &);

			std::string					getName() const;
			void						getPolymorphed() const;

};
std::ostream&					operator<<(std::ostream &, Victim const &);

#endif