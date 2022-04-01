/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpuma <tpuma@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 12:58:41 by tpuma             #+#    #+#             */
/*   Updated: 2022/03/28 15:36:22 by tpuma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include<libft.h> */
#include<stdio.h>
/* #include<ctype.h> */
int	ft_isalpha(int c);

int	main(void)
{
	int	resultado;
	int	a;

	a = 66;
	/* ft_isalpha(a); */
	resultado = ft_isalpha(a);

	printf("%d", resultado);
	return (0);
}
