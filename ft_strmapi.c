#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*dest;

	i = 0;
	if (!s || !f)
		return (NULL);
	dest = ft_strdup(s);
	if (!dest)
		return (NULL);
	while (*(s + i))
	{
		*(dest + i) = f(i, *(dest + i));
		i++;
	}
	return (dest);
}
