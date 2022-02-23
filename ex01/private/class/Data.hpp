/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 03:38:57 by jodufour          #+#    #+#             */
/*   Updated: 2022/02/23 19:49:43 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

# include <iostream>

# ifndef DEBUG
#  define DEBUG 0
# endif

class Data
{
private:
	char	_c;
	short	_s;
	int		_i;
	long	_l;
	float	_f;
	double	_d;

public:
	// Constructors
	Data(
		char const c = 0,
		short const s = 0,
		int const i = 0,
		long const l = 0,
		float const f = 0,
		double const d = 0);
	Data(Data const &src);

	// Destructors
	virtual ~Data(void);

	// Accessors
	char const		&getC(void) const;
	short const		&getS(void) const;
	int const		&getI(void) const;
	long const		&getL(void) const;
	float const		&getF(void) const;
	double const	&getD(void) const;

	void			setC(char const c);
	void			setS(short const s);
	void			setI(int const i);
	void			setL(long const l);
	void			setF(float const f);
	void			setD(double const d);

	// Operators
	Data	&operator=(Data const &rhs);
};

std::ostream	&operator<<(std::ostream &o, Data const &rhs);

#endif
