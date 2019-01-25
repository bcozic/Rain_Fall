#include <libc.h>
#include <unistd.h>
#include <stdio.h>

int main(int ac, char **av)
{
	int nb;
	char *str[2];

	nb = atoi(av[1]);
	if (nb == 423)
	{
		str[0] = strdup("/bin/sh");
		str[1] = NULL;
		execv("/bin/sh", str);
	}
	else
	{
		fwrite("No !\n", 1, 5, stderr);
	}
	return (0);
}
