#include <stdio.h>

int main(){
    int tc,n;
    scanf("%d",&tc);getchar();
    for(int i=1;i<=tc;i++){  
        scanf("%d",&n);getchar();
        printf("Case #%d: ",i);
        for(int j=0;j<n;j++){
            printf("%c",j+97);
        }
        printf("\n");

    }
}