#include<stdio.h>
#include <string.h>
void logic(char sentence[], char index[], char processed[]){
	int keberapa = 0;
	int status = 0;
	for (int i = 0; i<strlen(sentence);i++){
		status=0;
		for (int j = 0; j<strlen(index); j++){
			if (sentence[i]==index[j]){
				status=1;
				continue;
			}
		}
		if (status){
			continue;
		}
		else {
			processed[keberapa]=sentence[i];
			keberapa++;	
		}
		
		
	}
}

int  game(){
	char sentence[1001], index[1001], processed[1001];
	printf("Kalimat: \n");
	scanf(" %[^\n]", sentence);
	printf("Kalimat yang ga boleh: \n");
	scanf(" %[^\n]", index);
	logic(sentence, index, processed);
	printf("%s\n", processed);
}



int main(){
	game();
	return 0;
}
