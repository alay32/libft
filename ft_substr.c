/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 19:25:15 by ael-mejd          #+#    #+#             */
/*   Updated: 2023/11/11 05:51:24 by ael-mejd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*substr;
	unsigned int	s_len;

	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (s == NULL || len < 0)
		return (NULL);
	s_len = ft_strlen(s);
	if (len > s_len - start)
		len = s_len - start;
	substr = (char *)malloc((len + 1) * sizeof(char));
	if (!substr)
		return (NULL);
	ft_strlcpy(substr, &s[start], (len + 1));
	return (substr);
}
/*int main() {
	const char *source = "Hello, World!";
	int start_index = 7;
	int substring_length = 5;

	char *result = ft_substr(source, start_index, substring_length);

	if (result != NULL) {
		printf("Original: %s\n", source);
		printf("Substring: %s\n", result);
		free(result); // N'oubliez pas de libérer la mémoire allouée
	} else {
		printf("Invalid input or substring out of bounds.\n");
	}

	return (0);
}*/