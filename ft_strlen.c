/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 13:26:16 by ael-mejd          #+#    #+#             */
/*   Updated: 2023/11/01 14:27:06 by ael-mejd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
/*int	main(void)
 {
		char str[] = "hola ,mundo";

		size_t lengh = ft_strlen(str);

		printf("la longuer de str : %zu\n", lengh);

		return (0);
 }*/