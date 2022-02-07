/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   castFromDouble.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 15:34:12 by jodufour          #+#    #+#             */
/*   Updated: 2022/02/07 02:32:23 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cerrno>
#include <cfloat>
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

static void	__printConversions(double const d)
{
	std::cout << "char: ";
	if (round(d) < CHAR_MIN || round(d) > CHAR_MAX || isnan(d))
		std::cout << "impossible" << std::endl;
	else if (!isprint(static_cast<char>(round(d))))
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << "'" << static_cast<char>(round(d)) << "'" << std::endl;
	std::cout << "int: ";
	if (round(d) < INT_MIN || round(d) > INT_MAX || isnan(d))
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<int>(round(d)) << std::endl;
	std::cout
	<< std::setprecision(1)
	<< std::fixed
	<< "float: ";
	if (d && !isinf(d) && (d < FLT_MIN || d > FLT_MAX))
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<float>(d) << "f" << std::endl;
	std::cout << "double: " << d << std::endl
	<< std::setprecision(0);
}

void	castFromDouble(char const *input)
{
	double const	d = strtod(input, NULL);

	if (!errno)
		__printConversions(d);
	else
		__printImpossible();
}
