/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seshevch <seshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 14:31:34 by seshevch          #+#    #+#             */
/*   Updated: 2019/04/02 16:37:28 by seshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N)
{
	std::string	name;
	std::string	alph = "abcdefghkuiopftgklwyz";
	int		i;
	int		n;

	if (N > 0)
	{
		ZombieHorde::N = N;
		ZombieHorde::zomb = new Zombie[N];
		for(n = 0;n < N; n++)
		{
			srand(time(0) + n);
			for(i = 0; i < 5; i++)
			{
				name += alph[rand()%21];
			}
			ZombieHorde::zomb[n].set_name(name);
			ZombieHorde::zomb[n].set_type();
			name.clear();
		}
	}
}

ZombieHorde::~ZombieHorde()
{
	delete ZombieHorde::zomb;
	return ;
}

void			ZombieHorde::announce()
{
	int			n;

	for(n = 0; ZombieHorde::N > 0 && n < ZombieHorde::N; n++)
	{
		ZombieHorde::zomb[n].announce();
	}
}
