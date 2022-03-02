/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   identify.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 05:32:47 by jodufour          #+#    #+#             */
/*   Updated: 2022/02/28 18:39:16 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "class/A.hpp"
#include "class/B.hpp"
#include "class/C.hpp"


void	identify(Base &p)
{
	try
	{
		(void)dynamic_cast<A &>(p);
		std::cout << "\t" "identified: A" << std::endl;
	}
	catch (std::exception const &e) {}
	try
	{
		(void)dynamic_cast<B &>(p);
		std::cout << "\t" "identified: B" << std::endl;
	}
	catch (std::exception const &e) {}
	try
	{
		(void)dynamic_cast<C &>(p);
		std::cout << "\t" "identified: C" << std::endl;
	}
	catch (std::exception const &e) {}
}

void	identify(Base *p)
{
	identify(*p);
}