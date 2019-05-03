/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seshevch <seshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 15:15:31 by seshevch          #+#    #+#             */
/*   Updated: 2019/04/02 16:38:30 by seshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

int			main()
{
	ZombieHorde *zomb = new ZombieHorde(9);
	zomb->announce();
	zomb->~ZombieHorde();
	delete zomb;
	return (0);
}
