/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ptr_printer.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomes-h <italogholanda@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 21:34:08 by igomes-h          #+#    #+#             */
/*   Updated: 2021/11/17 21:41:28 by igomes-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../ft_printf.h"

int	ptr_printer(unsigned long ptr)
{
	ft_putstr_fd("0x", 1);
	return (new_base_printer(ptr, "0123456789abcdef"));
}
