#include<stdio.h>
int main(){
int m;
scanf("%d",&m);int r=m;
int n=(m/2)+1;
for(int i=1;i<=n;i++){
for(int j=1;j<=r;j++){
if(j==i||j==m)
printf("%d",j);
else printf(" ");
}m=m-1;printf("\n");
}
return 0;}
