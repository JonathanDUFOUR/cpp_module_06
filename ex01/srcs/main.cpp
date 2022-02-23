/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 03:43:54 by jodufour          #+#    #+#             */
/*   Updated: 2022/02/23 19:47:26 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <limits>
#include "ex01.hpp"

int	main(void)
{
	Data		d(
		'a',
		42,
		21,
		-42,
		std::numeric_limits<float>::infinity(),
		std::numeric_limits<double>::quiet_NaN());
	uintptr_t	iptr;
	Data		*addr;

	std::cout << d << std::endl;

	iptr = serialize(&d);
	addr = deserialize(iptr);

	std::cout << "iptr: " << iptr << std::endl;
	std::cout << "addr: " << addr << std::endl;
	std::cout << "  &d: " << &d << std::endl;

	return EXIT_SUCCESS;
}
