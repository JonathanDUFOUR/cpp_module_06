/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isDouble.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 14:31:41 by jodufour          #+#    #+#             */
/*   Updated: 2022/02/22 22:53:02 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <cstring>

bool	isDouble(char const *input)
{
	if (!*input)
		return false;
	while (isspace(*input))
		++input;
	if (!strcmp(input, "nan"))
		return true;
	if (*input == '+' || *input == '-')
		++input;
	if (!strcmp(input, "inf"))
		return true;
	while (isdigit(*input))
		++input;
	if (*input == '.')
		++input;
	while (isdigit(*input))
		++input;
	if (*input)
		return false;
	return true;
}
