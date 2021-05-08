#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!haystack && !needle)
		return (NULL);
	if (!*needle || !needle)
		return ((char *)haystack);
	while (*(haystack + i) && i < len)
	{
		j = 0;
		while (*(haystack + i + j) == *(needle + j) && (i + j) < len \
							&& *(needle + j) && *(haystack + i + j))
			j++;
		if (j == ft_strlen(needle))
			return ((char *)haystack + i);
		i++;
	}
	return (NULL);
}
