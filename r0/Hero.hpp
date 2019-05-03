/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Hero.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seshevch <seshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 17:50:47 by seshevch          #+#    #+#             */
/*   Updated: 2019/04/07 19:01:34 by seshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HERO_HPP
# define HERO_HPP

# include <iostream>
# include <ncurses.h>

# define MAX_X 150
# define MIN_X 1
# define MAX_Y 150
# define MIN_Y 1

# include "Bullet.hpp"
# include "Enemy.hpp"
# include "Star.hpp"

class Hero
{
	private:
			typedef struct		s_bullets
			{
				Bullet*			bullet;
			}					t_bullets;

			t_bullets*			_bullets[200];
			Enemy*				_enemy;
			Star*				_star;
			int					_frags;
			int					_hp;
			int					_coords[2];

	public:
			Hero();
			Hero(int, int);
			Hero(Hero const &);
			~Hero();
			Hero&				operator=(Hero const &);

			int			getHP();
			int			getFrags();
			void		takeDamage(int damage);

			void		attack();

			int*		getCoords();
			void		moveX(int);
			void		moveY(int);

			void		newBullet(int x, int y);
			void		Bullet_step();
			void		Bullet_display();

			void		Enemy_step();
			void		Enemy_display();

			void		Star_step();
			void		Star_display();

			int			clmp(int input, int lower, int upper);

			void		clean_display();
			void		display();
};

#endif