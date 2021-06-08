/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humanfou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 12:40:13 by humanfou          #+#    #+#             */
/*   Updated: 2021/06/07 12:40:18 by humanfou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"
#include "libs.h"
#include "const.h"

int	is_sorted(t_stack *stack, int *flag)
{
	t_element	*el;

	(void)flag;
	el = stack->elements;
	while (el->next != NULL)
	{
		if (el->value > el->next->value)
			return (0);
		el = el->next;
	}
	return (1);
}
