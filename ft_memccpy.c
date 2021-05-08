#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t				i;
	unsigned char		*dst_buffer;
	const unsigned char	*src_buffer;

	i = 0;
	dst_buffer = dst;
	src_buffer = src;
	while (i < n)
	{
		*(dst_buffer + i) = *(src_buffer + i);
		if (*(src_buffer + i) == (unsigned char)c)
			return ((char *)(dst + i + 1));
		i++;
	}
	return (NULL);
}
