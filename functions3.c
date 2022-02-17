#include<stdio.h>
int add( int a[],int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
      sum=sum+a[i];
    }
    return sum;
}
int jod (int n ,int m ,int a[n][m])
{
    int sum=0;
    for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
    {
       sum=sum+a[i][j]; 
    }
    return sum;
}
void print(int m, int n, int arr[][n])
{
    int i, j;
    for (i = 0; i < m; i++)
      for (j = 0; j < n; j++)
        printf("%d ", arr[i][j]);
}
int main()
{
    int a[5]={1,2,3,4,5};
    int b[4][2]={{1,1},{2,2},{3,3},{4,4}};
    int res= add(a,5);
    printf("%d\n",res);
     int tot= jod(4,2,b);
     printf("%d\n",tot);
   // print(2,2,b);
    int arr[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int m = 3, n = 3;
    print(m, n, arr);
}