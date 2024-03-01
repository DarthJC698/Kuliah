#include <stdio.h>
#include <stdlib.h>

int main(){
    int tc;
    scanf("%d",&tc);
    for(int j=1;j<=tc;j++){
    int n,max=0,temp;
    scanf("%d",&n);getchar();
    int* dict=calloc(1001,sizeof(int));
    int* nums=(int*)calloc(n,sizeof(int));
    for(int i=0;i<n;i++){
        scanf("%d",&temp);getchar();
        dict[temp]+=1;
        max=(temp>max)?temp:max;
    }
    printf("Case #%d: %d\n",j,dict[max]);}
}