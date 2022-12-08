#include <stdio.h>
#include <stdlib.h>
#include "Sinhvien.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int chon,n;
	SV ds[100];
	do{
		system("cls");
		printf("\n-----------MENU------------");
		printf("\n1.nhap thong tin hoc vien");
		printf("\n2.hien thi thong tin hoc vien");
		printf("\n3.tim thog tin hoc vien theo ma hoc vien");
		printf("\n4. Ghi thong tin hoc vien vao tep");
		printf("\n5. Doc thong tin hoc vien tu tep");
		printf("\n0.thoat");
		printf("\n-----------");
		printf("\nban hay chon 1 cong viec"); scanf("%d",&chon);
		switch (chon)
		{
			case 1:
				system ("cls");
				printf("\n1.nhap thong tin hoc vien");
				nhapDSSV(ds,&n);
				getch();
				break;
			case 2:
				system ("cls");
				printf("\n2.hien thi thong tin hoc vien");
				inDSSV(ds,n);
				getch();
				break;
			case 3:
				system ("cls");
				printf("\n3.tim thog tin hoc vien theo ma hoc vien");
				timSV(ds,n);
				getch();
				break;
			case 4: 
				system("cls");
				printf("\n4. Ghi danh sach sv vao tep\n");
				ghiDSSV(ds,n);
				getch();
				break;	
			case 5: 
				system("cls");
				printf("\n5. Doc danh sach hoc vien tu tep\n");
				docDSSV(ds,&n);
				getch();
				break;	
		}
	} while (chon!=0);
	return 0;
}
