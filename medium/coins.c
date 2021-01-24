/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   coins.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 20:12:40 by lpaulo-m          #+#    #+#             */
/*   Updated: 2021/01/23 22:41:29 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*
** https://www.codechef.com/problems/COINS
*/

int	main(void)
{
	long long int gold_coins;
	long long int bank_conversion;
	long long int best_conversion;

	while(scanf("%lld", &gold_coins) != EOF)
	{
		bank_conversion = gold_coins/2 + gold_coins/3 + gold_coins/4;
		best_conversion = bank_conversion > gold_coins ? bank_conversion : gold_coins;
		printf("%lld\n", best_conversion);
	}
	return (0);
}
