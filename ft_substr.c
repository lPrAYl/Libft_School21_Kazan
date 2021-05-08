#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		i;
	char		*dest;

	i = 0;
	if (!s)
		return (NULL);
	if (ft_strlen(s) - start < len)
		len = ft_strlen(s) - start;
	if (ft_strlen(s) < start)
	{
		dest = (char *)malloc(sizeof(char));
		if (!dest)
			return (NULL);
		*(dest + i) = '\0';
	}
	else
	{
		dest = (char *)malloc(sizeof(char) * (len + 1));
		if (dest == NULL)
			return (NULL);
		while (i < len && *(s + start))
			*(dest + i++) = *(s + start++);
		*(dest + i) = '\0';
	}
	return (dest);
}
