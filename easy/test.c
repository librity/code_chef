/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TEST.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 20:12:40 by lpaulo-m          #+#    #+#             */
/*   Updated: 2021/01/23 20:18:20 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*
** https://www.codechef.com/problems/TEST
*/

int	main(void)
{
	int answer;

	while (1)
	{
		scanf("%d", &answer);
		if (answer == 42)
			break ;
		printf("%d\n", answer);
	}
	return (0);
}
