/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   identify.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 05:32:47 by jodufour          #+#    #+#             */
/*   Updated: 2022/02/07 05:45:11 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "class/A.hpp"
#include "class/B.hpp"
#include "class/C.hpp"

void	identify(Base *p)
{
	std::cout << "Address identification:" << std::endl;
	try
	{
		dynamic_cast<A &>(*p);
		std::cout << "\t" "identified: A" << std::endl;
	}
	catch(const std::exception& e) {}
	try
	{
		dynamic_cast<B &>(*p);
		std::cout << "\t" "identified: B" << std::endl;
	}
	catch(const std::exception& e) {}
	try
	{
		dynamic_cast<C &>(*p);
		std::cout << "\t" "identified: C" << std::endl;
	}
	catch(const std::exception& e) {}
	
}

void	identify(Base &p)
{
	std::cout << "Reference identification:" << std::endl;
	try
	{
		dynamic_cast<A &>(p);
		std::cout << "\t" "identified: A" << std::endl;
	}
	catch(const std::exception& e) {}
	try
	{
		dynamic_cast<B &>(p);
		std::cout << "\t" "identified: B" << std::endl;
	}
	catch(const std::exception& e) {}
	try
	{
		dynamic_cast<C &>(p);
		std::cout << "\t" "identified: C" << std::endl;
	}
	catch(const std::exception& e) {}
}
