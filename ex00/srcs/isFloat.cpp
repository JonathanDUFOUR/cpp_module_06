/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isFloat.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 14:32:19 by jodufour          #+#    #+#             */
/*   Updated: 2022/02/22 22:45:45 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <cstring>

bool	isFloat(char const *input)
{
	while (isspace(*input))
		++input;
	if (!strcmp(input, "nanf"))
		return true;
	if (*input == '+' || *input == '-')
		++input;
	if (!strcmp(input, "inff"))
		return true;
	while (isdigit(*input))
		++input;
	if (*input == '.')
		++input;
	while (isdigit(*input))
		++input;
	if (*input != 'f' || *++input)
		return false;
	return true;
}
