#include <stdio.h>
#include "fillit.h"

int main()
{
	int i = 0;

	while (tetris_map[i])
	{
		printf("%d = %d; path = %p\n", i, tetris_map[i], &tetris_map[i]);
		i++;
	}

	return (0);
}
