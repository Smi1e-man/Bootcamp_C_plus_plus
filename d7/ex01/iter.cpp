/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seshevch <seshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 12:53:37 by seshevch          #+#    #+#             */
/*   Updated: 2019/04/12 13:32:44 by seshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template<typename T>
void		f_f(T const &c)
{
	std::cout<< c<<std::endl;
}

template<typename T>
void		iter(T *a, int length, void (*f)(T const &))
{
	for(int i = 0; i < length; i++)
	{
		f(a[i]);
	}
}

int			main()
{
	const char *s = "hello";
	iter(s, 5, f_f);
	return 0;
}