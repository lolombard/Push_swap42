/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgala <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 13:43:40 by mgala             #+#    #+#             */
/*   Updated: 2022/11/03 17:38:45 by mgala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*k;
	int		l;

	k = lst;
	l = 0;
	if (lst != 0)
	{
		while (k != 0)
		{
			k = k -> next;
			l++;
		}
	}
	return (l);
}
