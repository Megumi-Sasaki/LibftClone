/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mesasaki <mesasaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 19:51:09 by mesasaki          #+#    #+#             */
/*   Updated: 2024/05/01 21:40:55 by mesasaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c < 127);
}

// int	main(void)
// {
// 	char ch = '7';
// 	printf("library :%d\n", isprint('2'));
// 	printf("zisaku  :%d\n", ft_isprint('2'));
// 	printf("library :%d\n", isprint('\t'));
// 	printf("zisaku  :%d\n", ft_isprint('\t'));
// 	printf("library :%d\n", isprint('\n'));
// 	printf("zisaku  :%d\n", ft_isprint('\n'));

// 	return (0);
// }