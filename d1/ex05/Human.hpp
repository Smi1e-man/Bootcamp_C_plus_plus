/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seshevch <seshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 17:25:49 by seshevch          #+#    #+#             */
/*   Updated: 2019/04/02 18:41:32 by seshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

# include "Brain.hpp"

class Human
{
	public:
			Human(std::string);
			Human();
			~Human();

			std::string		identify();
			Brain			&getBrain();
			
	private:
			Brain			brain;
};
#endif