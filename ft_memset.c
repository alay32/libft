/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:29:55 by ael-mejd          #+#    #+#             */
/*   Updated: 2023/11/03 19:11:54 by ael-mejd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*str;
	size_t			i;

	if (len == 0)
		return (b);
	i = 0;
	str = (unsigned char *)b;
	while (i < len)
	{
		str[i] = c;
		i++;
	}
	return (b);
}
/*int	main(void)
 {
		char *buffer;
		ft_memset(&buffer, 57, 1);
		ft_memset((char *)&buffer + 1, 5, 1);

		printf("buffer after memset : %s\n", buffer);

		return (0);
 }*/