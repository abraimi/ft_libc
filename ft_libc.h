/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_libc.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bl4ckr0s33 <bl4ckr0s33@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 02:48:02 by abraimi           #+#    #+#             */
/*   Updated: 2025/03/13 06:15:33 by bl4ckr0s33       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIBC_H
#define FT_LIBC_H

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 1
#endif

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>


char	*get_next_line(int fd);

int		ft_printf(const char *s, ...);



int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
int		strcmp(const char *s1, const char *s2);
int		ft_atoi(const char *str);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_tolower(int c);
int		ft_toupper(int c);

char	*ft_strnstr(const char *haystack, const char *needle, size_t n);
char	*ft_substr(const char *s, unsigned int start, size_t len);
char	*ft_strmapi(const char *s, char (*f)(unsigned int, char));
char	*ft_strtrim(const char *s1, const char *set);
char	*ft_strjoin(const char *s1, const char *s2);
char	*ft_strrchr(const char *s, int c);
char	*ft_strchr(const char *s, int c);
char	*ft_strdup(const char *s1);
char	*ft_itoa(int n);
char	**ft_split(const char *s, char c);

void	ft_striteri(char *s, void (*f)(unsigned int, char *));
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_calloc(size_t count, size_t size);
void	*ft_memset(void *b, int c, size_t len);
void	ft_putendl_fd(char *s, int fd);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_bzero(void *s, size_t n);
void	ft_putnbr_fd(int n, int fd);

void	ft_putchar_printf(char c, size_t *count);
void	ft_putstr_printf(char *str, size_t *count);
void	ft_putnbr_printf(long nbr, size_t *count);
void	ft_putnbr_u_printf(unsigned int nbr, size_t *count);
void	ft_printhex_printf(const char *base, size_t radix, size_t nbr, size_t *count);
void	ft_printptr_printf(unsigned long ptr, size_t *count);


size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t	ft_strlen(const char *s);


#endif