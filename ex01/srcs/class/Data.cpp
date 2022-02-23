/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 04:30:45 by jodufour          #+#    #+#             */
/*   Updated: 2022/02/23 19:53:16 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "class/Data.hpp"

// ************************************************************************** //
//                                Constructors                                //
// ************************************************************************** //

Data::Data(
	char const c,
	short const s,
	int const i,
	long const l,
	float const f,
	double const d) :
	_c(c),
	_s(s),
	_i(i),
	_l(l),
	_f(f),
	_d(d)
{
	if (DEBUG)
		std::cout
		<< "Creating Data"
		<< " (" << this->_c << ")"
		<< " (" << this->_s << ")"
		<< " (" << this->_i << ")"
		<< " (" << this->_l << ")"
		<< " (" << this->_f << ")"
		<< " (" << this->_d << ")"
		<< std::endl;
}

Data::Data(Data const &src) :
	_c(src._c),
	_s(src._s),
	_i(src._i),
	_l(src._l),
	_f(src._f),
	_d(src._d)
{
	if (DEBUG)
		std::cout
		<< "Creating Data"
		<< " (" << this->_c << ")"
		<< " (" << this->_s << ")"
		<< " (" << this->_i << ")"
		<< " (" << this->_l << ")"
		<< " (" << this->_f << ")"
		<< " (" << this->_d << ")"
		<< std::endl;
}

// ************************************************************************* //
//                                Destructors                                //
// ************************************************************************* //

Data::~Data(void)
{
	if (DEBUG)
		std::cout
		<< "Destroying Data"
		<< std::endl;
}

// ************************************************************************* //
//                                 Accessors                                 //
// ************************************************************************* //

char const	&Data::getC(void) const
{
	if (DEBUG)
		std::cout
		<< "Calling Data::getC()"
		<< std::endl;
	return this->_c;
}

short const	&Data::getS(void) const
{
	if (DEBUG)
		std::cout
		<< "Calling Data::getS()"
		<< std::endl;
	return this->_s;
}

int const	&Data::getI(void) const
{
	if (DEBUG)
		std::cout
		<< "Calling Data::getI()"
		<< std::endl;
	return this->_i;
}

long const	&Data::getL(void) const
{
	if (DEBUG)
		std::cout
		<< "Calling Data::getL()"
		<< std::endl;
	return this->_l;
}

float const	&Data::getF(void) const
{
	if (DEBUG)
		std::cout
		<< "Calling Data::getF()"
		<< std::endl;
	return this->_f;
}

double const	&Data::getD(void) const
{
	if (DEBUG)
		std::cout
		<< "Calling Data::getD()"
		<< std::endl;
	return this->_d;
}

void	Data::setC(char const c)
{
	if (DEBUG)
		std::cout
		<< "Calling Data::setC()"
		<< std::endl;
	this->_c = c;
}

void	Data::setS(short const s)
{
	if (DEBUG)
		std::cout
		<< "Calling Data::setS()"
		<< std::endl;
	this->_s = s;
}

void	Data::setI(int const i)
{
	if (DEBUG)
		std::cout
		<< "Calling Data::setI()"
		<< std::endl;
	this->_i = i;
}

void	Data::setL(long const l)
{
	if (DEBUG)
		std::cout
		<< "Calling Data::setL()"
		<< std::endl;
	this->_l = l;
}

void	Data::setF(float const f)
{
	if (DEBUG)
		std::cout
		<< "Calling Data::setF()"
		<< std::endl;
	this->_f = f;
}

void	Data::setD(double const d)
{
	if (DEBUG)
		std::cout
		<< "Calling Data::setD()"
		<< std::endl;
	this->_d = d;
}

// ************************************************************************* //
//                                 Operators                                 //
// ************************************************************************* //

Data	&Data::operator=(Data const &rhs)
{
	if (DEBUG)
		std::cout
		<< "Calling Data::operator=()"
		<< std::endl;
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
