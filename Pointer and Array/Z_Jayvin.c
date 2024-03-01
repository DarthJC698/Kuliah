#include <stdio.h>
int main() {
    int breath, stairs;
    char step[10001];
    int count1, countlast, countfirst, flag;
    int tc;

    scanf("%d", &tc);

    for (int i = 1; i <= tc; i++) {
        count1 = 0;
        flag = 0;
		countlast=0;
		countfirst=0;
		
        scanf("%d %d", &stairs, &breath);
        getchar(); 

        scanf(" %[^\n]", step); 
	
        for(int j = 0;j<stairs;j++ ){
        	if(step[j]=='1'){
			
        	count1++;}
		}
		
        if(count1>1){
			for(int j=stairs-1;j>=0;j--){
        		if(step[j]=='1'){
        			break;
				}
				countlast++;
			}    	
        	for(int j=0;j<stairs;j++){
        		if(step[j]=='1'){
        			break;
				}
				countfirst++;
			}
        	
		} else{
			if(breath>=stairs){
				flag=0;				
			}
			if(breath<stairs){
				flag=1;
				
			}	
		}
		if(countfirst<breath && countlast<breath && count1>1){
			flag=0;
		}else if(count1>1){
			flag=1;
		}
	
        printf("Case #%d: ", i);
        if (flag == 0) {
            printf("Alive\n");
        } else {
            printf("Dead\n");
        }
//		printf("%d %d\n",countfirst, countlast);
		}
    

    return 0;
}
