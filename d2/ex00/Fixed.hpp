/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seshevch <seshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 15:29:43 by seshevch          #+#    #+#             */
/*   Updated: 2019/04/03 17:13:09 by seshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	private:
			int					fix_p;
			static const int	bit = 8;

	public:
			Fixed();
			Fixed(Fixed const & src);
			~Fixed();
			Fixed&				operator=(Fixed const & rhs);
			int					getRawBits() const;
			void				setRawBits(int const raw);
};
#endif