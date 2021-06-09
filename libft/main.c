/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humanfou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 14:19:22 by humanfou          #+#    #+#             */
/*   Updated: 2021/06/09 14:22:10 by humanfou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(int ac, char **av)
{
	long int	nbr;

	if (ac > 1)
	{
		nbr = ft_atoi(av[1]);
		printf("%ld\n", nbr);	
		// ft_putnbr(nbr);
		return (0);
	}
}
