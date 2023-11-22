/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 21:35:45 by ael-mejd          #+#    #+#             */
/*   Updated: 2023/11/05 21:36:00 by ael-mejd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (!n)
		return (0);
	while (s1[i] == s2[i] && s1[i] && s2[i] && i < n)
		i++;
	if (i == n)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*int	main(void)
 {
		char str[20] = "world";
		char s[20] = "hello";

		int a;
		a = ft_strncmp(str, s, 20);
		if (a > 0)
			printf("str kbira ela s");
		else if (a < 0)
			printf("s kbira ela str");
		else
			printf("9ad 9ad");

		return (0);
 }*/