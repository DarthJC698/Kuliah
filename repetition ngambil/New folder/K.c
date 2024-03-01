#include <stdio.h>

int main(){
    int tc,len;
    scanf("%d",&tc);getchar();
    for(int i=1;i<=tc;i++){
        scanf("%d",&len);getchar();
        printf("Case #%d:\n",i);
        for(int j=1;j<=len;j++){
            for(int k=1;k<=len;k++){
                printf("%c",((len-j)<k)?((k%2!=(j%2==0))?'*':'#'):' ');
            }
            puts("");
        }

    }
}
