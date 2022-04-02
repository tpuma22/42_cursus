/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpuma <tpuma@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 13:00:39 by tpuma             #+#    #+#             */
/*   Updated: 2022/04/02 15:40:12 by tpuma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include<stdio.h>
# include<unistd.h>
# include<ctype.h>
# include<stdlib.h>
# include<string.h>
# include<stddef.h>

extern	int		ft_isalpha(int c);
extern	int		ft_isdigit(int b);
extern	int		ft_isalnum(int a);
extern	int		ft_isascii(int i);
extern	int		ft_isprint(int n);
extern	size_t	ft_strlen(const char *s);
extern	int		ft_toupper(int c);
extern	int		ft_tolower(int c);
extern	void		*ft_memset(void *b, int c, size_t len);
extern	size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);

/*

• bzero
• memcpy
• memmove
• strlcpy
• strlcat
• strchr
• strrchr
• strncmp
• memchr
• memcmp
• strnstr
• atoi
 */

#endif
