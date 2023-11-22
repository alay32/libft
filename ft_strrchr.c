/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 21:23:00 by ael-mejd          #+#    #+#             */
/*   Updated: 2023/11/05 21:23:15 by ael-mejd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*cur;

	cur = (char *)s + ft_strlen(s);
	while (*cur != c)
	{
		if (cur == s)
		{
			return (NULL);
		}
		cur--;
	}
	return (cur);
}
/*int	main(void)
 {
		char *str = "hello world";
		int to_find = '\0';

		char *result = ft_strrchr(str, to_find);

		printf("%p", result);

		return (0);
 }*/