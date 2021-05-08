#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	if (!s && !*s)
		return (NULL);
	while (*(s + i))
		i++;
	while (i > -1)
	{
		if (*(s + i) == (unsigned char)c)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}
