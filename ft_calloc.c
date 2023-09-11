/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akdovlet <akdovlet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 20:51:37 by akdovlet          #+#    #+#             */
/*   Updated: 2023/09/11 21:03:00 by akdovlet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void *ptr;

	if (nmemb * size >= 2147483647)
		return (NULL);
	if (nmemb == 0 || size == 0)
	{
		size = 1;
		nmemb = 1;
	}
	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	ptr = bzero(ptr, nmemb * size);
	return (ptr);
}
