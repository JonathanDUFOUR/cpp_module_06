/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lookup_cast.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 16:22:15 by jodufour          #+#    #+#             */
/*   Updated: 2022/02/23 19:03:26 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LOOKUP_CAST_HPP
# define LOOKUP_CAST_HPP

typedef struct s_cast	t_cast;
typedef bool			(*t_fct0)(char const *input);
typedef void			(*t_fct1)(char const *input);

struct s_cast
{
	t_fct0 const	checker;
	t_fct1 const	caster;
};

void	castFromChar(char const *input)
		__attribute__((nonnull));
void	castFromDouble(char const *input)
		__attribute__((nonnull));
void	castFromFloat(char const *input)
		__attribute__((nonnull));
void	castFromInt(char const *input)
		__attribute__((nonnull));

bool	isChar(char const *input)
		__attribute__((nonnull));
bool	isDouble(char const *input)
		__attribute__((nonnull));
bool	isFloat(char const *input)
		__attribute__((nonnull));
bool	isInt(char const *input)
		__attribute__((nonnull));

static t_cast const	g_cast[] = {
	{isChar, castFromChar},
	{isInt, castFromInt},
	{isFloat, castFromFloat},
	{isDouble, castFromDouble},
	{NULL, NULL}
};

#endif
