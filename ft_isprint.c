/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isprint.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 13:11:46 by ael-mejd          #+#    #+#             */
/*   Updated: 2023/11/01 13:22:47 by ael-mejd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
/*int	main(void)
 {
		int n;

		printf("saisir : ");
		scanf("%d", &n);

		if (ft_isprint(n))
			printf("It's printable");
		else
			printf("Not printable");

		return (0);
 }*/