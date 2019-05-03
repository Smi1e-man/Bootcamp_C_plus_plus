/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Game.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seshevch <seshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 14:04:37 by atikhono          #+#    #+#             */
/*   Updated: 2019/04/07 19:26:52 by seshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GAME_HPP
# define GAME_HPP

#include "Hero.hpp"
#include "Enemy.hpp"
#include "Bullet.hpp"
#include <fstream>
#include <cstdlib>
#include <unistd.h>
#include <sys/ioctl.h>
#include <ncurses.h>

class Game
{
	private:
		Hero	*hero;
		Enemy	*enemy[24];
		int		_line;
		int		_coll;
		int		_time;
		
	public:
		Game();
		Game(Game const & src);
		~Game();
	

		Game	& operator=(Game const & src);

		void	run();
		void	update();
		void	draw_gameover();
		void	draw_gamewin();
		void	draw_window(int x, int y);

};

#endif
