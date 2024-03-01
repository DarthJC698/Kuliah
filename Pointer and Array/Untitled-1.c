#include <stdio.h>
#include <string.h>

int main(){

    int T;
    char IP[200];    
    int flag = 0;
    scanf("%d", &T);

    for (int i = 0; i < T; i++){
        scanf("%s", IP);

        for (int j = 0; j < strlen(IP); j++){
            if(IP[j] >= '0' && IP[j] <='9')      // pasti angka
            {
                if(!(IP[j+1] == 46))           // angka terus titik kalo nggak break
                {
                    flag = 0;
                    break;
                }
                else                          // angka titik 
                {   
                    flag = 1;
                }
            }
            else if(IP[j] == 46)
            {
                if(!(IP[j+1] >= 48 && IP[j+1] <=57))
                {
                    flag = 0;
                    break;
                }
                else 
                {
                    flag = 1;
                }
            }
        }

        if(flag == 0)
        {
            printf("Case #%d: NO\n", i+1);
        }  
        else if(flag == 1)
        {
            printf("Case #%d: YES\n", i+1);
        }

    }

    return 0;
}