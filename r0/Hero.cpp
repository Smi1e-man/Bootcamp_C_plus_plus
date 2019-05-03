/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Hero.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seshevch <seshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 17:56:10 by seshevch          #+#    #+#             */
/*   Updated: 2019/04/07 19:37:16 by seshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Hero.hpp"

int		Hero::clmp(int input, int lower, int upper) { return (std::max(lower, std::min(input, upper))); }

Hero::Hero()
{
	_hp = 100;
	_coords[0] = 0;
	_coords[1] = 0;
	_enemy = NULL;
	_star = NULL;
	_frags = 0;
}
Hero::Hero(int x, int y)
{
	_hp = 100;
	_coords[0] = clmp(x, 1, 148);
	_coords[1] = clmp(y, 1, 44);
}
Hero::Hero(Hero const & src)
{
	*this = src;
}
Hero::~Hero()
{
	return ;
}
Hero&				Hero::operator=(Hero const & rhs)
{
	if (this != &rhs)
	{
		_hp = rhs._hp;
		_coords[0] = rhs._coords[0];
		_coords[1] = rhs._coords[1];
		_enemy = rhs._enemy;
		_frags = rhs._frags;
		_star = rhs._star;
	}
	return *this;
}

int			Hero::getHP()
{
	return _hp;
}

int			Hero::getFrags()
{
	return _frags;
}
void		Hero::takeDamage(int damage)
{
	if (_hp - damage < 0)
		_hp = 0;
	else
		_hp -= damage;
}

void		Hero::attack()
{
	newBullet(_coords[0] + 1, _coords[1]);
}

int*		Hero::getCoords()
{
	return _coords;
}

void		Hero::moveX(int x)
{
	clean_display();
	_coords[0] = clmp(_coords[0] + x, 1, 148);
}
void		Hero::moveY(int y)
{
	clean_display();
	_coords[1] = clmp(_coords[1] + y, 1, 44);
}

void		Hero::newBullet(int x, int y)
{
	int		i;

	for (i = 0; i < 200; i++)
	{
		if (!_bullets[i])
		{
			_bullets[i] = new t_bullets;
			_bullets[i]->bullet = new Bullet(x, y);
			return ;
		}
	}
}

void				Hero::Bullet_step()
{
	int		i;
	int*	tmp;
	int*	e_coord;

	for (i = 0; i < 200; i++)
	{
		if (_bullets[i])
		{
			tmp = _bullets[i]->bullet->getCoords();
			if (_enemy)
				e_coord = _enemy->getCoords();
			if (tmp[0] + 1 == 150 || (_enemy && tmp[0] == e_coord[0] && tmp[1] == e_coord[1])
								  || (_enemy && tmp[0] == e_coord[0] + 1 && tmp[1] == e_coord[1])
								  || (_enemy && tmp[0] == e_coord[0] + 2 && tmp[1] == e_coord[1])
								  || (_enemy && tmp[0] == e_coord[0] - 1 && tmp[1] == e_coord[1])
								  || (_enemy && tmp[0] == e_coord[0] - 2 && tmp[1] == e_coord[1]))
			{
				_bullets[i]->bullet->clean_display();
				delete _bullets[i]->bullet;
				_bullets[i] = NULL;
				if ((_enemy && tmp[0] == e_coord[0] && tmp[1] == e_coord[1])
					|| (_enemy && tmp[0] == e_coord[0] + 1 && tmp[1] == e_coord[1])
					|| (_enemy && tmp[0] == e_coord[0] + 2 && tmp[1] == e_coord[1])
					|| (_enemy && tmp[0] == e_coord[0] - 1 && tmp[1] == e_coord[1])
					|| (_enemy && tmp[0] == e_coord[0] - 2 && tmp[1] == e_coord[1]))
				{
					_frags += 1;
					_enemy->clean_display();
					delete _enemy;
					_enemy = NULL;
				}
			}
			else
				_bullets[i]->bullet->moveX(1);
		}
	}
}

void				Hero::Bullet_display()
{
	int			i;

	for (i = 0; i < 200; i++)
	{
		if (_bullets[i])
		{
			_bullets[i]->bullet->display();
		}
	}
}

void		Hero::clean_display()
{
	mvprintw(_coords[1], _coords[0], " ");
}

void				Hero::display()
{
	mvprintw(_coords[1], _coords[0], ">");
}

void				Hero::Enemy_step()
{
	int*		tmp;

	if (!_enemy)
		_enemy = new Enemy(149, rand() % 42);
	else
	{
		tmp = _enemy->getCoords();
		if (tmp[0] == _coords[0] && tmp[1] == _coords[1])
			takeDamage(100);
		else
		{
			if (tmp[0] == 0)
			{
				_enemy->clean_display();
				delete _enemy;
				_enemy = NULL;
				return ;
			}
			_enemy->moveX(-1);
		}
	}
}

void				Hero::Enemy_display()
{
	if (_enemy)
		_enemy->display();
}

void				Hero::Star_step()
{
	int*		tmp;

	if (!_star)
		_star = new Star(149, rand() % 42);
	else
	{
		tmp = _star->getCoords();
		if (tmp[0] == 0)
		{
			_star->clean_display();
			delete _star;
			_star = NULL;
			return ;
		}
		_star->moveX(-2);
	}
}

void				Hero::Star_display()
{
	if (_star)
		_star->display();
}