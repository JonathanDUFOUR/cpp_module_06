/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex02.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 05:22:48 by jodufour          #+#    #+#             */
/*   Updated: 2022/02/07 05:33:49 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX02_HPP
# define EX02_HPP

# include "class/Base.hpp"

void	identify(Base *p)
		__attribute__((nonnull));
void	identify(Base &p);

Base	*generate(void);

#endif
