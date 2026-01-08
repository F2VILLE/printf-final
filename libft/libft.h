/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdeville <fdeville@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 02:35:05 by fdeville          #+#    #+#             */
/*   Updated: 2025/10/20 13:50:50 by fdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>

/* BONUS*/
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

t_list			*ft_lstnew(void *content);
void			ft_lstadd_front(t_list **lst, t_list *new);
void			ft_lstadd_back(t_list **lst, t_list *new);
int				ft_lstsize(t_list *lst);
t_list			*ft_lstlast(t_list *lst);
void			ft_lstdelone(t_list *lst, void (*del)(void *));
void			ft_lstiter(t_list *lst, void (*f)(void *));
void			ft_lstclear(t_list **lst, void (*del)(void *));
t_list			*ft_lstmap(t_list *lst, void *(*f)(void *),
					void (*del)(void *));
/* MANDATORY */
void			ft_putnbr_fd(int n, int fd);
void			ft_putstr_fd(char *s, int fd);
int				ft_tolower(int c);
void			ft_bzero(void *s, size_t n);
void			ft_putnbr(int n);
char			**ft_split(char const *s, char c);
int				ft_strlcat(char *dest, char *src, unsigned int size);
char			*ft_strtrim(char const *s1, char const *set);
int				ft_isdigit(int c);
size_t			ft_strlen(const char *s);
void			*ft_calloc(size_t n, size_t size);
char			*ft_substr(char const *s, unsigned int start, size_t len);
char			*ft_strnstr(char *str, char *to_find, size_t len);
void			ft_putstr_fd(char *s, int fd);
void			ft_putchar_fd(char c, int fd);
int				ft_strncmp(char *s1, char *s2, unsigned int n);
int				ft_toupper(int c);
int				ft_atoi(const char *s);
void			*ft_memmove(void *dst, const void *src, size_t len);
char			*ft_strrchr(const char *s, int c);
int				ft_isascii(int c);
void			ft_putchar(int c);
void			*ft_memchr(const void *s, int c, size_t n);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_itoa(int n);
void			*ft_memset(void *b, int c, size_t len);
void			*ft_memcpy(void *dst, const void *src, size_t n);
size_t			ft_strlcpy(char *dest, char *src, size_t size);
char			*ft_strdup(char *src);
int				ft_memcmp(void *s1, void *s2, size_t n);
int				ft_isalpha(int c);
char			*ft_strchr(const char *s, int c);
int				ft_isalnum(int c);
int				ft_isprint(int c);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void			ft_striteri(char *s, void (*f)(unsigned int, char*));
void			ft_putendl_fd(char *s, int fd);

#endif
