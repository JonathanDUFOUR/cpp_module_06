/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 18:32:21 by jodufour          #+#    #+#             */
/*   Updated: 2022/03/02 20:13:21 by jodufour         ###   ########.fr       */
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
	uint	idx(0);

	if (ac != 2)
		return (__usageErr());
	for ( ; g_cast[idx].checker && !g_cast[idx].checker(av[1]) ; ++idx);
	if (g_cast[idx].caster)
		g_cast[idx].caster(av[1]);
	else
		return (__inputErr());
	return EXIT_SUCCESS;
}
