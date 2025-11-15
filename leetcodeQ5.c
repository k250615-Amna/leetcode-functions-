#include <stdio.h>
#include <string.h>
void reverseString(char *s, int sSize);

void reverseString(char *s, int sSize){
	int i;
	char temp;
	for(i=0;i<sSize/2;i++){
		temp=s[i];
		s[i]=s[sSize-i-1];
		s[sSize-i-1]=temp;
	}
	for(i=0;i<sSize;i++){
		printf("%c", s[i]);
	}
}
int main(){

	int sSize,i;
	char s[100001];
	printf("enter number of characters you want: ");
	scanf("%d", &sSize);
	if(sSize <1 || sSize >100000){
		printf("error");
		return;
	}
    for (i = 0; i < sSize; i++) {
    	printf("Enter character %d: ", i+1);
        scanf(" %c", &s[i]); 
		if(s[i]<32 || s[i]> 126){
			printf("Invalid character");
			return;
		} 
    }
    reverseString(s,sSize);
}


