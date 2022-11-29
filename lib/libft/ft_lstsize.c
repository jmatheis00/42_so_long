/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juliama <juliama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 16:40:57 by jmatheis          #+#    #+#             */
/*   Updated: 2022/04/20 13:44:44 by juliama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	counter;

	counter = 0;
	if (lst == NULL)
		return (0);
	while (lst != NULL)
	{
		lst = lst-> next;
		counter++;
	}
	return (counter);
}

//returns length of list
//counts nodes in a list