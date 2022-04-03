/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpuma <tpuma@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 20:52:20 by tpuma             #+#    #+#             */
/*   Updated: 2022/04/03 16:14:33 by tpuma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/* int	main(void)
{
	char	str[] = "Hola mundo";
	int		a;

	a = ft_strlen(str);
	printf("Mi función: %d\n", a);
	printf("La original: %lu\n", strlen(str));
	return (0);
} */
