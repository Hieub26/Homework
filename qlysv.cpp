#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
struct SinhVien{
	char tenHs[50];
	char soThich[50],queQuan[50];
	int namSinh; 
};
struct SinhVien sv[100];
void nhapsv(struct SinhVien[], int &n){
	printf("So luong sinh vien can nhap: ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		printf("Sinh vien thu %d\n",i);
		printf("Nhap ten sinh vien: ");
		fflush(stdin);
		gets(sv[i].tenHs);
		printf("\nNhap nam sinh: ");
		scanf("%d",&sv[i].namSinh);
		printf("\nNhap que quan: ");
		fflush(stdin);
		gets(sv[i].queQuan);
		printf("\nNhap so thich: ");
		fflush(stdin);
		gets(sv[i].soThich);
	}
}
void xuatsv(struct SinhVien[], int n){
	printf("STT\tTen\t\tQue Quan\tTuoi\tSo Thich\n");
	for(int i=1;i<=n;i++){
		printf("%d \t %s \t %s \t %d \t %s\n",i,sv[i].tenHs,sv[i].queQuan,2022-sv[i].namSinh,sv[i].soThich);
	}
}
void locsvtheosoThich(struct SinhVien[], int n){
	char st[50];
	printf("Nhap so thich can loc: ");
	fflush(stdin);
	gets(st);
	bool check = false;
	for(int i=1;i<=n;i++){
		if(stricmp(sv[i].soThich,st)==0){
			check = true;
			printf("STT\tTen\t\tQue Quan\tTuoi\tSo Thich\n");
			printf("%d \t %s \t %s \t %d \t %s\n",i,sv[i].tenHs,sv[i].queQuan,2022-sv[i].namSinh,sv[i].soThich);
		}
	}
		if(check==false){
			printf("Khong co sinh vien nao co so thich nay");
		}
}
void locsvtheoTuoi(struct SinhVien[],int n){
	int min,max;
	printf("Nhap gioi han tuoi can loc min-max: ");
	scanf("%d",&min);
	scanf("%d",&max);
	bool check = false;
	for(int i=1;i<=n;i++){
		if(2022-sv[i].namSinh>=min && 2022-sv[i].namSinh<=max){
			check=true;
			printf("STT\tTen\t\tQue Quan\tTuoi\tSo Thich\n");
			printf("%d \t %s \t %s \t %d \t %s\n",i,sv[i].tenHs,sv[i].queQuan,2022-sv[i].namSinh,sv[i].soThich);
		}
	} 
		if(check==false)
			printf("Khong co sinh vien nao trong do tuoi nay ");
}
int main(){
	int n,c;
	do{
		printf("\n=======================================================================\n");
		printf("1.Nhap sinh vien\n");
		printf("2.Xuat danh sach sinh vien\n");
		printf("3.Loc sinh vien theo so thich\n");
		printf("4.Loc sinh vien theo tuoi\n");
		printf("5.Thoat\n");
		printf("=======================================================================\n");
		printf("Chon so: ");
		scanf("%d",&c);
		switch(c){
			case 1:{
				system("cls");
				nhapsv(sv,n);
				getch();
				system("cls");
				break;
			}
			case 2:{
				system("cls");
				xuatsv(sv,n);
				getch();
				system("cls");
				break;
			}
			case 3:{
				system("cls");
				locsvtheosoThich(sv,n);
				getch();
				system("cls");
				break;
			}
			case 4:{
				system("cls");
				locsvtheoTuoi(sv,n);
				getch();
				system("cls");
				break;
			}
			case 5:{
				printf("Thoat");
				break;
			}
			default:{
				printf("Moi nhap dung chuc nang!!!\n");
				printf("Nhap so tu 1-4");
				break;
			}
		} 
	} while(c!=5);
	getch();
	return 0; 
}
