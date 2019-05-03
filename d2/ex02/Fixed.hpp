/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seshevch <seshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 15:29:43 by seshevch          #+#    #+#             */
/*   Updated: 2019/04/04 12:17:35 by seshevch         ###   ########.fr       */
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
			bool				operator>(Fixed const & rhs);
			bool				operator<(Fixed const & rhs);
			bool				operator>=(Fixed const & rhs);
			bool				operator<=(Fixed const & rhs);
			bool				operator==(Fixed const & rhs);
			bool				operator!=(Fixed const & rhs);
			Fixed				operator+(Fixed const & rhs) const;
			Fixed				operator-(Fixed const & rhs) const;
			Fixed				operator*(Fixed const & rhs) const;
			Fixed				operator/(Fixed const & rhs) const;

			Fixed				&operator++();
			Fixed				operator++(int);
			Fixed				&operator--();
			Fixed				operator--(int);

			int					getRawBits() const;
			void				setRawBits(int const raw);

			float toFloat() const;
			int toInt() const;

			static Fixed&				max(Fixed & a, Fixed & b);
			static Fixed&				min(Fixed & a, Fixed & b);
			static const Fixed&				max(Fixed const & a, Fixed const & b);
			static const Fixed&				min(Fixed const & a, Fixed const & b);
};
std::ostream&		operator<<(std::ostream & out, Fixed const & obj);
#endif