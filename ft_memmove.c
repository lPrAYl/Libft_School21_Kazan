#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t					i;
	unsigned char			*dst_buffer;
	const unsigned char		*src_buffer;

	i = 0;
	dst_buffer = dst;
	src_buffer = src;
	if (dst_buffer < src_buffer)
	{
		while (i < len)
		{
			*(dst_buffer + i) = *(src_buffer + i);
			i++;
		}
	}
	if (dst_buffer > src_buffer)
	{
		while (len > 0)
		{
			*(dst_buffer + len - 1) = *(src_buffer + len - 1);
			len--;
		}
	}
	return (dst_buffer);
}
