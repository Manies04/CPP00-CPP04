/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiade-al <tiade-al@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 23:19:26 by tiade-al          #+#    #+#             */
/*   Updated: 2026/03/23 18:03:26 by tiade-al         ###   ########.fr       */
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
		~Fixed();
		int		getRawBits() const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;

		Fixed&	operator=(Fixed const &num);
		Fixed	operator+(Fixed const &num);
		Fixed	operator-(Fixed const &num);
		Fixed	operator*(Fixed const &num);
		Fixed	operator/(Fixed const &num);
		bool	operator>( Fixed const &num) const;
		bool	operator<( Fixed const &num) const;
		bool	operator>=(Fixed const &num) const;
		bool	operator<=(Fixed const &num) const;
		bool	operator==(Fixed const &num) const;
		bool	operator!=(Fixed const &num) const;
		Fixed&	operator++(void);//++a
		Fixed	operator++(int);//a++ (int is to distinguish)
		Fixed&	operator--(void);
		Fixed	operator--(int);
		
		static Fixed&	min(Fixed &a, Fixed &b);
		static const Fixed&	min(const Fixed &a, const Fixed &b);
		static Fixed&	max(Fixed &a, Fixed &b);
		static const Fixed&	max(const Fixed &a, const Fixed &b);
};

std::ostream& operator<<(std::ostream &os, const Fixed &f);