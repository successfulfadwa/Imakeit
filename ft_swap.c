/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faljaoui <faljaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 21:18:13 by faljaoui          #+#    #+#             */
/*   Updated: 2022/06/28 00:28:11 by faljaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h> 

void	ft_swap(int *a, int *b)
{
    int tmp;
    
   tmp=*b;
    *b=*a;
    *a = tmp;
}
int main ()
{
    int b = 5;
    int a=9;
    printf("\n %d%d\n",a, b);
    ft_swap(&b, &a);
    printf("%d%d",a, b);
}