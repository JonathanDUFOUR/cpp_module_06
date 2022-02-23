/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isChar.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 14:31:00 by jodufour          #+#    #+#             */
/*   Updated: 2022/02/23 19:06:11 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>

bool	isChar(char const *input)
{
	if (!*input || isdigit(*input) || *++input)
		return false;
	return true;
}
