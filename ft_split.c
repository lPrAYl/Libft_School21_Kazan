#include "libft.h"

static unsigned int	ft_count_substr(char const *s, char c)
{
	unsigned int	i;
	unsigned int	count_substr;

	if (!s)
		return (0);
	count_substr = 0;
	i = 0;
	while (*(s + i))
	{
		while (*(s + i) == c && *(s + i))
			i++;
		if (*(s + i) != c && *(s + i))
			count_substr++;
		while (*(s + i) != c && *(s + i))
			i++;
	}
	return (count_substr);
}

static char	**ft_memory_error(char	**arr)
{
	unsigned int	i;

	i = 0;
	while (arr[i])
	{
		free(arr[i]);
		i++;
	}
	free(arr);
	return (NULL);
}

static int	ft_len_substr(const char *s, unsigned int *i, char c)
{
	unsigned int	len;

	len = 0;
	while (*(s + *i) != c && *(s + *i))
	{
		(*i)++;
		len++;
	}
	return (len);
}

static void	ft_fill_arr(char **arr_str, const char *s, char c)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	len;

	i = 0;
	j = 0;
	while (*(s + i))
	{
		while (*(s + i) == c && *(s + i))
			i++;
		while (*(s + i) != c && *(s + i))
		{
			len = ft_len_substr(s, &i, c);
			arr_str[j] = malloc(sizeof(char) * (len + 1));
			if (!arr_str[j])
			{
				ft_memory_error(arr_str);
				return ;
			}
			ft_strlcpy(arr_str[j], s + i - len, len + 1);
			j++;
		}
	}
	arr_str[j] = NULL;
}

char	**ft_split(char const *s, char c)
{
	char			**arr_str;
	unsigned int	count_substr;

	if (!s)
		return (0);
	count_substr = ft_count_substr(s, c);
	arr_str = malloc(sizeof(char *) * (count_substr + 1));
	if (!arr_str)
		return (NULL);
	ft_fill_arr(arr_str, s, c);
	return (arr_str);
}
