/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isInt.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 14:33:00 by jodufour          #+#    #+#             */
/*   Updated: 2022/02/22 22:41:41 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>

bool	isInt(char const *input)
{
	if (!*input)
		return (false);
	while (isspace(*input))
		++input;
	if (*input == '+' || *input == '-')
		++input;
	while (isdigit(*input))
		++input;
	if (*input)
		return false;
	return true;
}
