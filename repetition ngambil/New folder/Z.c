#include <stdio.h>
int main()
{
    int num, T, total=0;
	scanf("%d", &T);
    for(int i=0;i<T;i++)
    {
        scanf("%d", &num);
		getchar();
       	total += num;
       	if(total>40)
		{
			total-=40;
		}
       	if(total == 30)
		{
	    	total = 10;
		}
		else if (total == 12)
		{
		   	total = 28;
		}
		else if(total == 35)
		{
		   	total = 7;
		}
    }
    printf("%d\n", total%40);
    return 0;
}