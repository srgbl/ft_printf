/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char_to_str.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloras-t <gloras-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/27 21:36:49 by gloras-t          #+#    #+#             */
/*   Updated: 2019/05/02 01:02:24 by gloras-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_char_to_str(char c)
{
	char	*str;

	str = ft_strnew(1);
	str[0] = c;
	return (str);
}
