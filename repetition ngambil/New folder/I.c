#include <stdio.h>

int main(){
    long long int tc;
    long long int temp,jojo,lili,bibi;
    long long int max=0;
    scanf("%lld",&tc);getchar();
    scanf("%lld %lld %lld",&jojo,&lili,&bibi);getchar();
    for(int j=0;j<tc;j++){
        scanf("%lld",&temp);getchar();
        max+=temp;
    }
    max+=jojo+lili+bibi;
    printf("Jojo%slolos\n",(jojo>=(max/(tc+3)))?" ":" tidak ");
    printf("Lili%slolos\n",(lili>=(max/(tc+3)))?" ":" tidak ");
    printf("Bibi%slolos\n",(bibi>=(max/(tc+3)))?" ":" tidak ");


}