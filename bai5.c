#include <stdio.h>
#include <string.h>
int main (){
	char str1 [100] = "";
	char str2 [100] = "";
	printf("Nhap chuoi ki tu 1 : ");
	fgets(str1 , 100 , stdin);
	str1[strcspn(str1 , "\n")] = '\0';
	printf("Nhap chuoi ki tu 2 : ");
	fgets(str2 , 100 , stdin);
	str2[strcspn(str2 , "\n")] = '\0';
	if(sizeof(str1) != sizeof(str2)){
		printf("2 ki tu khong giong nhau!");
	}
	int i ;
	for (i = 0 ; str1[i] != '\0'; i++){
		if(toupper(str1[i]) != toupper(str2[i])){
			printf("2 ki tu khong giong nhau!");
			return 0 ;
		}
	}
	printf("2 ki tu giong nhau!");
	return 0 ;
}
