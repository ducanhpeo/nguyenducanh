#include "Date.h"
typedef struct
{
char masv[15];
char hoten [50];
int gt;
Date ns;
char noisinh[50];
char lop[10];
} SV;
void nhapSV (SV *d);
void inSV (SV d);
void nhapDSSV (SV *d, int *n);
void inDSSV (SV *d, int n);
void timSV (SV*d, int n);
void ghiDSSV (SV *d, int n);
void docDSSV (SV *d, int *n);
