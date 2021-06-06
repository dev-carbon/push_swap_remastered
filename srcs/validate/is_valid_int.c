/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humanfou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 17:39:35 by humanfou          #+#    #+#             */
/*   Updated: 2021/06/04 17:42:02 by humanfou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libs.h"
#include "validate.h"
#include "libft.h"

static int	is_overflow(char *nbr)
{
	int	len;
	int	ovf;

	if (ft_issign(nbr[0]))
	{
		len = ft_strlen(nbr + 1);
		ovf = ft_atoi(&nbr[len]);
		if (len == 10 && nbr[0] == '-' && ovf > 8)
			return (1);
		if (len == 10 && nbr[0] == '+' && ovf > 7)
			return (1);
	}
	else
	{
		len = ft_strlen(nbr);
		ovf = ft_atoi(&nbr[len - 1]);
		if (len == 10 && ovf > 7)
			return (1);
	}
	if (len > 10)
		return (1);
	return (0);
}

int	is_valid_int(char *str)
{
	int	i;
	int	nbr;

	i = -1;
	if (ft_issign(str[0]))
		i++;
	while (str[++i] != '\0')
		if (!ft_isdigit(str[i]))
			return (0);
	if (is_overflow(str))
		return (0);
	nbr = ft_atoi(str);
	return(1);
}