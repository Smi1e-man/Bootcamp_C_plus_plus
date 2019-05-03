/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seshevch <seshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 18:02:03 by seshevch          #+#    #+#             */
/*   Updated: 2019/04/05 18:03:52 by seshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Peon.hpp"
#include "Sorcerer.hpp"

int main() 
{
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");
	std::cout << robert << jim << joe;
	robert.polymorph(jim);
	robert.polymorph(joe);
return 0; }