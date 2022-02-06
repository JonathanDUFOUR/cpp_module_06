/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isDouble.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 14:31:41 by jodufour          #+#    #+#             */
/*   Updated: 2022/02/05 15:11:49 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

bool	isDouble(std::string const &input)
{
	std::string::const_iterator	iter;

	iter = input.begin();
	while (isspace(*iter))
		++iter;
	if (!input.compare(iter - input.begin(), input.length(), "nan"))
		return true;
	if (*iter == '+' || *iter == '-')
		++iter;
	if (!input.compare(iter - input.begin(), input.length(), "inf"))
		return true;
	while (isdigit(*iter))
		++iter;
	if (*iter == '.')
		++iter;
	while (isdigit(*iter))
		++iter;
	if (*iter || input.empty())
		return false;
	return true;
}
