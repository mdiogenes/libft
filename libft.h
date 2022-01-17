/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoler-e <msoler-e@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 14:57:59 by msoler-e          #+#    #+#             */
/*   Updated: 2022/01/13 16:25:15 by msoler-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

int				ft_isdigit(int charac);
int				ft_isalpha(int charac);
int				ft_isalnum(int charac);
int				ft_isascii(int charac);
int				ft_isprint(int charac);
int				ft_strlen(char*str);
void			*ft_memset(void *str, int charac, unsigned int n);
void			ft_bzero(void *str, unsigned int n);
void			*ft_memcpy(void *dest, const  void *src, unsigned int n);
void			*ft_memmove(void *str1, const void *str2, unsigned int n);
unsigned int	ft_strlcpy(char *dst, const char *src, unsigned int sizesrc);
unsigned int	ft_strlcat(char *dst, const char *src, unsigned int sizesrc);
int				ft_toupper(int charac);
int				ft_tolower(int charac);
char			*ft_strchr(const char *str, int c);
char			*ft_strrchr(const char *str, int c);
int				ft_strncmp(const char *str1, const char *str2, unsigned int n);
void			*ft_memchr(const void *str, int c, unsigned int n);
#endif
