#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	if (!s && !*s)
		return (NULL);
	while (*(s + i))
	{
		if (*(s + i) == (unsigned char)c)
			return ((char *)(s + i));
		i++;
	}
	if (*(s + i) == (char)c)
		return ((char *)(s + i));
	return (NULL);
}
