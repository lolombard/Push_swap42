/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llombard <llombard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 18:29:54 by llombard          #+#    #+#             */
/*   Updated: 2023/03/25 18:29:55 by llombard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	stack(t_list *a, t_list *b)
{
	if (!stackorder(a, b))
	{
		ft_sort(&a, &b);
		ft_free_stack(a);
		ft_free_stack(b);
	}
}

void	rapb(t_list **stack_a)
{
	(*stack_a)->val = (*stack_a)->val >> 1;
	ra(stack_a);
}

void	ft_aggiungi(char **argo, int ac)
{
	t_list	*stack_a;
	t_list	*stack_b;
	int		i;

	i = 0;
	stack_a = NULL;
	stack_b = NULL;
	total_check(ac, argo);
	while (i < ac)
		ft_lstadd_back(&stack_a, ft_lstnew(argo[i++]));
	stack(stack_a, stack_b);
}

void	ft_maxtre(t_list **a)
{
	if ((*a)->val > (*a)->next->val && (*a)->next->next->val > (*a)->val)
		sa(a);
	else if ((*a)->next->next->val < (*a)->next->val
		&& (*a)->next->val < (*a)->val)
	{
		sa(a);
		rra(a);
	}
	else if ((*a)->next->next->val > (*a)->next->val
		&& (*a)->next->val < (*a)->val)
		ra(a);
	else if ((*a)->val < (*a)->next->next->val
		&& (*a)->next->next->val < (*a)->next->val)
	{
		sa(a);
		ra(a);
	}
	else if ((*a)->next->next->val < (*a)->val && (*a)->val < (*a)->next->val)
		rra(a);
}

void	ft_maxfive(t_list **a, t_list **b)
{
	int		i;

	i = ft_lstsize(*a);
	while (i != 3)
	{
		if (((*a)->val == 1) || ((*a)->val == 0))
		{
			pb(a, b);
			i--;
		}
		else if (((*a)->val != 1) && ((*a)->val != 0))
			ra(a);
	}
	ft_maxtre(a);
	if ((*b)->val == 0)
		sb(b);
	pa(a, b);
	pa(a, b);
}
