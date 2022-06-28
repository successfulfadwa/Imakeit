/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faljaoui <faljaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 02:51:42 by faljaoui          #+#    #+#             */
/*   Updated: 2022/06/28 04:43:27 by faljaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h> 

int main(int argc , char *argv[])
{
    int i = 0;
    while (argv[1][i])
    {
    //printf("%d",i);
    i++;
    }
    while (i>=0)
    {
        write(1,&argv[1][i],1);
        i--;
    }
 }