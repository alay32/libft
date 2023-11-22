/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 12:44:11 by ael-mejd          #+#    #+#             */
/*   Updated: 2023/11/05 12:44:24 by ael-mejd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
/*int	main(void)
 {
		char mystring[] = "hello world";

		size_t lengh = strlen(mystring);

		ft_bzero(mystring, lengh);

		printf("mystring : %s", mystring);

		return (0);
 } */