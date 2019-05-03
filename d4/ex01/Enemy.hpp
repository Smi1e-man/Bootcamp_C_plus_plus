/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seshevch <seshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 20:10:48 by seshevch          #+#    #+#             */
/*   Updated: 2019/04/06 14:06:15 by seshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <iostream>
# include <string.h>

class Enemy
{
	protected:
			int						_hp;
			std::string				_type;
	public:
    		Enemy(int hp, std::string const & type);
			Enemy();
			Enemy(Enemy const &);
            virtual ~Enemy();
			Enemy&					operator=(Enemy const &);
			std::string const 		getType() const;
			int						getHP() const;
			virtual	void			takeDamage(int);
};

#endif