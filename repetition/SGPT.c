#include <stdio.h>

int simulation(int testcase){
int number1, number2;
scanf("%d %d", &number1, &number2);
int res=0;
int keberapa=1;
while(number1>0 || number2>0){
int temp = (number1%10 + number2%10)%10;
res += keberapa*temp;
number1/=10;
number2/=10;
keberapa*=10;
}
printf("Case #%d: %d\n", testcase, res);
}

int main(){
    int n;
    scanf("%d", &n);
    for(int i = 0; i<n;i++){
    simulation(i+1);

    }

    return 0;
}