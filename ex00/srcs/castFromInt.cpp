/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   castFromInt.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 15:35:20 by jodufour          #+#    #+#             */
/*   Updated: 2022/03/02 20:34:41 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <climits>
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

static void	__printConversions(int const i)
{
	std::cout << "char: ";
	if (i < CHAR_MIN || i > CHAR_MAX)
		std::cout << "impossible" << std::endl;
	else if (!isprint(static_cast<char>(i)))
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << "'" << static_cast<char>(i) << "'" << std::endl;
	std::cout
	<< "int: " << i << std::endl
	<< std::setprecision(1)
	<< std::fixed
	<< "float: " << static_cast<float>(i) << "f" << std::endl
	<< "double: " << static_cast<double>(i) << std::endl
	<< std::setprecision(0);
}

void	castFromInt(char const *input)
{
	long const	l(strtol(input, NULL, 10));

	if (l >= INT_MIN && l <= INT_MAX)
		__printConversions(static_cast<int>(l));
	else
		__printImpossible();
}
