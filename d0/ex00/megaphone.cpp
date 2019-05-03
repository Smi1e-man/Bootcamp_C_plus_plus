/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seshevch <seshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 10:47:14 by seshevch          #+#    #+#             */
/*   Updated: 2019/04/01 11:45:26 by seshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

char	*ft_toupper_str(char *str)
{
	int	i;

	for(i = 0; str[i]; i++)
		str[i] = toupper(str[i]);
	return(str);
}

int		main(int ac, char **av)
{
	int	i;

	if (ac >= 2)
	{
		for (i = 1; --ac >= 1; i++)
			std::cout<< ft_toupper_str(av[i]);
		std::cout<< std::endl;
	}
	else
		std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	return (0);
}
