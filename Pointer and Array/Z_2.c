#include<stdio.h>

int logic(int length, int breath){
int tempbreath = breath;
char hallway[length+1];
int secondfloor=0;
scanf(" %s", hallway);
if (length==1){
    return 1;
}
for (int i = 0; hallway[i]!='\0';i++ ){
    if (hallway[i]=='1'){
        tempbreath = breath;
        if(secondfloor){
            // printf("turun\n");
            secondfloor=0;
        }
        else{
            // printf("naik\n");
            secondfloor=1;
        }
        continue;
    }
    else if(secondfloor){
            continue;
        }
    
    tempbreath--;
    if(tempbreath < 1)
    {
    return 0;
    }
    
}
return 1;
}

int main(){
    int t;
    scanf(" %d", &t);
    for (int j = 0; j < t; j++)
    {
        int length, breath;
        scanf(" %d %d",&length, &breath );
        int res = logic(length, breath);
        if (res){
            printf("Case #%d: Alive\n", j+1);
        }
        else{
            printf("Case #%d: Dead\n", j+1);
        }
    }
    
return 0;
}