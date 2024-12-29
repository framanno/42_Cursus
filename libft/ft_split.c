#include "libft.h"

int	row_i(const char *s, char d)
{
	int	i;
	int	in_word;

	i = 0;
	in_word = 0;
	while (*s)
	{
		if (*s == d)
			in_word = 0;
		else if (!in_word)
		{
			in_word = 1;
			i++;
		}
		s++;
	}
	return (i);
}

void	col_create(const char *s, char d, char **m)
{
	int			dim;
	int			i;
	const char	*start;

	i = 0;
	while (*s)
	{
		while (*s == d && *s != '\0')
			s++;
		if (*s == '\0')
			break ;
		start = s;
		while (*s != d && *s != '\0')
			s++;
		dim = s - start;
		m[i] = (char *)malloc((dim + 1) * sizeof(char));
		if (m[i] == NULL)
			return ;
		ft_strlcpy(m[i], start, dim + 1);
		i++;
	}
}

char	**ft_split(char const *s, char c)
{
	char	**mat;
	int		row;

	if (s == NULL)
		return (NULL);
	row = row_i(s, c);
	mat = (char **)malloc((row + 1) * sizeof(char *));
	if (mat == NULL)
		return (NULL);
	mat[row] = NULL;
	col_create(s, c, mat);
	return (mat);
}
