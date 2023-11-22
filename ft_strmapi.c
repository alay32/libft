/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 21:54:59 by ael-mejd          #+#    #+#             */
/*   Updated: 2023/11/12 06:19:07 by ael-mejd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	size_t	i;
	char	*str;

	i = 0;
	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	while (i < len)
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*char	f(unsigned int i, char c)
{
	(void)i;
	if ( c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

int main() {
	char *input = "Rnpu cebwrpg bs gur 97 Pbzzba Pber pbagnvaf na rapbqrq uvag.";
    char *output = malloc(ft_strlen(input) + 1);
	output = ft_strmapi(input, &f);

    if (output != NULL) {
        printf("Input: %s\n", input);
        printf("Output: %s\n", output);

        free(output); // N'oubliez pas de libérer la mémoire allouée
    }

    return 0;
}*/