#include<stdio.h>

void game(){
	int amin, bmin, cmin;
	int budgeta, budgetb, budgetc;
	int resa, resb, resc;
	int statusa=1, statusb=1, statusc=1;
	printf("Minimal a, b, c: \n");
	scanf("%d %d %d", &amin, &bmin,&cmin);
	printf("Budget a, b, c: \n");
	scanf("%d %d %d", &budgeta, &budgetb, &budgetc);
	int answer;

	
	resa=budgeta/amin;
	int tempa=resa;
	
	
	if(resa*amin!=budgeta){
		resa++;
	}
	resb=budgetb/bmin;
	int tempb=resb;
	if(resb*bmin!=budgetb){
		resb++;
	}
	resc=budgetc/cmin;
	int tempc=resc;
	if(resc*cmin!=budgetc){
		resc++;
	}
	if(resa>=resb&&resa>=resc){
		answer=resa;
		statusa=1; statusb=1; statusc=1;
		statusa=0;
	}
	else if(resb>=resa&&resb>=resc){
		answer=resb;
		statusa=1; statusb=1; statusc=1;
		statusb=0;
	}
	else if(resc>=resa&&resc>=resb){
		answer=resc;
		statusa=1; statusb=1; statusc=1;
		statusc=0;
	}
	printf("bisa buat kue sebanyak ini: %d, tapi butuh ini[dari a, b, c]: ", answer);
	if(statusa){
		printf("%d ", ((answer-tempa)*amin)-(budgeta%amin));
	}
	else{
		printf("%d ", ((answer-tempa)*amin)-(tempa%amin));
	}
	if(statusb){
		printf("%d ", ((answer-tempb)*bmin)-(budgetb%bmin));
	}
	else{
		printf("%d ", ((answer-tempa)*amin)-(tempb%bmin));
	}
	if(statusc){
		printf("%d ", ((answer-tempc)*cmin)-(budgetc%cmin));
	}
	else{
		printf("%d ", ((answer-tempa)*amin)-(tempc%cmin)); 
	}
	printf("\n");
	
}

int main(){
	game();
	return 0;
}
