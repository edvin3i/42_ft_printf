/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbreana <gbreana@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 09:01:47 by gbreana           #+#    #+#             */
/*   Updated: 2022/01/12 12:10:06 by gbreana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
/*
 * Includes
 */
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
/*
 * Main Function
 */
int	ft_printf(const char *format, ...);
/*
 * Aux functions
 */
int	ft_parser(const char *str, va_list args);
int	ft_type_handler(int c, va_list args);
int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_putnbr(int num);
int	ft_puthex(unsigned long num, int c);
int	ft_putptr(uintptr_t num);
int	ft_putunbr(unsigned int num);
int	ft_strchri(const char *str, int c);
#endif