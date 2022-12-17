/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsasmaz <zsasmaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 14:16:13 by zsasmaz           #+#    #+#             */
/*   Updated: 2022/10/18 14:16:14 by zsasmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int	ft_putarg(char c, va_list args);
int	ft_printf(const char *s, ...);
int	ft_putchar(char c);
int	ft_putstr(const char *str);
int	ft_putnbr(int nbr);
int	ft_putunbr(unsigned int nbr, char *base);
int	ft_putptr(void *ptr);

#endif