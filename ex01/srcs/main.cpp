/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 03:43:54 by jodufour          #+#    #+#             */
/*   Updated: 2022/02/07 04:57:19 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include "ex01.hpp"

int	main(void)
{
	Data		d;
	uintptr_t	iptr;
	Data		*addr;

	std::cout << d << std::endl;

	d.setC('a');
	d.setS(42);
	d.setI(21);
	d.setL(-42);
	d.setF(3.14);
	d.setD(2.72);

	std::cout << d << std::endl;

	iptr = serialize(&d);
	addr = deserialize(iptr);

	std::cout << "iptr: " << iptr << std::endl;
	std::cout << "addr: " << addr << std::endl;
	std::cout << "  &d: " << &d << std::endl;

	return EXIT_SUCCESS;
}
