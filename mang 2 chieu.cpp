#include <stdio.h>
#include <conio.h>
/*
int main()
{
    float a[50][50], x, max, min;
    int i, j, n, m;

    printf("Nhap so hang ma tran A: ");
    scanf("%d", &n);
    printf("Nhap so cot ma tran A: ");
    scanf("%d", &m);

    for(i=0; i<n; i++)
        for(j=0; j<m; j++)
        {
            printf("Nhap a[%d][%d]: ", i, j);
            scanf("%f", &x);
            a[i][j]=x;
        }
    printf("\nMa tran A:\n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
            printf("%6.0f", a[i][j]);
        printf("\n");
    }
    max = min = a[0][0];
    for(i=0; i<n; i++)
        for(j=0; j<m;j++)
        {
            if(max<a[i][j])
                max = a[i][j];
            if(min>a[i][j])
                min = a[i][j];
        }
    printf("Max = %0.0f, Min = %0.0f", max, min);
  
    getch();
}

*/

int main(){
    int a[100][100];
    int m,n;
    printf("nhap so hang n = "); scanf("%d",&n);
    printf("nhap so cot m = "); scanf("%d",&m);
    printf("nhap vao ma tran:\n");
    NhapMaTran(a, m , n);
    XuatMaTran(a, m, n);
    
    printf("\nMang co %d SNT!", DemSNT(a, m, n));
    
}

bool snt(int a){
    if(a < 2) return false;
    for(int i = 2; i <= sqrt(a); ++i){
        if(a % i == 0) return false;
    }
    return true;
}
 
void NhapMaTran(int a[][100], int m, int n)
{
   for(int i = 0; i < m; i++)
      for(int j = 0; j < n; j++)
      {
         printf("A[%d][%d] = ", i, j);
         scanf("%d", &a[i][j]);
      }
}
 
void XuatMaTran(int a[][100], int m, int n)
{
   for(int i = 0; i < m; i++)
   {
      for(int j = 0; j < n; j++)
         printf("%d\t", a[i][j]);
      printf("\n");
   }
}

int DemSNT(int a[][100], int m, int n){
    int cnt = 0;
    for(int i = 0; i < m; i++)
   {
      for(int j = 0; j < n; j++)
         if(snt(a[i][j])){
             cnt++;
         }
   }
   return 0;
}
