/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   generate.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 05:18:06 by jodufour          #+#    #+#             */
/*   Updated: 2022/02/07 05:40:23 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>
#include "class/A.hpp"
#include "class/B.hpp"
#include "class/C.hpp"

Base	*generate(void)
{
	int const	i = rand() % 3;

	switch (i)
	{
	case 0:
		std::cout << "Generating A" << std::endl;
		return new A;
		break;
	case 1:
		std::cout << "Generating B" << std::endl;
		return new B;
		break;
	case 2:
		std::cout << "Generating C" << std::endl;
		return new C;
		break;
	default:
		std::cout << "Error: generate()" << std::endl;
		return NULL;
		break;
	}
}
