/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seshevch <seshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 12:30:56 by seshevch          #+#    #+#             */
/*   Updated: 2019/04/02 12:42:24 by seshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	memoryLeak()
{
	std::string		*panthere = new std::string("String panthere");
	std::cout<< *panthere << std::endl;
	delete panthere;
}
