#include <stdio.h>
/*
Able to print the string by print("%s", p)
If I move the pointer, it will print the string after its address
*/

char *a, *b;

char *InputString()
{
	static char tmp[20];
	printf("Please input the string\n");
	gets(tmp);
	printf("address of tmp is %p\n", tmp); //addess of tmp is address of tmp[0]
	printf("address of tmp is %p\n", &tmp[0]);
	return tmp;
}

char *CheckPrintAndAddressString(char p[20])
{
	printf("Revert string %s\n", p);
	printf("Revert string %s\n", &p);
	for (int i = 0; i < 10; i++)
	{
		printf("address of p[%d] is %p\n", i, &p);
		printf("address of p[%d] is %p\n", i, p);
		p++;
	}
	printf("Revert string %s\n", p);
}

void main()
{
	a = InputString();
	b = CheckPrintAndAddressString(a);
}

This is the result:

Please input the string
Thao Nguyen
address of tmp is 00CEA138
address of tmp is 00CEA138
Revert string Thao Nguyen
Revert string 8í╬
address of p[0] is 00C8FC00
address of p[0] is 00CEA138
address of p[1] is 00C8FC00
address of p[1] is 00CEA139
address of p[2] is 00C8FC00
address of p[2] is 00CEA13A
address of p[3] is 00C8FC00
address of p[3] is 00CEA13B
address of p[4] is 00C8FC00
address of p[4] is 00CEA13C
address of p[5] is 00C8FC00
address of p[5] is 00CEA13D
address of p[6] is 00C8FC00
address of p[6] is 00CEA13E
address of p[7] is 00C8FC00
address of p[7] is 00CEA13F
address of p[8] is 00C8FC00
address of p[8] is 00CEA140
address of p[9] is 00C8FC00
address of p[9] is 00CEA141
Revert string n