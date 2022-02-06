/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isChar.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 14:31:00 by jodufour          #+#    #+#             */
/*   Updated: 2022/02/05 15:09:11 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

bool	isChar(std::string const &input)
{
	if (input.length() != 1 || isdigit(*input.begin()))
		return false;
	return true;
}
