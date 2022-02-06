/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   castFromFloat.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 15:34:45 by jodufour          #+#    #+#             */
/*   Updated: 2022/02/07 00:20:40 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cerrno>
#include <climits>
#include <cmath>
#include <cstdlib>
#include <iomanip>
#include <iostream>

static void	__printImpossible(void)
{
	std::cout
	<< "char: impossible" << std::endl
	<< "int: impossible" << std::endl
	<< "float: impossible" << std::endl
	<< "double: imposible" << std::endl;
}

static void	__printConversions(float const f)
{
	std::cout << "char: ";
	if (round(f) < CHAR_MIN || round(f) > CHAR_MAX || isnanf(f))
		std::cout << "impossible" << std::endl;
	else if (!isprint(static_cast<char>(round(f))))
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << "'" << static_cast<char>(round(f)) << "'" << std::endl;
	std::cout << "int: ";
	if (round(f) < INT_MIN || round(f) > INT_MAX || isnanf(f))
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<int>(round(f)) << std::endl;
	std::cout
	<< std::setprecision(1)
	<< std::fixed
	<< "float: " << f << "f" << std::endl
	<< "double: " << static_cast<double>(f) << std::endl
	<< std::setprecision(0);
}

void	castFromFloat(char const *input)
{
	float const		f = strtof(input, NULL);

	if (!errno)
		__printConversions(f);
	else
		__printImpossible();
}
