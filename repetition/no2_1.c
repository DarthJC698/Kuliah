#include<stdio.h>
int game(){
	int sum, n;
	//input
	scanf("%d %d", &sum, &n);
	int array[sum+1];
	// biar ga error
	for (int i =0; i<sum+1; i++){
		array[i]=0;
	}
	printf("Angka angkanya: \n");
	for (int i =0; i<sum; i++){
		scanf("%d", &array[i]);
	}
	
	int index[sum+1];
	
	// biar ga error
	for (int i =0; i<sum+1; i++){
		index[i]=0;
	}
	
	//untuk ngecek mana aja yang -1, didata
	int a=0;
	for (int i = 0; i<sizeof(array);i++ ){
		if (array[i]==-1){
			index[a]=i;
			a++;
		}
	}
	//cuma buat ngecek mana yang meledak
	for (int i =0; i<sum; i++){
		printf("%d ", index[i]);
	}
	printf("\n");
	
	//logic
	for (int i = 0; index[i]!=0; i++){
		int temp=index[i];
		int res=0;
		int bagi=0;
		for(int j=temp+n; j>=temp-n;j--){
			if (array[j]==-1){
				continue;
			}
			res+=array[j];
			bagi++;
		}
		array[index[i]]=res/bagi;
	}
	printf("Sudah diproses: \n");
	for (int i =0; i<sum; i++){
		printf("%d ", array[i]);
	}
	
}



int main(){
	game();
	return 0;
}
