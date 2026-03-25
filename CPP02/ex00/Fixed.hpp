/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiade-al <tiade-al@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 23:19:26 by tiade-al          #+#    #+#             */
/*   Updated: 2026/03/16 18:22:47 by tiade-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Fixed{
	private:
		int _value;
		static const int fracbits;
	public:
		Fixed();
		Fixed(Fixed const &num);
		Fixed& operator=(Fixed const &num);
		~Fixed();
		int getRawBits() const;
		void setRawBits( int const raw );
};