/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 11:59:20 by ael-mejd          #+#    #+#             */
/*   Updated: 2023/11/01 12:12:07 by ael-mejd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
/*int	main(void)
 {
		char c;
		printf("saisir un caractere : ");
		scanf("%c", &c);
		if (ft_isalpha(c))
			printf("c'est un alphabet");
		else
			printf("maxi caractere");

		return (0);
 }*/