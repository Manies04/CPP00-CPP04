/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiade-al <tiade-al@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 23:19:18 by tiade-al          #+#    #+#             */
/*   Updated: 2026/03/23 23:07:07 by tiade-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_fracbits = 8;

Fixed::Fixed() : _value(0)
{
	//std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int num)
{
	//std::cout << "Int constructor called" << std::endl;
	this->_value = num << this->_fracbits;
}

Fixed::Fixed(const float num)
{
	//std::cout << "Float constructor called" << std::endl;
	this->_value = roundf(num * (1 << this->_fracbits));
}

Fixed::Fixed(Fixed const &num){
	//std::cout << "Copy constructor called" << std::endl;
	*this = num;
}

Fixed& Fixed::operator=(Fixed const &num){
	//std::cout << "Copy assignment operator called" << std::endl;
	if (this != &num)
		this->_value = num._value;
	return(*this);
}

Fixed::~Fixed()
{
	//std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const
{
	//std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}

void Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}

float Fixed::toFloat() const
{
	return (this->_value / (float)(1 << this->_fracbits));
}

int Fixed::toInt() const
{
	return(this->_value >> this->_fracbits);
}

std::ostream& operator<<(std::ostream &os, const Fixed &f)
{
	os << f.toFloat();
	return (os);
}

Fixed	Fixed::operator+(Fixed const &num)
{
	Fixed res;
	
	res.setRawBits(this->getRawBits() + num.getRawBits());
	return(res);
}

Fixed	Fixed::operator-(Fixed const &num)
{
	Fixed res;
	
	res.setRawBits(this->getRawBits() - num.getRawBits());
	return(res);
}

Fixed	Fixed::operator*(Fixed const &num)
{
	Fixed res;
	
	res.setRawBits(this->getRawBits() * num.getRawBits() >> this->_fracbits);
	return(res);
}

Fixed	Fixed::operator/(Fixed const &num)
{
	if (num.getRawBits() == 0)
	{
		std::cerr << "Program aint crashing with 0" << std::endl;
		return(Fixed());
	}
	Fixed res;
	
	res.setRawBits((this->getRawBits() << this->_fracbits) / num.getRawBits());
	return(res);
}

bool	Fixed::operator>( Fixed const &num) const
{
	if (this->getRawBits() > num.getRawBits())
		return(true);
	return(false);
}

bool	Fixed::operator<( Fixed const &num) const
{
	if (this->getRawBits() < num.getRawBits())
		return(true);
	return(false);
}

bool	Fixed::operator>=( Fixed const &num) const
{
	if (this->getRawBits() >= num.getRawBits())
		return(true);
	return(false);
}

bool	Fixed::operator<=( Fixed const &num) const
{
	if (this->getRawBits() <= num.getRawBits())
		return(true);
	return(false);
}

bool	Fixed::operator==( Fixed const &num) const
{
	if (this->getRawBits() == num.getRawBits())
		return(true);
	return(false);
}

bool	Fixed::operator!=( Fixed const &num) const
{
	if (this->getRawBits() != num.getRawBits())
		return(true);
	return(false);
}

Fixed	&Fixed::operator++(void)
{
	++this->_value;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed temp = *this;

	this->_value++;
	return (temp);
}

Fixed	&Fixed::operator--(void)
{
	--this->_value;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed temp = *this;

	this->_value--;
	return (temp);
}

Fixed	&Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}

const Fixed	&Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}

Fixed	&Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}

const Fixed	&Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}