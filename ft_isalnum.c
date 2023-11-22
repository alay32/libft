/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 12:28:39 by ael-mejd          #+#    #+#             */
/*   Updated: 2023/11/01 12:30:51 by ael-mejd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}
/*int	main(void)
 {
		char	ch;

		ch = 'A';
		if (ft_isalnum(ch))
		{
			printf("%c is alphanumeric.\n", ch);
		}
		else
		{
			printf("%c is not alphanumeric.\n", ch);
		}
		ch = '7';
		if (ft_isalnum(ch))
		{
			printf("%c is alphanumeric.\n", ch);
		}
		else
		{
			printf("%c is not alphanumeric.\n", ch);
		}
		ch = '*';
		if (ft_isalnum(ch))
		{
			printf("%c is alphanumeric.\n", ch);
		}
		else
		{
			printf("%c is not alphanumeric.\n", ch);
		}
		return (0);
 }*/