/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isFloat.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 14:32:19 by jodufour          #+#    #+#             */
/*   Updated: 2022/02/05 15:01:41 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

bool	isFloat(std::string const &input)
{
	std::string::const_iterator	iter;

	iter = input.begin();
	while (isspace(*iter))
		++iter;
	if (!input.compare(iter - input.begin(), input.length(), "nanf"))
		return true;
	if (*iter == '+' || *iter == '-')
		++iter;
	if (!input.compare(iter - input.begin(), input.length(), "inff"))
		return true;
	while (isdigit(*iter))
		++iter;
	if (*iter == '.')
		++iter;
	while (isdigit(*iter))
		++iter;
	if (*iter != 'f' || *++iter)
		return false;
	return true;
}
