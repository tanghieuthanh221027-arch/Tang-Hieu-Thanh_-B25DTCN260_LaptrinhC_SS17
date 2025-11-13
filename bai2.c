#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main (){
	int choice ;
	char str [] = "Tang Hieu Thanh";
	printf("Chuoi ki tu : %s " , str);
	do {
		printf("\n+------------------------------Menu------------------------------+\n");
		printf("|1. In ra chuoi voi toan bo ki tu chuyen thanh chu in hoa        |\n");
		printf("|2. In ra chuoi voi toan bo ki tu chuyen thanh chu in thuong     |\n");
		printf("|3. Dung chuong trinh                                            |\n");
		printf("+----------------------------------------------------------------+\n");
		printf("Moi ban nhap lua chon : ");
		scanf("%d", &choice);
		int i ;
		switch (choice) {
			case 1 : {
				for(i = 0 ; i < strlen(str) ; i++){
					str[i] = tolower(str[i]); // ham trong ctype.h de chuyen chuoi ki tu chu thanh chu thuong ! 
				}
				printf("Chuoi ki tu viet thuong la : %s" , str);
				break;
			}
			case 2 : {
				for(i = 0 ; i < strlen(str) ; i++){
					str[i] = toupper(str[i]); // ham trong ctype.h de chuyen chuoi ki tu chu thanh chu in hoa !
				}
				printf("Chuoi ki tu viet hoa la : %s" , str);
				break;
			}
			case 3 : {
				printf("End!");
				break;
			}
			default :
				printf("Lua chon khong hop le !");
				break;
		}
	}while (choice != 3);
	return 0 ;
}
