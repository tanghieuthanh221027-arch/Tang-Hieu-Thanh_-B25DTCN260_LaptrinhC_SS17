#include <stdio.h>
#include <string.h>
int main (){
	char str[100] = "" ;
	printf("Nhap chuoi ki tu : ");
	fgets(str , 100 , stdin);
	str[strcspn(str , "\n")] = '\0';
	char x ;
	printf("Nhap ki tu muon xoa :");
	scanf("%c" , &x);
	int i , j , len = strlen(str);
	for(i = 0 ; i < len ; i++){
		if(str[i] == x){
			for(j = i ; j < len ; j++){
			str[j] = str[j + 1];
			}
		len--;
		i--;
		}
	}
	printf("Chuoi ki tu sau khi xoa ki tu la : %s" , str);
	return 0 ;
}
