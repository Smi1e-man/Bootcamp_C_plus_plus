/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seshevch <seshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 18:01:27 by seshevch          #+#    #+#             */
/*   Updated: 2019/04/07 17:26:38 by seshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <iostream>
# include <ncurses.h>

# define MAX_X 150
# define MIN_X 1
# define MAX_Y 150
# define MIN_Y 1

class Enemy
{
	private:
			int			_hp;
			int			_damage;
			int			_coords[2];

	public:
			Enemy();
			Enemy(int, int);
			Enemy(Enemy const &);
			virtual ~Enemy();
			Enemy&				operator=(Enemy const &);

			virtual int			getHP();
			virtual void		takeDamage(int);

			virtual int*		getCoords();
			virtual void		moveX(int);
			virtual void		moveY(int);

			int					clmp(int input, int lower, int upper);

			void				display();
			void				clean_display();
};

#endif