/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humanfou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 12:18:09 by humanfou          #+#    #+#             */
/*   Updated: 2021/06/07 12:18:11 by humanfou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"
#include "libs.h"
#include "utils.h"

t_stack	*sort(t_stack *sa)
{
	t_stack	*sb;

	sb = new_stack();
	while (!is_empty(sa))
	{
		if (sa->size == 3 && !is_sorted(sa))
		{
			if (get_max_pos(sa) == 1)
				printf("ra");
			else if (get_min_pos(sa) == 3)
				printf("rra");
		}
		break ;
	}
	destroy_stack(sb);
	return (sa);
}
