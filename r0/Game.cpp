/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Game.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seshevch <seshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 13:26:18 by atikhono          #+#    #+#             */
/*   Updated: 2019/04/07 19:41:50 by seshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Game.hpp"

Game::Game()
{
	srand(time(0));
	initscr();
	start_color();
	cbreak();
	keypad(stdscr, TRUE);
	nodelay(stdscr, TRUE);
	noecho();
	clear();
	erase();
	refresh();
	init_pair(1, COLOR_CYAN, COLOR_BLACK);
	init_pair(2, COLOR_GREEN, COLOR_BLACK);
	init_pair(3, COLOR_RED, COLOR_BLACK);
	init_pair(4, COLOR_CYAN, COLOR_BLACK);
	init_pair(5, COLOR_YELLOW, COLOR_BLACK);
	_time = 0;
}

Game::Game(Game const & src) { *this = src; }
Game	& Game::operator=(Game const & src) { std::cout << src._coll; return (*this); }
Game::~Game() {}

void	Game::draw_window(int x, int y)
{
	x = 150;
	y = 50;
	attron(COLOR_PAIR(2));
	for (int i = 0; i < x; i++)
	{
		mvprintw(0, i, "^");
		mvprintw(y - 5, i, "-");
		mvprintw(y - 1, i, "v");
	}
	for (int i = 1; i < y - 1; i++)
	{
		mvprintw(i, 0, "|");
		mvprintw(i, x - 1, "|");
	}
	attroff(COLOR_PAIR(2));
	attron(COLOR_PAIR(3));
	mvprintw(47, 20, "HP: %i", this->hero->getHP());
	attroff(COLOR_PAIR(3));
	attron(COLOR_PAIR(5));
	mvprintw(47, 67, "FRAGS: %i", this->hero->getFrags());
	attroff(COLOR_PAIR(5));
	attron(COLOR_PAIR(4));
	mvprintw(47, 121, "TIME: %i", this->_time / 60);
	attroff(COLOR_PAIR(4));
}

void	Game::draw_gamewin()
{
	int ch;
	erase();
	attron(COLOR_PAIR(2));
	mvprintw(25, 67, "    WINNER    ");
	mvprintw(27, 67, "Get out there!");
	mvprintw(29, 67, "   Press F1   ");
	attroff(COLOR_PAIR(2));
	while ((ch = getch()) != KEY_F(1))
		;
}

void	Game::draw_gameover()
{
	int ch;
	erase();
	attron(COLOR_PAIR(3));
	mvprintw(25, 67, "    LOOSER    ");
	mvprintw(27, 67, "Get out there!");
	mvprintw(29, 67, "   Press F1   ");
	attroff(COLOR_PAIR(3));
	while ((ch = getch()) != KEY_F(1))
		;
}

void	Game::run()
{
	int	ch;

	hero = new Hero(1, 23);	

	while ((ch = getch()) != ' ')
	{
		attron(COLOR_PAIR(1));
		mvprintw(10, 45, "        Move with WASD        ");
		mvprintw(14, 45, "Start: press FIRE (just space)");
		attroff(COLOR_PAIR(1));
	}
	erase();
	while ((ch = getch()) != KEY_F(1))
	{
		usleep(20000);
		_time += 1;
		struct ttysize ts;
		ioctl(STDIN_FILENO, TIOCGSIZE, &ts);
		_coll = ts.ts_cols;
		_line = ts.ts_lines;
		switch (ch)
		{
			case ('w') : {hero->moveY(-1); break;}
			case ('a') : {hero->moveX(-1); break;}
			case ('s') : {hero->moveY(1); break;}
 			case ('d') : {hero->moveX(1); break;}
			case (' ') : {hero->attack(); break;}
 		}
		hero->Star_step();
		hero->Star_display();
		hero->Bullet_step();
		hero->Bullet_display();
		hero->Enemy_step();
		hero->Enemy_display();
		hero->display();
		this->draw_window(_coll, _line);
		if (hero->getHP() == 0)
		{
			this->draw_gameover();
			break ;
		}
		if (hero->getFrags() == 10)
		{
			this->draw_gamewin();
			break ;
		}
		refresh();
	}
}
