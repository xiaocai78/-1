#include <stdio.h>
int main(){
	float a=0;
	int b=0;
	float c;
	int d;
	int i=1;
	int arr[69]={0};
	int e;
	scanf("%f",&a);
	b=a;
	c=a-b;
	printf("整数部分："); 
//	printf("%f\n",a);
//	printf("%d\n",b);
//	printf("%f\n",c);
    while(b>0){
    d=b%2;
	b=b/2;
	arr[i]=d;
	i++;	
	}
	if(arr[i]==0){
	while(i>1){
	printf("%d",arr[i-1]);
	i--;}}
	else{
	while(i>0){
	printf("%d",arr[i]);
	i--;	
	}}
	printf("\n小数部分：");
	while(i<5){
	c=c*2;
	d=c;
	c=c-d;
	printf("%d",d);
	i++;
	}

	return 0;
}
