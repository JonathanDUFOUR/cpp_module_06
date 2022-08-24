/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isChar.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 14:31:00 by jodufour          #+#    #+#             */
/*   Updated: 2022/08/24 21:59:41 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>

bool	isChar(char const *input)
{
	if (isdigit(*input) || (*input && *++input))
		return false;
	return true;
}
