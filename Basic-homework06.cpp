#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int y;
	printf("��J�@�Ӧ褸�~�ơG");
	scanf("%d" , &y);
	if(y % 400 == 0 )
			printf("%d�~�O�|�~\n",y);  
	else if(y % 100 == 0)
			printf("%d�~�O���~\n",y);
	else if(y % 4 == 0)
			printf("%d�~�O�|�~\n",y);
	else
			printf("%d�~�O���~\n",y);
    system("pause");
    return 0; 
}
