/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Istruzioni.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llombard <llombard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 18:29:38 by llombard          #+#    #+#             */
/*   Updated: 2023/03/25 18:29:39 by llombard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*rotate(t_list	*stack)
{
	t_list	*tmp;

	tmp = stack->next;
	if (stack)
	{
		ft_lstadd_back(&tmp, stack);
		stack->next = NULL;
		stack = tmp;
	}
	return (stack);
}

void	pusher(t_list **stack_src, t_list **stack_dest)
{
	t_list	*temp;

	temp = *stack_src;
	addtop(stack_dest, (*stack_src)->data, (*stack_src)->val);
	*stack_src = temp->next;
	free (temp);
}

void	pa(t_list **a, t_list **b)
{
	pusher(b, a);
	ft_printf("pa\n");
}

void	pb(t_list **a, t_list **b)
{
	pusher(a, b);
	ft_printf("pb\n");
}

void	ra(t_list **a)
{
	(*a) = rotate(*a);
	ft_printf("ra\n");
}
