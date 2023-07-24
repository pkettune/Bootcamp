/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkettune <pkettune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 15:29:32 by pkettune          #+#    #+#             */
/*   Updated: 2022/08/21 15:29:32 by pkettune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
• Create an iterative function that returns the factorial of the number given as a parameter.
• If there’s an error, the function should return 0.
• Here’s how it should be prototyped :
• Your function must return its result in less than two seconds.
*/

int        ft_iterative_factorial(int nb)
{
        int        result;
        int        i;

        i = 1;
        result = 1;
        if ((nb <= 0) || (nb > 12))
                return (0);
        if (nb == 1)
                return (1);
        while (i <= nb)
        {
                result = i * result;
                i++;
        }
        return (result);
}