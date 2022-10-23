#include <stdlib.h>
#include <stdio.h>

int main()
{
	for(char a = 'A'; a <= 'Z'; a++){
		printf("caractère = %c , code = %d, hexa = %x\n", a, a, a);
	}

	for (int a = '1'; a <= '9'; ++a)
	{
		printf("caractère = %c , code = %d, hexa = %x\n", a, a, a);
	}
}