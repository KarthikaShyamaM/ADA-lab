#include<stdio.h>
int min(int,int);

int floyd(int a[10][10],int n)
{
  int i,j,k;
  for(k=1;k<=n;k++)
  for(i=1;i<=n;i++)
  for(j=1;j<=n;j++){
  if(i == k || j==k)continue;
  a[i][j]=min(a[i][j],a[i][k]+a[k][j]);
  }
}
int min(int c,int d)
{
  return(c<d)?c:d;
}
void main()
{
  int i,j,n,a[10][10];
  printf("Enter the number of vertex:\n");
  scanf("%d",&n);
  printf("Enter the adjacency matrix:\n");
  for(i=1;i<=n;i++)
  for(j=1;j<=n;j++)
  scanf("%d",&a[i][j]);
  floyd(a,n);
  printf("\nAll pairs shortest path matrix is:\n");
  for(i=1;i<=n;i++)
  { 
    for(j=1;j<=n;j++)
    printf("%d\t",a[i][j]);
    printf("\n");
  }
}  
  
