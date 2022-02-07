/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 03:37:35 by jodufour          #+#    #+#             */
/*   Updated: 2022/02/07 04:49:57 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX01_HPP
# define EX01_HPP

# include <stdint.h>
# include "class/Data.hpp"

uintptr_t	serialize(Data *ptr);

Data		*deserialize(uintptr_t raw);

#endif
