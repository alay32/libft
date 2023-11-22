/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 15:20:26 by ael-mejd          #+#    #+#             */
/*   Updated: 2023/11/05 15:20:41 by ael-mejd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	srclenth;
	size_t	i;

	i = 0;
	srclenth = strlen((char *)src);
	if (dstsize)
	{
		while (src[i] && i < dstsize - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (srclenth);
}
/*int	main(void)
 {
		char destination[9];
		const char *source = "Hello, World!";

		size_t result = ft_strlcpy(destination, source, sizeof(destination));

		printf("Copied %zu characters. Destination: %s\n", result, destination);

		return (0);
 }*/