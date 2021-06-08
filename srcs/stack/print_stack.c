/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humanfou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 22:01:20 by humanfou          #+#    #+#             */
/*   Updated: 2021/06/06 22:01:22 by humanfou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"
#include "libs.h"

void	print_stack(t_stack *stack)
{
	t_element	*el;

	el = stack->elements;
	printf("\e[4msize\e[0m: %d\n", stack->size);
	while (el)
	{
		printf("%d\n", el->value);
		el = el->next;
	}
}
