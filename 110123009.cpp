#include<stdio.h>
#include<conio.h>
   void nhapmang2c( int a[50][50],int m ,int n);
   void xuatMatran(int a[50][50],int m,int n);
   void timmax(int a[50][50], int m,int n);
   void timmin(int a[50][50], int m,int n);
  
  
  int a[50][50],m,n;

int main()
{
   printf ("\n nhap so dong m= ");
   scanf ("%d",&m);
   printf ("\n nhap so cot n= ");
   scanf("%d",&n);
   nhapmang2c(a,m,n);
   xuatMatran(a,m,n);
   timmax(a,m,n);
   timmin(a,m,n);
   
   }   
   
   void nhapmang2c( int a[50][50],int m ,int n)
{  
      for(int i=0;i <m;i++)  
      for(int j=0;j <n;j++)
           { 
		   printf("nhap phan tu a[%d][%d]= ",i,j);
            scanf("%d",&a[i][j]);
           }
}   
    void xuatMatran(int a[50][50],int m,int n)
 {
 	
    for(int i=0;i<m;i++)
     {
	 for(int j=0;j<n;j++)
	    printf("\t %d",a[i][j]);
	    printf("\n");
	  }
}	  
	void timmax(int a[50][50], int m,int n)
{
	

   int max=a[0][0];
   	
   for(int i=0;i<n;i++)	  
  {
	for(int j=0;j<m;j++)  
       if(a[i][j] > max)
       {
	      max=a[i][j];
       }
   } 
    printf("\ gia tri lon nhat= %d",max);
 }   

   void timmin(int a[50][50], int m,int n)
{
	

   int min=a[0][0];
   	
   for(int i=0;i<n;i++)	  
  {
	for(int j=0;j<m;j++)  
       if(a[i][j] < min)
       {
	      min=a[i][j];
       }
   } 
    printf("\n gia tri nho nhat= %d",min);
 }    
 
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
