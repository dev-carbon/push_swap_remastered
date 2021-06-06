/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_empty.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humanfou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 01:04:58 by humanfou          #+#    #+#             */
/*   Updated: 2021/06/07 01:05:02 by humanfou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libs.h"
#include "struct.h"
#include "utils.h"
#include "stack.h"

int	is_empty(t_stack *stack)
{
	if (stack->size == 0)
		return (1);
	return (0);
}