#include <stdio.h>
void numberprint()
{
	char i;
	
	for(i=65;i<=90;i++)
	{
		printf("%c-%d\n",i,i);
	}

}
int main()
{

	numberprint();
}