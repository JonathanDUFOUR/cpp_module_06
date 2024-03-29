/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   castFromChar.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 15:33:35 by jodufour          #+#    #+#             */
/*   Updated: 2022/08/24 21:56:17 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include <iostream>

void	castFromChar(char const *input)
{
	char const		c(*input);
	int const		i(static_cast<int>(c));
	float const		f(static_cast<float>(c));
	double const	d(static_cast<double>(c));

	std::cout << "char: ";
	if (!isprint(c))
		std::cout << "Non displayable" << '\n';
	else
		std::cout << "'" << c << "'" << '\n';
	std::cout
	<< "int: " << i << '\n'
	<< std::setprecision(1)
	<< std::fixed
	<< "float: " << f << "f" << '\n'
	<< "double: " << d << '\n'
	<< std::setprecision(0);
}
