/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anhebert <anhebert@42quebec.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 11:51:13 by anhebert          #+#    #+#             */
/*   Updated: 2022/03/30 13:59:05 by anhebert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Copie le charactere c dans les n charactères
 * de la string passée en paramètre*/

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t	i;
	char	*str2;

	i = 0;
	str2 = (char *)str;
	while (i < n)
	{
		str2[i] = (char)c;
		i++;
	}
	return (str2);
}
