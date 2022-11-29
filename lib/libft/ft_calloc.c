/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatheis <jmatheis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 13:38:06 by jmatheis          #+#    #+#             */
/*   Updated: 2022/04/26 14:08:00 by jmatheis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*test;

	if (size != 0 && (18446744073709551615UL / size < count))
		return (NULL);
	test = malloc(count * size);
	if (test == 0)
		return (0);
	ft_bzero(test, count * size);
	return (test);
}

/* #include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
	printf("%p\n", calloc(0,1));
	printf("%p\n", ft_calloc(0,1));
	return 0;
} */

//works only until MAX value of size_t
//malloc reserves storage at heap
//calloc sets allocated memory to zero
//count = Anzahl der Speicherbloecke
// size = groesse eines einzelnen Speicherblocks
//size * count can only be size max