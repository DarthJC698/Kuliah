#include <stdio.h>

int main(){
    int tc,n;
    scanf("%d",&tc);getchar();
    while(tc--){
        scanf("%d",&n);getchar();
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                int temp=n-j;
                printf("%c",(((i==1)||(j==1)||(i==n)||(j==n))||((j==i)||(n-j==i-1)))?'*':' ');
                if(j==n)printf("\n");
            }
            
            
        }
        printf("\n");
    }
}