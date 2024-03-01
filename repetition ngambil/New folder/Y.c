#include <stdio.h>

int main(){
    int m,k,tc;
    scanf("%d",&tc);getchar();
    for(int n=1;n<=tc;n++){
        scanf("%d %d",&k,&m);getchar();
        printf("Case #%d:\n",n);

        for(int i=1;i<=k;i++){
            for(int j=1;j<=m;j++){
                printf("%c",((i==1) || (i==k) || (j==1) || (j==m))?'#':' ');
            }
            puts("");
        }
    }
}