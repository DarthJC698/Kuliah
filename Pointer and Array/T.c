#include<stdio.h>
#include<string.h>

int main(){
    int testcase;
    scanf(" %d", &testcase);

    for (int i = 0; i < testcase; i++)
    {
        char string[1005];
        char angka[1005];
        scanf(" %[^\n]", string); getchar();

        for (int j = 0; 
        j < strlen(string); j++)
        {
            if(string[j]>='A'&&string[j]<='D'){

                angka[j]=string[j]-'A';
            string[j]='A';
            
            }
            else if(string[j]>='E'&&string[j]<='H'){

                angka[j]=string[j]-'E';
            string[j]='E';
            
            }
            else if(string[j]>='I'&&string[j]<='N'){

                angka[j]=string[j]-'I';
            string[j]='I';

            }
            else if(string[j]>='O'&&string[j]<='T'){

                            angka[j]=string[j]-'O';
            string[j]='O'; 

            }
            else{

                            angka[j]=string[j]-'U';
            string[j]='U';

            }
        }
        
        printf("Case #%d:\n", i+1);
        printf("%s\n", string);
        for (int j = 0; 
        j < strlen(string); j++)
        {
            printf("%d", angka[j]);  
        }
        printf("\n");
        
    }
    
}