/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 04:30:45 by jodufour          #+#    #+#             */
/*   Updated: 2022/02/07 04:38:27 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "class/Data.hpp"

// ************************************************************************** //
//                                Constructors                                //
// ************************************************************************** //

Data::Data(void) :
	_c(0), _s(0), _i(0), _l(0), _f(0), _d(0)
{
	std::cout
	<< "Creating Data"
	<< std::endl;
}

Data::Data(Data const &src) :
	_c(src._c), _s(src._s), _i(src._i), _l(src._l), _f(src._f), _d(src._d)
{
	std::cout
	<< "Creating Data"
	<< std::endl;

	*this = src;
}

// ************************************************************************* //
//                                Destructors                                //
// ************************************************************************* //

Data::~Data(void)
{
	std::cout
	<< "Destroying Data"
	<< std::endl;
}

// ************************************************************************* //
//                                 Accessors                                 //
// ************************************************************************* //

char	Data::getC(void) const
{
	return this->_c;
}

short	Data::getS(void) const
{
	return this->_s;
}

int		Data::getI(void) const
{
	return this->_i;
}

long	Data::getL(void) const
{
	return this->_l;
}

float	Data::getF(void) const
{
	return this->_f;
}

double	Data::getD(void) const
{
	return this->_d;
}

void	Data::setC(char const c)
{
	this->_c = c;
}

void	Data::setS(short const s)
{
	this->_s = s;
}

void	Data::setI(int const i)
{
	this->_i = i;
}

void	Data::setL(long const l)
{
	this->_l = l;
}

void	Data::setF(float const f)
{
	this->_f = f;
}

void	Data::setD(double const d)
{
	this->_d = d;
}

// ************************************************************************* //
//                                 Operators                                 //
// ************************************************************************* //

Data	&Data::operator=(Data const &rhs)
{
	if (this != &rhs)
	{
		this->_c = rhs._c;
		this->_s = rhs._s;
		this->_i = rhs._i;
		this->_l = rhs._l;
		this->_f = rhs._f;
		this->_d = rhs._d;
	}
	return *this;
}

std::ostream	&operator<<(std::ostream &o, Data const &rhs)
{
	o
	<< "Data: " << std::endl
	<< "\t" "c: " << rhs.getC() << std::endl
	<< "\t" "s: " << rhs.getS() << std::endl
	<< "\t" "i: " << rhs.getI() << std::endl
	<< "\t" "l: " << rhs.getL() << std::endl
	<< "\t" "f: " << rhs.getF() << std::endl
	<< "\t" "d: " << rhs.getD() << std::endl;
	return o;
}
