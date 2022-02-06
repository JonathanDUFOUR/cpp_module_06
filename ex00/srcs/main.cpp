/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 18:32:21 by jodufour          #+#    #+#             */
/*   Updated: 2022/02/05 16:26:01 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>
#include <string>
#include "ex00.hpp"

static int	__usageErr(void)
{
	std::cerr
	<< "Error: wrong usage"
	<< std::endl
	<< "Usage: ./ex00.out <input>"
	<< std::endl;
	return EXIT_FAILURE;
}

static int	__inputErr(void)
{
	std::cerr
	<< "Error: wrong input"
	<< std::endl;
	return EXIT_FAILURE;
}

int	main(int const ac, char const **av)
{
	(void)av;
	if (ac != 2)
		return (__usageErr());
	if (isChar(std::string(av[1])))
		castFromChar(av[1]);
	else if (isInt(std::string(av[1])))
		castFromInt(av[1]);
	else if (isFloat(std::string(av[1])))
		castFromFloat(av[1]);
	else if (isDouble(std::string(av[1])))
		castFromDouble(av[1]);
	else
		return (__inputErr());
	return EXIT_SUCCESS;
}
