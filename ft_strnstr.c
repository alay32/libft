/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:42:29 by ael-mejd          #+#    #+#             */
/*   Updated: 2023/11/06 17:42:42 by ael-mejd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;

	if (haystack == NULL && len == 0)
		return (NULL);
	if (needle[0] == '\0')
		return ((char *)(haystack));
	needle_len = ft_strlen(needle);
	while (*haystack != '\0' && len >= needle_len)
	{
		if (*haystack == *needle && ft_strncmp(haystack, needle,
				needle_len) == 0)
		{
			return ((char *)haystack);
		}
		haystack++;
		len--;
	}
	return (NULL);
}
/*int	main(void)
 {
		const char *haystack = "Bonjour, comment ça va ?";
		const char *needle = "comment";
		size_t len = 20;

		char *result = ft_strnstr(haystack, needle, len);

		if (result != NULL)
		{
			printf("La sous-chaîne '%s' a été trouvée à l'indice
				%ld dans la chaîne.\n", needle, result - haystack);
		}
		else
		{
			printf("La sous-chaîne '%s' n'a pas été trouvée dans la chaîne.\n",
				needle);
		}

		return (0);
 }*/