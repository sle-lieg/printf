/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-lieg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 15:18:41 by sle-lieg          #+#    #+#             */
/*   Updated: 2017/01/01 06:57:13 by sle-lieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_toupper(char *str)
{
	char *ptr;

	ptr = str;
	if (str)
	{
		while (*ptr)
		{
			if (ft_islower(*ptr))
				*ptr -= 32;
			++ptr;
		}
	}
	return (str);
}
