#include<stdio.h>
#include"Date.h"
void inputDate(Date *d){
	printf("Nhap vao ngay sinh: ");
	scanf("%d%d%d", &d -> day, &d -> month, &d -> year);
}

void outputDate(Date d){
	printf("%d/%d/%d",d.day, d.month, d.year);
}
