#include <stdio.h>
#include <string.h>
int main (){
	int i ;
	char str1[200] = "";
	char str2[100] = "";
	printf("Chuoi ki tu 1 : ");
	fgets(str1 , 200 , stdin);
	str1[strcspn(str1 , "\n")] = '\0';
	printf("Chuoi ki tu 2 : ");
	fgets(str2 , 100 , stdin);
	strcat(str1 , str2);
	printf("Chuoi ki tu sau khi noi la : %s" , str1);
	return 0 ; 	
}
