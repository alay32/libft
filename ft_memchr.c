/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:17:52 by ael-mejd          #+#    #+#             */
/*   Updated: 2023/11/06 14:18:06 by ael-mejd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	while (n--)
	{
		if (*(unsigned char *)s == (unsigned char)c)
			return ((void *)s);
		s++;
	}
	return (NULL);
}
/*int	main(void)
 {
		char buffer[] = "Hello, orld!";
		char *result = ft_memchr(buffer, 'W', strlen(buffer));

		if (result != NULL)
		{
			printf("Première occurrence de 'W' trouvée à l'indice %ld\n", result
				- buffer);
		}
		else
		{
			printf("Aucune occurrence de 'W' trouvée.\n");
		}

		return (0);
 }*/