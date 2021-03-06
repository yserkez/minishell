/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtoupper.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yserkez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/23 18:10:58 by yserkez           #+#    #+#             */
/*   Updated: 2019/01/22 16:30:25 by yserkez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strtoupper(char **str)
{
	int	i;

	i = -1;
	while ((*str)[++i])
		(*str)[i] = ft_toupper((*str)[i]);
}
