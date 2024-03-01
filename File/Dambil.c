#include <stdio.h>
#include <string.h>

int main(){
    int n = 0;
    FILE *ptr;
    int size = 0;
    ptr = fopen("testdata.in", "r");
    fscanf(ptr, "%d\n", &n);
    while (size < n)
    {
        int changed[26]={0};
        int count[26]={0};
        char s[120];
        fscanf(ptr," %[^\n]\n",s);
        printf("%s\n", s);
        int change;
        fscanf(ptr,"%d\n",&change);
        while(change--){
            char x,y;
            fscanf(ptr,"%c %c\n",&x,&y);
            if(changed[x-'A'])continue;
            changed[x-'A']=1;

            for(int i=0;i<strlen(s);i++){
                 if(s[i]==x){
                    s[i]=y;
                 }
            }
            
        }
        for(int i=0;i<strlen(s);i++){
            count[s[i]-'A']+=1;
        }
        for(int i=0;i<26;i++){
            if(count[i])printf("%c %d\n",i+'A',count[i]);
        }
        size++;
    }

}