#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	p(void)
{
	void	*addr_ret;
	char	str[64];

	fflush(stdout);
	gets(str);
	addr_ret = *((void**)(str + 80));
	if (((size_t)addr_ret & 0xb0000000) == 0xb0000000)
	{
		printf("(%p)\n", addr_ret);
		exit(1);
	}
	puts(str);
	strdup(str);
}

int		main()
{
	p();
}
