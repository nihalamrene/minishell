
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*str;

	if (size && count >= SIZE_MAX / size)
		return (NULL);
	str = malloc(count * size);
	if (!str)
		return (0);
	ft_bzero(str, count * size);
	return (str);
}
