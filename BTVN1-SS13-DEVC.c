#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int main(){
	int i;
	int digit_count,numbers_count,special_count;
	char str[30];
	do{
		printf("MENU\n");
		printf("1.Nhap vao chuoi ky tu, In ra do dai chuoi va noi dung chuoi vua nhap\n");
		printf("3.In ra chuoi dao nguoc\n");
		printf("4.In ra so luong chu cai trong chuoi\n");
		printf("5.In ra so luong chu cai trong chuoi\n");
		printf("6.In ra so luong ky tu dac biet trong chuoi\n");
		printf("7.Thoat\n");
		int choice;
		printf("Vui long nhap lua chon:");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				i=0;
				printf("Nhap vao chuoi ky tu:");
				scanf("%s",&str);
				printf("noi dung vua nhap la:%s\n",str);
				while(str[i]!='\0'){
					i++;
				}
				printf("Do dai chuoi %s la:%d",str,i);
				printf("\n");
				break;
			case 3:
				printf("Chuoi dao nguoc la: %s",strrev(str));
				printf("\n");
				break;
			case 4:
				digit_count=0;
				for(i=0;i<strlen(str);i++){
					if(isdigit(str[i])){
						digit_count++;
					}
				} 
				printf("cac chu cai trong chuoi la:%s",digit_count);
				printf("\n");
				break;
			case 5:
				numbers_count=0;
				for(i=0;i<strlen(str);i++){
					if(isalpha(str[i])){
						numbers_count++;
					}
				} 
				printf("cac chu cai trong chuoi la:%s",numbers_count);
				printf("\n");
				break;
			case 6:
				special_count = 0;
                for (i=0;i<strlen(str);i++) {
                    if ( (isalpha(str[i])) || (isdigit(str[i])) ) {
                        printf("");
                    } else special_count++;
                }
                printf("\nso cac ki tu dac biet trong mang la %d",special_count);
				break;
			case 7:
				exit(0);
				break;
			default:
				printf("Vui long lua chon:");
		}
	}while(1==1);
}
