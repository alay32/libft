/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 18:17:38 by ael-mejd          #+#    #+#             */
/*   Updated: 2023/11/05 18:17:55 by ael-mejd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	dlen;
	size_t	slen;

	dlen = ft_strlen(dst);
	slen = ft_strlen(src);
	j = dlen;
	i = 0;
	if (dstsize == 0 || dstsize <= dlen)
		return (slen + dstsize);
	while (src[i] != '\0' && i < dstsize - dlen - 1)
	{
		dst[j++] = src[i++];
	}
	dst[j] = '\0';
	return (dlen + slen);
}
/*int	main(void)
 {
		char destination[7] = "Hello";
		const char *source = "world!";
		size_t maxSize = sizeof(destination);

		printf("Chaîne de destination avant concaténation : %s\n", destination);

		size_t result = ft_strlcat(destination, source, maxSize);

		printf("Chaîne de destination après concaténation : %s\n", destination);
		printf("Longueur totale de la chaîne concaténée : %zu\n", result);

		return (0);
 }*/