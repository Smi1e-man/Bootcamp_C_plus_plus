/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seshevch <seshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 15:20:56 by seshevch          #+#    #+#             */
/*   Updated: 2019/04/06 17:20:57 by seshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad()
{
	_count = 0;
	_units = NULL;
}
void		Squad::dell(Squad const & src)
{
	t_constr*			tmp;

	if (!src.getCount())
		return ;
	tmp = src._units;
	while (tmp)
	{
		delete tmp->unit;
		tmp = tmp->next;
	}
	delete src._units;
}

Squad::Squad(Squad const & src)
{
	*this = src;
}
Squad::~Squad()
{
	dell(*this);
	return ;
}
Squad&						Squad::operator=(Squad const & rhs)
{
	dell(*this);
	if (this != &rhs)
	{
		_count = rhs._count;
		_units = rhs._units;
	}
	return *this;
}			
int					Squad::getCount() const
{
	return _count;
}
ISpaceMarine*		Squad::getUnit(int n) const
{
	t_constr*			tmp;
	
	tmp = _units;
	if (n < 0 || n > _count)
	{
		return NULL;
	}
	while (n--)
	{
		tmp = tmp->next;
	}
	return tmp->unit;
}
int					Squad::push(ISpaceMarine* _new)
{
	t_constr*			tmp;

	if (!_new)
		return _count;
	if (!_units)
	{
		_units = new t_constr;
		_units->unit = _new;
		_count += 1;
	}
	tmp = _units;
	while (tmp->next)
	{
		if (tmp->unit == _new)
			return _count;
		tmp = tmp->next;
	}
	if (tmp->unit == _new)
			return _count;
	else
	{
		tmp->next = new t_constr;
		tmp->next->unit = _new;
	}
	_count += 1;
	return _count;
}