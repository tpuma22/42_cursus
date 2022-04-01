/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpuma <tpuma@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 13:00:39 by tpuma             #+#    #+#             */
/*   Updated: 2022/04/01 21:14:20 by tpuma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include<stdio.h>
# include<unistd.h>
# include<ctype.h>
# include<stdlib.h>
# include<string.h>

int	ft_isalpha(int c);
int	ft_isdigit(int b);
int	ft_isalnum(int a);
int	ft_isascii(int i);
int	ft_isprint(int n);
int	strlen(const char *s);

/*
•
•
•
•
• memset
• bzero
• memcpy
• memmove
• strlcpy
• strlcat
• toupper
• tolower
• strchr
• strrchr
• strncmp
• memchr
• memcmp
• strnstr
• atoi
 */

#endif
