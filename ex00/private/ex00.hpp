/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex00.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 14:20:10 by jodufour          #+#    #+#             */
/*   Updated: 2022/02/06 22:22:28 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX00_HPP
# define EX00_HPP

# include <string>

void	castFromChar(char const *input);
void	castFromDouble(char const *input);
void	castFromFloat(char const *input);
void	castFromInt(char const *input);
void	printConversions(char const c, int const i, float const f,
			double const d);

bool	isChar(std::string const &input);
bool	isDouble(std::string const &input);
bool	isFloat(std::string const &input);
bool	isInt(std::string const &input);

#endif
