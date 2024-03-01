#include <stdio.h>
int main(){
    int tc,type[2],n,temp;
    scanf("%d",&tc);getchar();
    while(tc--){
        scanf("%d",&n);getchar();
        type[0]=0;type[1]=0;
        while(n--){
            scanf("%d",&temp);getchar();
            type[temp%2]+=1;
        }
        printf("Odd group : %d integer(s).\nEven group : %d integer(s).\n",type[1],type[0]);
        puts("");
    }
}