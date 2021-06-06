/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humanfou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 00:31:05 by humanfou          #+#    #+#             */
/*   Updated: 2021/06/07 00:31:06 by humanfou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libs.h"
#include "struct.h"
#include "utils.h"
#include "stack.h"

t_stack	*push(t_stack *stack, int nbr)
{
	t_element *new;

	new = (t_element *)malloc(sizeof(t_element));
	if (new == NULL)
		exit_prog(EXIT_FAILURE, NULL);
	stack->size += 1;
	new->value = nbr;
	new->next = stack->elements;
	stack ->elements = new;
	return (stack);
}