/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiade-al <tiade-al@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 23:19:26 by tiade-al          #+#    #+#             */
/*   Updated: 2026/03/18 18:42:31 by tiade-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cmath>

class Fixed{
	private:
		int _value;
		static const int _fracbits;
	public:
		Fixed();
		Fixed(Fixed const &num);
		Fixed(const int num);
		Fixed(const float num);
		Fixed& operator=(Fixed const &num);
		~Fixed();
		int getRawBits() const;
		void setRawBits( int const raw );
		float toFloat( void ) const;
		int toInt( void ) const;
};

std::ostream& operator<<(std::ostream &os, const Fixed &f);