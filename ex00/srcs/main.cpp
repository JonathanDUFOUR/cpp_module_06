/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 18:32:21 by jodufour          #+#    #+#             */
/*   Updated: 2022/02/23 19:12:11 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>
#include "lookup_cast.hpp"

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
	int	i;

	if (ac != 2)
		return (__usageErr());
	for (i = 0 ; g_cast[i].checker && !g_cast[i].checker(av[1]) ; ++i);
	if (g_cast[i].caster)
		g_cast[i].caster(av[1]);
	else
		return (__inputErr());
	return EXIT_SUCCESS;
}
