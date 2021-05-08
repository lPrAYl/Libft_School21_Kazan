#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*temp;

	if (!*s1 && !s1)
		return (NULL);
	temp = (char *)malloc(sizeof(*s1) * (ft_strlen(s1) + 1));
	if (!temp)
		return (NULL);
	i = 0;
	while (*(s1 + i))
	{
		*(temp + i) = *(s1 + i);
		i++;
	}
	*(temp + i) = '\0';
	return (temp);
}
