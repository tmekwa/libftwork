/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmekwa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/22 15:25:55 by tmekwa            #+#    #+#             */
/*   Updated: 2017/05/22 15:42:09 by tmekwa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char	ft_strdup(char *src)
{
	char *dst;
	int i;

	i = 0;
	while (src[i] != '\0')
		i++;
	i++;
	dst = (char *)malloc(sizeof(char) * i);
	while (i >= 0)
	{
		dst[i] = src[i];
		i--;
	}
	return (dst);
}
