
#include <stdio.h>
#include <limits.h>

int main(void) {

	//char					1byte
	char ch = 'a';
	printf("char=\n");
	printf("value: %c\n",ch);
	printf("max: %d\n", CHAR_MAX);
	printf("min: %d\n", CHAR_MIN);



	//signed short int		2byte
	signed short int sshort = 1234;
	printf("\nsigned short int:\n");
	printf("value: %d\n",sshort);
	printf("MAX: %d\n",SHRT_MAX);
	printf("MIN: %d\n",SHRT_MIN);


	//unsigned short int	2byte
	unsigned short int ushort = 1234u;
	printf("\nunsigned int:\n");
	printf("value: %d\n", ushort);
	printf("Max: %d\n", SHRT_MAX);


	//signed int			4byte
	signed int sint = 12345;
	printf("\nsigned int:\n");
	printf("value: %d\n", sint);
	printf("Max: %d\n", INT_MAX);

	//unsigned int			4byte 
	unsigned int uint = 12345u;
	printf("\nunsigned int:\n");
	printf("value: %d\n", uint);
	printf("Max: %d\n", UINT_MAX);

	//signed long int		4byte
	signed long int LONG = 123456;
	printf("\nsigned int:\n");
	printf("value: %d\n", LONG);
	printf("Max: %d\n", LONG_MAX);

	//unsigned long int		4byte
	unsigned long int ulong = 123456u;
	printf("\nunsigned int:\n");
	printf("value: %d\n", ulong);
	printf("Max: %d\n", ULONG_MAX);


	//float 
	float f = 123.456f;
	printf("\nfloat:\n");
	printf("value: %.1f\n", f);
	//printf("Max: %d\n", FLT_MAX);
	//printf("Min: %d\n", FLT_MIN);


	// double
	double d = 123456.7890123f;
	printf("\ndouble:\n");
	printf("value: %.3f\n", d);




}