/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 21:00:25 by ael-mejd          #+#    #+#             */
/*   Updated: 2023/11/05 21:00:37 by ael-mejd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
/*int	main(void)
 {
		char a;
		printf("Saisir : ");
		scanf("%c", &a);

		printf("%c", ft_tolower(a));
		return (0);
 }*/