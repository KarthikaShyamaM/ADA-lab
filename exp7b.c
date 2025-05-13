#include<stdio.h>
#include<stdlib.h>

int warshall(int a[10][10],int n)
{
  int i,j,k;
  for(k=1;k<=n;k++)
  for(i=1;i<=n;i++)
  for(j=1;j<=n;j++)
  a[i][j]=a[i][j]||(a[i][k]&&a[k][j]);
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
  warshall(a,n);
  printf("\nAll pairs shortest path matrix is:\n");
  for(i=1;i<=n;i++)
  { 
    for(j=1;j<=n;j++)
    printf("%d\t",a[i][j]);
    printf("\n");
  }
}  
