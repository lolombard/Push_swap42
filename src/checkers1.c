/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkers1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llombard <llombard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 18:29:26 by llombard          #+#    #+#             */
/*   Updated: 2023/03/25 18:29:27 by llombard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	checktrecinque(t_list **a, t_list **sb, int k)
{
	if (!smallorder(a, k))
	{
		if (k == 3)
			ft_maxtre(a);
		else if (k == 5)
		{
			ft_maxfive(a, sb);
			ft_free_stack(*sb);
		}
		else if (k == 4)
		{
			ft_maxfour(a, sb);
			ft_free_stack(*sb);
		}
		else if (k == 2)
			sa(a);
		ft_free_stack(*a);
		return (1);
	}
	return (0);
}

void	ft_maxfour(t_list **a, t_list **b)
{
	int		i;

	i = ft_lstsize(*a);
	while (i != 3)
	{
		if ((*a)->val == 0)
		{
			pb(a, b);
			i--;
		}
		else if ((*a)->val != 0)
			ra(a);
	}
	ft_maxtre(a);
	pa(a, b);
}

int	smallorder(t_list **a, int k)
{
	if ((k == 5) && ((*a)->val < (*a)->next->val
			&& (*a)->next->val > (*a)->next->next->val
			&& (*a)->next->next->val > (*a)->next->next->next->val
			&& (*a)->next->next->next->val > (*a)->next->next->next->next->val))
		return (1);
	else if ((k == 4) && (*a)->val < (*a)->next->val
		&& (*a)->next->val > (*a)->next->next->val
		&& (*a)->next->next->val > (*a)->next->next->next->val)
		return (1);
	else if ((k == 3) && (*a)->val < (*a)->next->val
		&& (*a)->next->val > (*a)->next->next->val)
		return (1);
	else if ((k == 2) && (*a)->val < (*a)->next->val)
		return (1);
	else if (k == 1)
		return (1);
	return (0);
}

void	tempnext(int k, t_list *temp, t_list **a, int *c)
{
	temp = (*a);
	while (temp->next != NULL)
	{
		c[k++] = temp->data;
		temp = temp->next;
	}
	c[k] = temp->data;
}
