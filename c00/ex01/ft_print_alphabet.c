/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajordan- <ajordan-@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 10:43:32 by ajordan-          #+#    #+#             */
/*   Updated: 2021/06/16 10:43:47 by ajordan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void ft_putchar(char m)
{
    write(1, &m, 1);
}
void ft_print_alphabet(void)
{
    char xihaja;
    xihaja = 'a';
    while(xihaja <= 'z')
    {
        ft_putchar(xihaja)
        xihaja++;
    }
}
