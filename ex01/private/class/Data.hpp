/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 03:38:57 by jodufour          #+#    #+#             */
/*   Updated: 2022/02/07 04:36:17 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

# include <iostream>

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
	Data(void);
	Data(Data const &src);

	// Destructors
	virtual ~Data(void);

	// Accessors
	char		getC(void) const;
	short		getS(void) const;
	int			getI(void) const;
	long		getL(void) const;
	float		getF(void) const;
	double		getD(void) const;

	void		setC(char const c);
	void		setS(short const s);
	void		setI(int const i);
	void		setL(long const l);
	void		setF(float const f);
	void		setD(double const d);

	// Operators
	Data	&operator=(Data const &rhs);
};

std::ostream	&operator<<(std::ostream &o, Data const &rhs);

#endif
