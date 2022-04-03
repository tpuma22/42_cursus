/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpuma <tpuma@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 18:22:12 by tpuma             #+#    #+#             */
/*   Updated: 2022/04/03 16:25:46 by tpuma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char *str)
{
	int	sign;
	int	i;
	int	total;

	i = 0;
	total = 0;
	sign = 1;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' \
		|| str[i] == '\r' || str[i] == '\f' || str[i] == '\v')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			sign *= -1;
		}
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		total = ((total * 10) + (str[i] - '0'));
		i++;
	}
	total *= sign;
	return (total);
}

/*
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_atoi(char *str);

int	main(void)
{
	char	a[] = " ---+---+1234ab567";
	printf("%s\n", a);
	ft_atoi(a);
	printf("mi función es: %d\n", ft_atoi(a));
	printf("la original es: %d\n", atoi(a));
	return (0);
}
 */
