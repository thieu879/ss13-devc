#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main() 
{
    char str[30];
    int i,choice;
    char find_char[1],ex_char[1],delete_char[1],find_count;
    do {
        printf("\n1.nhap vao chuoi ki tu\n");
        printf("2.in ra do dai va chuoi vua nhap\n");
        printf("3.nhap 1 ki tu,dem so lan ki tu do xuat hien\n");
        printf("4.nhap vao 2 ki tu, thay the cac ki tu thu 2 trong chuoi thanh ki tu thu nhat\n");
        printf("5.nhap vao 1 ki tu, xoa cac ki tu do trong chuoi\n");
        printf("6.thoat\n");
        printf("nhap lua chon cua ban\n");
        scanf("%d" ,&choice);
        switch(choice) {
            case 1:
                printf("nhap vao chuoi ki tu: ");
                scanf("%s", &str);
                printf("\n");
                break;
            case 2:
                printf("chuoi vua nhap la: ");
                puts(str);
                printf("\n");
                break;
            case 3:
                find_count = 0;
                printf("nhap 1 ki tu:");
                scanf("%s", &find_char);
                for (i=0;i<strlen(str);i++) {
                    if (str[i] == find_char[0])
                        find_count++;
                }
                printf("\nso cac ki tu giong %c la %d",find_char[0],find_count);
                break;
            case 4:
                printf("\nnhap 2 ki tu:");
                scanf("%s%s",&ex_char,&find_char);
                for (i=0;i<strlen(str);i++) {
                    if (str[i] == find_char[0])
                        str[i] = ex_char[0];
                }
                puts(str);
                printf("\n");
                break;
            case 5:
                printf("nhap ki tu can xoa:");
                scanf("%s", &delete_char);
                for (i=0;i<strlen(str);i++) {
                    if (str[i] == delete_char[0])
                        str[i] = str[i+1];
                }
                puts(str);
                printf("\n");
                break;
            case 6:
                printf("thoat\n");
                break;
            default:
                printf("khong hop le\n");
        }
    } while (1==1);
}
