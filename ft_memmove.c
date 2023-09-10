/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akdovlet <akdovlet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 19:33:18 by adovleto          #+#    #+#             */
/*   Updated: 2023/09/10 20:25:55 by akdovlet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memmove(void *dest, const void *src, size_t n)
{
	size_t i;
	char	*dst;
	char	*source;

	dst = (unsigned char *) dest;
	source = (unsigned char *) src;
	if (!dest && !src)
		return (NULL);
	if (n == 0)
		return (dest);
	if (dest > src)
	{
		while (n--)
			dst[n] = source[n]
	}
	else
	{
		while (n--)
			*dst++ = *source;
	}
	return (dest);
}
