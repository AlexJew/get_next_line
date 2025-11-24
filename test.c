/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajewell <ajewell@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 14:02:38 by ajewell           #+#    #+#             */
/*   Updated: 2025/11/24 17:06:56 by ajewell          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

int	test_append_to_stash(void)
{
	char *buffer = "BUFFER";
	char *stash;
	char *ret;

	stash = malloc(6);
	stash[0] = 'S';
	stash[1] = 'T';
	stash[2] = 'A';
	stash[3] = 'S';
	stash[4] = 'H';
	stash[5] = '\0';
	ret = append_to_stash(stash, buffer);
	printf("%s", ret);
	free(ret);
	return (0);
}

int	test_extract_next_line(void)
{
	char *stash = "This is some text\nThis is a new line";

	printf("%s", extract_next_line(stash));
	return(0);
}

int	main(void)
{
	test_append_to_stash();
	test_extract_next_line();
}
