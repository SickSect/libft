/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugina <ugina@student.21-school.r>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 22:05:38 by ugina             #+#    #+#             */
/*   Updated: 2021/10/16 22:10:43 by ugina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

int	main();
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f)(void *));
void	ft_lstclear(t_list **lst, void (*del)(void*));
void	ft_lstdelone(t_list *lst, void (*del)(void*));
void	ft_lstadd_back(t_list **lst, t_list *new);
t_list	*ft_lstlast(t_list *lst);
int		ft_lstsize(t_list *lst);
void	ft_lstadd_front(t_list **lst, t_list *new);
t_list	*ft_lstnew(void *content);
void	ft_putnbr_fd(int n, int fd);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
char	**ft_split(char const *s, char c);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_substr(const char *s, unsigned int start, size_t len);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_itoa(int n);
int		ft_atoi(const char *str);
int		ft_isalpha(int ch);
void	*ft_memcpy(void *dest, const void *src, size_t n);
char	*ft_strdup(const char *str_s);
void	*ft_calloc(size_t count, size_t size);
int		ft_memcmp(const void *str1, const void *str2, size_t n);
char	*ft_strnstr(const char *str1, const char *str2, size_t n);
int		atoi(const char *str);
void	*ft_memchr(void *str, int ch, size_t len);
int		ft_strncmp(const char *str1, const char *str2, size_t n);
char	*ft_strrchr(char *str, int ch);
char	*ft_strchr(const char *str, int ch);
int		ft_tolower(int ch);
int		ft_toupper(int ch);
int		ft_isdigit(int ch);
size_t	ft_strlcpy(char *dest, const char *src, size_t n);
void	*ft_memmove(void *dest, void *src, size_t n);
void	ft_bzero(void *dest, size_t n);
void	*ft_memset(void *dest, int c, size_t n);
int		ft_isalnum(int ch);
int		ft_isascii(int ch);
int		ft_isprint(int ch);
int		ft_strlen(const char *str);
size_t	ft_strlcat(char *dest, const char *src, size_t len);
#endif
