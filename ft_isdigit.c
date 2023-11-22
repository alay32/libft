/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 12:13:18 by ael-mejd          #+#    #+#             */
/*   Updated: 2023/11/01 12:17:44 by ael-mejd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
/*int	main(void)
 {
		int a;

		printf("saisir :");
		scanf("%d", &a);

		if (ft_isdigit(a))
			printf("It's digit");
		else
			printf("Not digit");

		return (0);
 }*/