/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 12:55:02 by ael-mejd          #+#    #+#             */
/*   Updated: 2023/11/01 13:10:26 by ael-mejd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/*int	main(void)
 {
		int	a;

		printf("saisir :");
		scanf("%d", &a);
		if (ft_isascii(a))
			printf("It's ascii");
		else
			printf("Not ascii");
		return (0);
 }*/