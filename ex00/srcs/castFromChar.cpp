/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   castFromChar.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 15:33:35 by jodufour          #+#    #+#             */
/*   Updated: 2022/02/06 22:45:41 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include <iostream>

void	castFromChar(char const *input)
{
	char const		c = *input;
	int const		i = static_cast<int>(c);
	float const		f = static_cast<float>(c);
	double const	d = static_cast<double>(c);

	std::cout << "char: " << "'" << c << "'" << std::endl
	<< "int: " << i << std::endl
	<< std::setprecision(1)
	<< std::fixed
	<< "float: " << f << "f" << std::endl
	<< "double: " << d << std::endl
	<< std::setprecision(0);
}
