/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 21:02:22 by ael-mejd          #+#    #+#             */
/*   Updated: 2023/11/05 21:02:39 by ael-mejd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;

	str = (char *)s;
	while (*str != c)
	{
		if (*str == '\0')
		{
			return (NULL);
		}
		str++;
	}
	return (str);
}
/*int	main(void)
 {
		char	*str;
		int		to_find;
		char	*result;

		str = "hello world";
		to_find = '\0';
		result = ft_strchr(str, to_find);
		printf("%p", result);
		return (0);
 }*/