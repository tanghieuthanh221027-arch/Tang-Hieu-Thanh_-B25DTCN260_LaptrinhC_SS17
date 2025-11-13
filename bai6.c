#include <stdio.h>
#include <string.h>
int main (){
	char str[200] ;
	char longestWord[100] = "";
	int maxLength = 0 ;
	printf("Nhap chuoi ki tu : ");
	fgets(str , 200 , stdin);
	str[strcspn(str , "\n")] = '\0';
	int i = 0 , start = 0 , len = strlen(str) ;
	while( i <= len ){
		if(str[i] == ' ' || str[i] == '\0'){
			int wordLength = i - start ;
			if(wordLength > maxLength){
				maxLength = wordLength ;
				strncpy(longestWord , &str[start] , wordLength);
				longestWord[wordLength] = '\0' ;
			}
			start =  i + 1;
		}
		i++;
	}
	printf("Tu dai nhat la %s voi do dai la %d ", longestWord , maxLength);
	return 0 ; 
}
