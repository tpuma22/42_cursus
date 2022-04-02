/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpuma <tpuma@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 12:58:41 by tpuma             #+#    #+#             */
/*   Updated: 2022/04/02 18:24:40 by tpuma            ###   ########.fr       */
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

/* int	main(void)
{
	char	str[] = "Hola mundo";
	int		a;

	a = ft_strlen(str);
	printf("Mi función: %d\n", a);
	printf("La original: %lu\n", strlen(str));
	return (0);
}
 */
/* int	main(void)
{
	int	a;

	a = 127;
	printf("variable: %c\n", a);
	printf("Mi función: %d - %c\n", ft_toupper(a), ft_toupper(a));
	printf("La original: %d - %c\n", toupper(a), toupper(a));
	return (0);
}
---------------------------------------------- */
/* int	main(void)
{
	int	a;

	a = 65;
	printf("variable: %c\n", a);
	printf("Mi función: %d - %c\n", ft_tolower(a), ft_tolower(a));
	printf("La original: %d - %c\n", tolower(a), tolower(a));
	return (0);
}
------------------------------------------ */
/* int	main(void)
{
	int				a;
	size_t			len;
	unsigned char	cadena[] = "Hola mundo";

	a = 66;
	len = 2;
	printf("variable: %s\n", cadena);
	printf("Mi función: %s\n", ft_memset(cadena, a, len));
	printf("La original: %s\n", memset(cadena, a, len));
	return (0);
}
--------------------------------------------- */

/* int	main(void)
{
	size_t			l;
	char	dest1[] = "";
	char	source1[] = "POLOLO";
	char	dest2[] = "";
	char	source2[] = "POLOLO";

	l = 2;
	printf("%s | %s\n", dest1, source1);
	printf("Mi función: %zu\n", ft_strlcpy(dest1, source1, l));
	printf("%s | %s\n", dest1, source1);
	printf("La original: %lu\n", strlcpy(dest2, source2, l));
	printf("%s | %s\n", dest2, source2);
	return (0);
}
------------------------------- */
