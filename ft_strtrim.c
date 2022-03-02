/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugina <ugina@student.21-school.r>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 22:00:12 by ugina             #+#    #+#             */
/*   Updated: 2021/10/16 22:02:48 by ugina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isset(const char a, const char *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == a)
			return (1);
		i++;
	}
	return (0);
}

static char	*ft_cut(const char *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;

	i = start;
	j = 0;
	if (!s)
		return (NULL);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	while ((int)i < ft_strlen(s) && j < len)
	{
		str[j] = s[i];
		i++;
		j++;
	}
	str[j] = '\0';
	return (str);
}

char	*ft_strtrim(char const *str, char const *set)
{
	size_t	start;
	size_t	end;
	char	*s_ptr;

	if (!str)
		return (NULL);
	if (!set)
		return (ft_strdup(str));
	start = 0;
	while (str[start] != '\0' && ft_isset(str[start], set) == 1)
		start++;
	end = ft_strlen(str);
	if (start == end)
	{
		s_ptr = ft_strdup("");
		if (!s_ptr)
			return (NULL);
		else
			return (s_ptr);
	}
	while (ft_isset(str[end - 1], set) == 1)
		end--;
	s_ptr = ft_cut(str, start, end - start);
	return (s_ptr);
}
