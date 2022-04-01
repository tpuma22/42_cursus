/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpuma <tpuma@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 12:58:41 by tpuma             #+#    #+#             */
/*   Updated: 2022/04/01 21:23:57 by tpuma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" /* Para llamar a mi librería se realiza con doble comilla */

/* int	main(void)
{
	int	resultado;
	int	a;

	a = 65;
	resultado = ft_isalpha(a);
	printf("%d", resultado);
	return (0);
}
--------------------------- */

/* int	main(void)
{
	int	a;

	a = '7';
	printf("Mi función: %d\n", ft_isdigit(a));
	printf("La original: %d\n", isdigit(a));
	return (0);
}
--------------------------------- */

/* int	main(void)
{
	int	a;

	a = '?';
	printf("Mi función: %d\n", ft_isalnum(a));
	printf("La original: %d\n", isalnum(a));
	return (0);
}
---------------------------- */

/* int	main(void)
{
	int	a;

	a = 127;
	printf("Mi función: %d\n", ft_isascii(a));
	printf("La original: %d\n", isascii(a));
	return (0);
}
---------------------------------- */

/* int	main(void)
{
	int	a;

	a = 122;
	printf("Mi función: %d\n", ft_isprint(a));
	printf("La original: %d\n", isprint(a));
	return (0);
}
--------------------------------------- */

int	main(void)
{
	char	str[] = "Hola";
/* 	int		a;

	a = ft_strlen(str);
	printf("Mi función: %d\n", a); */
	printf("La original: %lu\n", strlen(str));
	return (0);
}
