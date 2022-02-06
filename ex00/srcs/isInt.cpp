/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isInt.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 14:33:00 by jodufour          #+#    #+#             */
/*   Updated: 2022/02/05 15:11:25 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

bool	isInt(std::string const &input)
{
	std::string::const_iterator iter;

	iter = input.begin();
	while (isspace(*iter))
		++iter;
	if (*iter == '+' || *iter == '-')
		++iter;
	while (isdigit(*iter))
		++iter;
	if (*iter || input.empty())
		return false;
	return true;
}
