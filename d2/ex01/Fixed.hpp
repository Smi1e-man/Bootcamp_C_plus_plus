/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seshevch <seshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 15:29:43 by seshevch          #+#    #+#             */
/*   Updated: 2019/04/03 18:16:00 by seshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <tgmath.h>

class Fixed
{
	private:
			int					fix_p_;
			static const int	bit_ = 8;

	public:
			Fixed();
			Fixed(int const);
			Fixed(float const);
			Fixed(Fixed const & src);
			~Fixed();

			Fixed&				operator=(Fixed const & rhs);
			int					getRawBits() const;
			void				setRawBits(int const raw);

			float toFloat() const;
			int toInt() const;
};
std::ostream&		operator<<(std::ostream & out, Fixed const & obj);
#endif