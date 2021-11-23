/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugina <ugina@student.21-school.r>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 21:57:18 by ugina             #+#    #+#             */
/*   Updated: 2021/10/16 21:58:17 by ugina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str1, const char *str2, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (str1 == str2 || ft_strlen(str2) == 0)
		return ((char *)str1);
	while (i < n && str1[i])
	{
		j = 0;
		while (str1[i + j] == str2[j] && i + j < n
			&& str1[i + j] && str2[j])
		{
			j++;
		}
		if (!str2[j])
		{
			return ((char *)(str1 + i));
		}
		i++;
	}
	return (NULL);
}
