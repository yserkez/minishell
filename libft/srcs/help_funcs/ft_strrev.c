/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yserkez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 14:55:47 by yserkez           #+#    #+#             */
/*   Updated: 2019/01/22 16:31:43 by yserkez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *s, int len)
{
	char	*ret;
	int		j;

	j = 0;
	ret = ft_strnew(len);
	while (--len >= 0)
		ret[j++] = s[len];
	return (ret);
}