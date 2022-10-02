#include<stdio.h>
void main(){
int n;
scanf("%d",&n);
int a[n], max=0;
for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
    if(max<a[i]){
        max=a[i];
    }
}
for(int i=max;i>0;i--){
   for(int j=0;j<n;j++){
    if(a[j]>=i){
        printf("*");
    }else{
        printf(" ");
    }
   }
printf("\n");
}
}
