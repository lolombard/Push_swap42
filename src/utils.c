/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llombard <llombard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 18:29:50 by llombard          #+#    #+#             */
/*   Updated: 2023/03/25 18:29:51 by llombard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	ft_atol(const char *str)
{
	long	res;
	long	sign;

	res = 0;
	sign = 1;
	while (*str == 32 || (*str >= 9 && *str <= 13))
	{
		str++;
	}
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		res = res * 10 + *str - '0';
		str++;
	}
	return (res * sign);
}

int	acceptdigit(int i, int j, char **argo)
{
	int	f;

	f = 0;
	while (argo[i])
	{
		while (argo[i][j])
		{
			if (argo[i][j] == '-' || argo[i][j] == '+')
			{
				f++;
				j++;
			}
			if (f > 1 || (!(argo[i][j] >= '0' && argo[i][j] <= '9')))
				return (1);
			j++;
		}
		i++;
		j = 0;
		f = 0;
	}
	return (0);
}

void	binary_search_and_replace(int *c, int min, int max, t_list **stack_a)
{
	int		mid;
	int		a;
	int		b;
	t_list	*temp;

	temp = (*stack_a);
	while (temp != NULL)
	{
		a = min;
		b = max;
		while (a <= b)
		{
			mid = (a + b) / 2;
			if (temp->data == c[mid])
			{
				temp->val = mid;
				temp = temp->next;
				break ;
			}
			else if (temp->data > c[mid])
				a = mid + 1;
			else
				b = mid - 1;
		}
	}
}

int	stackorder(t_list *stack_a, t_list *stack_b)
{
	int		*c;
	int		i;
	int		k;
	t_list	*tmp;

	tmp = stack_a;
	k = 0;
	i = ft_lstsize(stack_a);
	c = malloc(sizeof(int) * i);
	tempnext(k, tmp, &stack_a, c);
	k = i;
	i = 0;
	ordinacose(i, k, c);
	k = ft_lstsize(stack_a);
	binary_search_and_replace(c, 0, (k - 1), &stack_a);
	if ((k <= 5) && (checktrecinque(&stack_a, &stack_b, k)))
	{
		free(c);
		return (1);
	}
	free(c);
	return (0);
}

void	ft_free_stack(t_list *a)
{
	t_list	*dopo;

	dopo = NULL;
	while (a)
	{
		dopo = a->next;
		free(a);
		a = dopo;
	}
}
