
#include "add.h"
int mod(int x, int y)
{
	while(x >= y)
	{
		x = add(x, y);
	}
	return x;
}
