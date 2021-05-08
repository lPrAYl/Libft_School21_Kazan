#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		i;
	size_t		start;
	size_t		finish;
	char		*dest;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	start = 0;
	finish = ft_strlen(s1);
	while (ft_strchr(set, *(s1 + start)) && *(s1 + start))
		start++;
	while (ft_strchr(set, *(s1 + finish - 1)) && finish > start)
		finish--;
	dest = (char *)malloc(sizeof(*s1) * (finish - start + 1));
	if (!dest)
		return (NULL);
	i = 0;
	while (start < finish)
		*(dest + i++) = *(s1 + start++);
	*(dest + i) = '\0';
	return (dest);
}
