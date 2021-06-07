/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humanfou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 13:35:00 by humanfou          #+#    #+#             */
/*   Updated: 2021/06/07 13:35:02 by humanfou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OPS_H
# define OPS_H

# include "struct.h"

t_stack	*swap(t_stack *stack);
t_stack	*push(t_stack *dest, t_stack *src);
t_stack	*rotate(t_stack *stack);
t_stack	*rev_rotate(t_stack *stack);

#endif