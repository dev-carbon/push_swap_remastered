/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humanfou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 13:35:11 by humanfou          #+#    #+#             */
/*   Updated: 2021/06/07 13:35:12 by humanfou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ops.h"

t_stack	*swap(t_stack *stack)
{
	int	tmp;

	tmp = stack->elements->value;
	stack->elements->value = stack->elements->next->value;
	stack->elements->next->value = tmp;
	return (stack);
}