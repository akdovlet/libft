/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akdovlet <akdovlet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 20:12:06 by akdovlet          #+#    #+#             */
/*   Updated: 2023/09/13 20:44:04 by akdovlet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	size;
	char	*mapi;

	if (!s || !f)
		return (NULL);
	i = 0;
	size = ft_strlen(s);
	mapi = malloc(sizeof(char) * (size + 1));
	ft_strlcpy(mapi, s, size + 1);
	while (mapi[i])
	{
		mapi[i] = (*f)(i, mapi[i]);
		i++;
	}
	return (mapi);
}

/* #include <stdio.h>

char	ft_test(unsigned int index, char c)
{
	c += index;
	return (c);
}

int main()
{
	char	*str = "ABCDEFG";
	printf("%s\n", ft_strmapi(str, ft_test));
} */