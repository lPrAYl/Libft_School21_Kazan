#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	buffer;
	size_t	dst_size;
	size_t	src_size;

	dst_size = ft_strlen(dst);
	src_size = ft_strlen(src);
	i = 0;
	if (dstsize <= dst_size)
		buffer = src_size + dstsize;
	else
	{
		buffer = src_size + dst_size;
		while (*(src + i) && dst_size < dstsize - 1)
		{
			*(dst + dst_size) = *(src + i);
			i++;
			dst_size++;
		}
		*(dst + dst_size) = '\0';
	}	
	return (buffer);
}
