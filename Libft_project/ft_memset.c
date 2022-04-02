/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpuma <tpuma@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 12:06:37 by tpuma             #+#    #+#             */
/*   Updated: 2022/04/02 17:13:32 by tpuma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* SYNOPSIS
LIBRARY
	#include <string.h>
PROTOTYPE
	void *memset(void *b, int c, size_t len);
DESCRIPTION
	The memset() function writes len bytes of value c (converted to an unsigned char) to the string b.
PARAMETERS
		1. The destiny pointer in which to write (void *b).
		Since "void *" is not available to work, you have to convert it to another data type.
		2. The character to write (int c).
		3. The number of bytes to write(size_t len).
RETURN VALUES
	The memset() function returns its first argument.
 */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)b)[i] = c;
		i++;
	}
	return (b);
}
