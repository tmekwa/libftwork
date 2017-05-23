/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmekwa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/23 08:06:49 by tmekwa            #+#    #+#             */
/*   Updated: 2017/05/23 08:52:24 by tmekwa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int i;

	i = 0;
	while ((unsigned char)s1[i] && (unsigned char)s2[i] &&
			((unsigned char)s1[i] == (unsigned char)s2[i] || i < n))
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

int		main()
{
	char a[] = "Tumi";
	char b[] = "Tuma";

	printf("%s", ft_strncmp(a, b, 2));
	return (0);
}
