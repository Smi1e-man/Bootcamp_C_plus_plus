/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Star.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seshevch <seshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 18:52:50 by seshevch          #+#    #+#             */
/*   Updated: 2019/04/07 18:56:31 by seshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Star_HPP
# define Star_HPP

# include <iostream>
# include <ncurses.h>

class Star
{
	private:
			int			_coords[2];

	public:
			Star();
			Star(int, int);
			Star(Star const &);
			~Star();
			Star&		operator=(Star const &);

			int*		getCoords();
			void		moveX(int);
			void		moveY(int);

			int			clmp(int input, int lower, int upper);

			void		display();
			void		clean_display();
};

#endif