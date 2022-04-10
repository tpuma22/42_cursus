/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpuma <tpuma@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 13:00:39 by tpuma             #+#    #+#             */
/*   Updated: 2022/04/10 18:40:59 by tpuma            ###   ########.fr       */
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
extern	void		*ft_memset(void *b, int c, size_t len);
extern	void		ft_bzero(void *s, size_t n);
extern	void		*ft_memcpy(void *dst, const void *src, size_t n);
extern	void		*ft_memchr(const void *s, int c, size_t n);
extern	void		*ft_memmove(void *dst, const void *src, size_t len);
extern	size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
extern	size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
extern	int		ft_toupper(int c);
extern	int		ft_tolower(int c);
extern	int		ft_atoi(const char *str);
extern	char		*ft_strchr(const char *s, int c);
extern	char		*ft_strrchr(const char *s, int c);
extern	int		ft_strncmp(const char *s1, const char *s2, size_t n);
extern	char		*ft_strnstr(const char *haystack, const char *needle, size_t len);
extern	int		ft_memcmp(const void *s1, const void *s2, size_t n);
extern	char		*ft_strdup(const char *s1);
extern	void		*ft_calloc(size_t count, size_t size);


#endif
