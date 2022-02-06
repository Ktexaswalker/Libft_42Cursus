/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmartine <hmartine@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 14:25:20 by hmartine          #+#    #+#             */
/*   Updated: 2022/02/06 19:12:59 by hmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>

void*	ft_calloc(size_t count, size_t size);
*/

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*ptr;

	ptr = (void *)malloc(count * size);
	if (!ptr)
		return (NULL);
	while (size > 0)
	{
		ptr[size] = ('\0');
		size--;
	}
	return ((void *)ptr);
}

/*
int	main(void)
{
	char*	str;
	int		i;

	printf("Original\n");
	i = 0;
	str = calloc(2, sizeof(char));
	while (i < 3)
	{
		if (str[i] != '\0')
			printf("No es nulo\n");
		else
			printf("Es nulo\n");
		i++;
	}
	printf("Creada\n");
	i = 0;
	str = ft_calloc(2, sizeof(char));
	while (i < 3)
	{
		if (str[i] != '\0')
			printf("No es nulo\n");
		else
			printf("Es nulo\n");
		i++;
	}
}
*/
