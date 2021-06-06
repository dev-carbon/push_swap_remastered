/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destroy_split.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humanfou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 17:05:33 by humanfou          #+#    #+#             */
/*   Updated: 2021/06/04 17:05:50 by humanfou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libs.h"
#include "utils.h"

void	destroy_split(char **split)
{
	int	i;

	if (split != NULL)
	{
		i = 0;
		while (split[i] != NULL)
		{
			free(split[i]);
			split[i] = NULL;
			i++;
		}
		free(split);
		split = NULL;
	}
}