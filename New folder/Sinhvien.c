#include <stdio.h>
#include"Sinhvien.h"
void nhapSV(SV *d)
{
	fflush(stdin);
	printf("\nNhap ma sinh vien");gets(d->masv);
	printf("\nNhap hoten sinh vien");gets(d->hoten);
	do{
		printf("\nNhap gioi tinh (chon 1-Nu, chon 2-Nam, chon 3-Khac): ");scanf("%d",&d->gt);
		if ( d->gt < 1 || d->gt > 3)	printf("Gia tri khong hop le\n");
	}while ( d->gt < 1 || d->gt > 3);
	inputDate(&d->ns);
	fflush(stdin);
	printf("\nNhap noi sinh: "); gets(d->noisinh);
	printf("\nNhap lop: ");gets(d->lop);
}
void inSV(SV d)
{
	printf("\nMa sinh vien: %s",d.masv);
	printf("\nHoten : %s",d.hoten);
	printf("\nNgay sinh: ");outputDate(d.ns);
	printf("\nGioi tinh: %s",(d.gt!=0?"Nam":"Nu"));
	printf("\nNoi sinh : %s",d.noisinh);
	printf("\nLop: %s",d.lop);
}
void nhapDSSV (SV *d, int *n)
{
	int i;
	printf("So sinh vien can nhap la:");scanf("%d",n);
	for (i=0;i<*n;i++)
	{
		printf("\nHoc vien thu %d:\n",i+1);
		nhapSV(&d[i]);
	}
}

void inDSSV (SV *d, int n)
{
	int i;
	printf("\nCac sv da nhap:");
	for (i=0;i<n;i++)
	{
		printf("\nHoc vien thu %d:\n",i+1);
		inSV(d[i]);
	}
}
void timSV (SV*d, int n)
{
	char findText[15];
	int i;
	fflush(stdin);
	printf("\nNhap ma sinh vien muon tim:");gets(findText);
	for (i=0;i<n;i++)
		if (strcmp(d[i].masv,findText)==0)
	 		{
	 			inSV(d[i]);
	 		}
}
void ghiDSSV (SV *d, int n)
{
	char tentep[50]; int i;
	FILE *fp;
	fflush(stdin);
	printf("\nname:");gets(tentep);
	if ((fp=fopen(tentep,"w"))==NULL)
	{
		printf("\nError!");
		
	}
	for (i=0;i<n;i++)
	{				
		fprintf(fp,"%s\n",d[i].masv);
		fprintf(fp,"%s\n",d[i].hoten);
		fprintf(fp,"%d %d %d\n",d[i].ns.day,d[i].ns.month,d[i].ns.year);
		fprintf(fp,"%d\n",d[i].gt);
		fprintf(fp,"%s\n",d[i].noisinh);
		fprintf(fp,"%s\n",d[i].lop);
	}
	fclose(fp);
	printf("\nsaved");
}

void docDSSV (SV *d, int *n)
{
	char tentep[50]; 
	SV temp;
	FILE *fp;
	fflush(stdin);
	printf("\nname:");gets(tentep);
	if ((fp=fopen(tentep,"r"))==NULL)
	{
		printf("\nError!");
		
	}
	*n=0;
	while (fgets(temp.masv,15,fp) != NULL)
    {   	
		fgets(temp.hoten,50,fp);
		fscanf(fp,"%d%d%d",&temp.ns.day,&temp.ns.month,&temp.ns.year);
		fscanf(fp,"%d",&temp.gt);
		fgetc(fp);
		fgets(temp.noisinh,50,fp);
		fgets(temp.lop,10,fp);
		d[*n]=temp;
		inSV(d[*n]);
		*n++;
	}
	fclose(fp);
printf("\npull off");


}
