/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 05:06:42 by jodufour          #+#    #+#             */
/*   Updated: 2022/02/28 20:01:18 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <ctime>
#include <iostream>
#include "ex02.hpp"

static void	__init(void) __attribute__((constructor));

static void	__init(void)
{
	srand(time(NULL));
}

int	main(void)
{
	Base	*p = generate();

	if (!p)
		return EXIT_FAILURE;
	std::cout << "Using identify(Base *):" << std::endl;
	identify(p);
	std::cout << "Using identify(Base &):" << std::endl;
	identify(*p);
	delete p;
	return EXIT_SUCCESS;
}
