/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seshevch <seshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 17:09:17 by seshevch          #+#    #+#             */
/*   Updated: 2019/04/02 17:44:49 by seshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

int				main()
{
	// Brain *brain = new Brain("99");
	// std::cout<< brain->identify()<< std::endl;

	Human bob;
	std::cout << bob.identify() << std::endl;
	std::cout << bob.getBrain().identify() << std::endl;

	return (0);
}
