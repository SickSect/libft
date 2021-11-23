/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugina <ugina@student.21-school.r>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 21:44:47 by ugina             #+#    #+#             */
/*   Updated: 2021/10/16 21:45:33 by ugina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str_s)
{
	char	*str;
	size_t	i;

	i = 0;
	str = malloc(sizeof(char) * (ft_strlen(str_s) + 1));
	if (!str)
		return (NULL);
	while (str_s[i])
	{
		str[i] = str_s[i];
		i++;
	}
	str[i] = 0;
	return (str);
}
