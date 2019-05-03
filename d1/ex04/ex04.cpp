/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seshevch <seshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 16:17:10 by seshevch          #+#    #+#             */
/*   Updated: 2019/04/02 16:28:34 by seshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"

int			main()
{
	std::string			data = "HI THIS IS BRAIN";
	std::string*		point = &data;
	std::string&		link = data;

	std::cout<< data<< " | "<< *point<< " | "<< link<< std::endl;
	return (0);
}