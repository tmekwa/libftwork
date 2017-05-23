/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmekwa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/23 10:18:54 by tmekwa            #+#    #+#             */
/*   Updated: 2017/05/23 10:30:06 by tmekwa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, const char *src)
{
	size_t n;
	int i;

	n = 0;
	i = 0;
	while (dest[n])
		n++;
	while (src[i] != '\0')
	{
		dest[n + i] = src[i];
		i++;
	}
	dest[n + i] = '\0';
	return (dest);
}

int		main()
{
	char a[] = "Lee";
	char a1[]= "soo";
	ft_strcat(a, a1);
	printf("%s", a);
}
