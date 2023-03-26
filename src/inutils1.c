/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inutils1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llombard <llombard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 18:29:35 by llombard          #+#    #+#             */
/*   Updated: 2023/03/25 18:29:36 by llombard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rb(t_list **b)
{
	if (!rotate(*b))
		ft_printf("rb\n");
}

void	rr(t_list a, t_list b)
{
	if (!rotate(&a) && !rotate(&b))
		ft_printf("rr\n");
}

void	rra(t_list **a)
{
	if (!reverse_rotate(a))
		ft_printf("rra\n");
}

void	rrb(t_list *b)
{
	if (!reverse_rotate(&b))
		ft_printf("rrb\n");
}

void	rrr(t_list **a, t_list **b)
{
	if ((!reverse_rotate(a)) && (!reverse_rotate(b)))
		ft_printf("rrr\n");
}
