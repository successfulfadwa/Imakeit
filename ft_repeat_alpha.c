/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_repeat_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faljaoui <faljaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 02:13:28 by faljaoui          #+#    #+#             */
/*   Updated: 2022/06/28 04:26:54 by faljaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
int ft_rebeat(char c)
{
	int nb;
	if (c >='a'|| c<='z')
	{
	nb = c -'a'+1;
	return (nb );
	}
	if (c >='A'|| c<='Z')
	{
		nb = c -'A'+1;
		return (nb );
	}
	else 
	return (1);
}
int main ( int argc , char *argv[])
{
	int nb;
	int i =0;
	while(argv[1][i]!='\0')
	{
	 nb=ft_rebeat(argv[1][i]);
		while (nb)
		{
	 

			write(1,&argv[1][i],1);
			 
			nb--;
		}
		i++;
	
	}
}

