#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int y;
	printf("輸入一個西元年數：");
	scanf("%d" , &y);
	if(y % 400 == 0 )
			printf("%d年是閏年\n",y);  
	else if(y % 100 == 0)
			printf("%d年是平年\n",y);
	else if(y % 4 == 0)
			printf("%d年是閏年\n",y);
	else
			printf("%d年是平年\n",y);
    system("pause");
    return 0; 
}
