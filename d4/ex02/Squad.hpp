/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seshevch <seshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 15:20:51 by seshevch          #+#    #+#             */
/*   Updated: 2019/04/06 17:21:23 by seshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUED_HPP
# define SQUED_HPP

# include <iostream>

# include "ISquad.hpp"


class Squad : public ISquad
{
	private:
			typedef struct 				s_constr
			{
				ISpaceMarine*			unit;
				s_constr				*next;
			}							t_constr;
			
			int							_count;
			t_constr*					_units;
			void						dell(Squad const & src);

    public:
			Squad();
			Squad(Squad const &);
            virtual	~Squad();
			Squad&						operator=(Squad const &);


            virtual int					getCount() const;
            virtual ISpaceMarine*		getUnit(int) const;
            virtual int					push(ISpaceMarine*);
};

#endif