#include <stdio.h>
#include <stdlib.h>

/*
** This level's program seems to revolve arround classes
** C++ might be a better choice for this one, I will see
*/
int		main(int ac, char**av)
{
	void	*ptr;

	if (ac < 2)
		exit(1);
	ptr = malloc(108); // _Znwj@plt seems to be c++ function new()
	return 0;
}
