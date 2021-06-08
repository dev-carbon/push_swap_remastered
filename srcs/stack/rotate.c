/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humanfou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 13:36:21 by humanfou          #+#    #+#             */
/*   Updated: 2021/06/07 13:36:23 by humanfou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"
#include "libs.h"

t_stack	*rotate(t_stack *stack)
{
	int			tmp;
	t_element	*el;

	tmp = peek(stack);
	el = stack->elements;
	while (el->next != NULL)
	{
		el->value = el->next->value;
		el = el->next;
	}
	el->value = tmp;
	return (stack);
}
