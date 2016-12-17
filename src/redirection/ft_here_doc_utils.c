#include "minishell.h"

int	ft_read_here_doc(int fd, char *s)
{
	char	line[SIZE];
	char	*list[SIZE];
	int		i;
	ssize_t	retval;

	ft_memset(line, 0, SIZE);
	ft_memset(list, 0, SIZE * sizeof(*list));
	i = 0;
	retval = 0;
	while ((retval = read(1, line, SIZE)) > 0)
	{
		if (!ft_strncmp(line, s, ft_strlen(line) - 1))
			break ;
		else
			list[i++] = ft_strdup(line);
		ft_memset(line, 0, SIZE);
	}
	i = -1;
	while (list[++i])
		write(fd, list[i], ft_strlen(list[i]));
	return (retval);
}