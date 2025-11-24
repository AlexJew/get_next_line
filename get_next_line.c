/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajewell <ajewell@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 11:20:32 by ajewell           #+#    #+#             */
/*   Updated: 2025/11/24 17:25:56 by ajewell          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *get_next_line(int fd)
{
	char	*buffer;
	static char	*stash;
	int		bytes_read;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buffer = malloc(BUFFER_SIZE);
	if (!buffer)
		return (free(buffer), NULL);
	bytes_read = (int) read(fd, buffer, BUFFER_SIZE);
	if (!bytes_read)
		return (free(buffer), NULL);
	stash = malloc(1);
	if (!stash)
		return (free(stash), NULL);
	stash[0] = '\0';
	stash = append_to_stash(stash, buffer);
	while (bytes_read != 0 & extract_next_line != NULL)
	{
		bytes_read = (int) read(fd, buffer, BUFFER_SIZE);
		stash = append_to_stash(stash, buffer);
	}
	if (bytes_read != 0)
		return (free(buffer), extract_next_line_and_clean_stash(stash));
	else
		return(free(buffer), free(stash), extract_next_line_and_clean_stash(stash));
}

char	*append_to_stash(char *stash_old, char *buffer)
{
	char	*stash_new;

	stash_new = ft_strjoin(stash_old, buffer);
	free(stash_old);
	return (stash_new);
}

char *extract_next_line(char *stash)
{
	// Objective of this code is to extract the next line by looking for the
	int	max_length;

	
}

char	*extract_next_line_and_clean_stash(char *stash)
{
	char
}
