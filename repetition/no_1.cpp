#include<stdio.h>
int game(){
	int p,l,r, min; 
	int count=0;
	scanf("%d %d", &p, &l);
	scanf("%d %d", &r, &min);
	for (int i=0; p>0; i++){
		int templ=l;
		for(int j = 0; templ>0; j++){
			templ-=2*r;
			count++;
		}
		p-=2*r;
	}
//	tujuannya:
//	30x50
//	p 10, 50-10, 40-10, 30-10, 20-10, 10-10;
//  p 20, 50-10, 40-10, 30-10, 20-10, 10-10;
//  p 30, 50-10, 40-10, 30-10, 20-10, 10-10;
	if(count>=min){
		printf("bisa\n");
	}
	else{
		printf("tidak bisa\n");
	}
}



int main(){
	game();
	
	return 0;
}
