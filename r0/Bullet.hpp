/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bullet.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seshevch <seshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 18:23:57 by seshevch          #+#    #+#             */
/*   Updated: 2019/04/07 17:06:19 by seshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Bullet_HPP
# define Bullet_HPP

# include <iostream>
# include <ncurses.h>

# define MAX_X 150
# define MIN_X 1
# define MAX_Y 150
# define MIN_Y 1

// # include "Game.hpp"

class Bullet
{
	private:
			int					_damage;
			int					_coords[2];

	public:
			Bullet();
			Bullet(int, int);
			Bullet(Bullet const &);
			~Bullet();
			Bullet&				operator=(Bullet const &);
			
			int*		getCoords();
			void		moveX(int);
			void		moveY(int);

			int			clmp(int input, int lower, int upper);

			void		clean_display();
			void		display();
};

#endif