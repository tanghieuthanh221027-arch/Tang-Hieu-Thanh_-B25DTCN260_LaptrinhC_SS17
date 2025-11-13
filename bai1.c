#include <stdio.h>
#include <string.h>
int main (){
	char str[100] ;
	printf("Nhap chuoi ki tu : ");
	fgets(str , 100 , stdin);
	str[strcspn(str , "\n")] = '\0';
	int left = 0 ;
	int  right = strlen(str) - 1 ;
	int isPalindrome = 1 ;
	while(left < right){
		if(str[left] != str[right]) {
			isPalindrome = 0 ;
			break ;
		}
		left++ ;
		right--;
	}
	if(isPalindrome){
		printf("La Palindrome !");
	}else {
		printf("Khong la Palindrome !");
	}
	return 0 ; 
}
