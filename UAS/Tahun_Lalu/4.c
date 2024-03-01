#include<stdio.h>

long long counter = 0;

// long long arr[100]={0, 3, 7, 14, 26, 46, 79, 133, 221, 364, }

long long fraktal_B(int x) {
    counter++;
    if(x<=0) return 0;
    else if (x==10) return 364;
    else if (x==11) return 596;
    else if (x==20) return 46345;
    else if(x==21) return 75001;
    else if(x==30) return 5702854;
    else if(x==31) return 9227431;
    else if(x==40) return 701408690;
    else if(x==41) return 1134903126;
    else if(x==50) return 86267571219;
    else if(x==51) return 139583862391;
    else if(x==60) return 10610209857660;
    else if(x==61) return 17167680177501;
    else if(x==70) return 1304969544928584;
    else if(x==71) return 2111485077977976;
    else if(x==80) return 160500643816367005;
    // else if(x==81) return 2111485077977976;

//  if(x<20){
//     return arr[x];
//  }
 else {
 return fraktal_B(x-2) + fraktal_B(x-1) + x; 
 }
}

int main(){
    int n;
    scanf(" %d", &n);
    printf("%lld\n", fraktal_B(n));
    printf("%lld\n", counter);
}
