/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISquad.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seshevch <seshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 14:58:08 by seshevch          #+#    #+#             */
/*   Updated: 2019/04/06 16:52:58 by seshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISQUED_HPP
# define ISQUED_HPP

# include <iostream>

# include "ISpaceMarine.hpp"

class ISquad
{
    public:
            virtual                     ~ISquad() {}
            virtual int                 getCount() const = 0;
            virtual ISpaceMarine        *getUnit(int) const = 0;
            virtual int                 push(ISpaceMarine*) = 0;
};

#endif