/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celeste <celeste@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 20:51:37 by akdovlet          #+#    #+#             */
/*   Updated: 2023/09/12 19:31:36 by celeste          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;

	if ((nmemb * size) >= SIZE_MAX)
		return (NULL);
	if ((int)nmemb < 0 && (int)size < 0)
		return (NULL);
	if (nmemb == 0 || size == 0)
	{
		size = 1;
		nmemb = size;
	}
	p = malloc(nmemb * size);
	if (!p)
		return (NULL);
	ft_bzero(p, nmemb * size);
	return (p);
}
