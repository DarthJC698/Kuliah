// Alexander Ricky B. Alphabet Convert
// 6 Dec 23

#include<stdio.h>
#include<string.h>

int main(){
	FILE *fp = fopen("testdata.in", "r");  
	int testCase,n;
	char s[101],x,y;
	fscanf(fp, "%d\n",&testCase); 
	
	for(int i=0; i<testCase; i++){  
		fscanf(fp, "%s\n",s);
		int length=strlen(s);
		fscanf(fp, "%d\n",&n);  
		
		int first[101]={0}, second[101]={0}, c[101]={0}, counter=0;
		
		for(int j=0; j<n; j++){
			fscanf(fp, "%c %c\n",&x,&y);  
			if(first[x-'A']==0){
				second[counter]=x;
				c[counter]=y;
				counter++;
				first[x-'A']=1;
			}
		}
		for(int j=0; j<counter; j++){
			for(int k=0; k<length; k++){
				if(c[k]==second[j]){
					c[k]=c[j];
				}
			}
		}
		int temp[101]={0};
		for(int j=0; j<length; j++){
			++temp[c[j]-'A'];
		}
			for(int j=0; j<26; j++){
				if(temp[j]>0){
					printf("%c %d\n",j+'A',temp[j]); 
				}
			}
	}
	fclose(fp);
	return 0;
}
