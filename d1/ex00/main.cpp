/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seshevch <seshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 12:07:13 by seshevch          #+#    #+#             */
/*   Updated: 2019/04/02 12:24:11 by seshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void			ponyOnTheHeap()
{
	Pony	pony_Heap;

	pony_Heap.set_name("Narcisa");
	pony_Heap.set_color("blue");
	pony_Heap.set_age("7");

	std::cout<< pony_Heap.get_color() + ' ';
	std::cout<< pony_Heap.get_name() + '_';
	std::cout<< pony_Heap.get_age() + " jump in HEAP."<< std::endl;
}

void			ponyOnTheStack()
{
	Pony *pony_Stack = new Pony;

	pony_Stack->set_name("Narcisa");
	pony_Stack->set_color("blue");
	pony_Stack->set_age("7");

	std::cout<< pony_Stack->get_color() + ' ';
	std::cout<< pony_Stack->get_name() + '_';
	std::cout<< pony_Stack->get_age() + " jump in STACK."<< std::endl;

	delete pony_Stack;
}

int				main(void)
{
	std::cout<< "ponyOnTheHeap_/-<:"<< std::endl;
	ponyOnTheHeap();
	std::cout<< "ponyOnTheStack_/-<:"<< std::endl;
	ponyOnTheStack();
	return (0);
}
