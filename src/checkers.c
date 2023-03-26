/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkers.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llombard <llombard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 18:29:21 by llombard          #+#    #+#             */
/*   Updated: 2023/03/25 18:29:22 by llombard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	checkequals(int i, int j, char **argo)
{
	while (argo[i])
	{
		while (argo[j])
		{
			if (ft_atoi(argo[i]) == ft_atoi(argo[j]))
			{
				ft_printf("ERROR!!! Il programma non accetta numeri uguali\n");
				exit (1);
			}
			j++;
		}
		i++;
		j = i + 1;
	}
	return (0);
}

int	checkdigits(int i, char **argo)
{
	while (argo[i])
	{
		if (acceptdigit(i, 0, argo) != 0)
		{
			ft_printf("ERROR!!! Tipo di informazione errata\n");
			exit (1);
		}
		i++;
	}
	return (0);
}

int	checksign(int i, char **argo)
{
	int	j;
	int	flag;

	while (argo[i])
	{
		flag = 0;
		j = 0;
		while (argo[i][j])
		{
			if (argo[i][j] < '0' && argo[i][j] > '9')
				flag++;
			if (flag > 1)
			{
				ft_printf("ERROR!!! Inserire solo un segno per numero\n");
				exit (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}

int	maxnum(int i, char **argo)
{
	while (argo[i])
	{
		if (ft_atol(argo[i]) >= 2147483648 || ft_atol(argo[i]) <= -2147483649)
		{
			ft_printf("ERROR!!! bah, ma anche meno eh..\n");
			exit (1);
		}
		i++;
	}
	return (0);
}

int	total_check(int ac, char **av)
{
	int		i;
	char	**argo;

	i = 0;
	argo = av;
	if (ac > 1)
	{
		maxnum(i, argo);
		checkdigits(i, argo);
		checksign(i, argo);
		checkequals(i, (i + 1), argo);
	}
	return (0);
}
