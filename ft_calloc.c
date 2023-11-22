/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 20:41:50 by ael-mejd          #+#    #+#             */
/*   Updated: 2023/11/09 18:49:35 by ael-mejd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*p;

	if (count == 0 || size == 0)
	{
		count = 1;
		size = 1;
	}
	p = malloc(count * size);
	if (!p)
		return (NULL);
	ft_bzero((void *)p, count * size);
	return ((void *)p);
}
/*int main() {
    size_t nombreElements = (size_t)-1;
    size_t tailleElement = sizeof(int);

    int *monTableau = (int *)ft_calloc(nombreElements, tailleElement);

    if (monTableau == NULL) {
        fprintf(stderr, "L'allocation mémoire a échoué.\n");
        return EXIT_FAILURE;
    }

    for (size_t i = 0; i < nombreElements; ++i) {
        monTableau[i] = i * 10;
    }

    printf("Valeurs du tableau :\n");
    for (size_t i = 0; i < nombreElements; ++i) {
        printf("%d ", monTableau[i]);
    }
    printf("\n");

    free(monTableau);

    return EXIT_SUCCESS;
}*/