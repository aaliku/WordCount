#include<stdio.h>
bool test(int n,int A[]){
	int x=0,y=0;
	for(int i=0;i<n;i++){
		if(A[i]%4==0)
			x++;
		else if(A[i]%2==0)
			y++;
	}
	if((2*x+y)>=n)
		return true;
	else
		return false;
}
int main(){
	int t;
	scanf("%d",&t);
	bool result[t];
	for(int i=0;i<t;i++){
		int n=0;
		scanf("%d",&n);
		int A[n]; 
		for(int j=0;j<n;j++)
			scanf("%d",&A[j]);
		result[i]=test(n,A);
	}
	for(int k=0;k<t;k++)
		if(result[k])
			printf("Yes\n");
		else
			printf("No\n");	
}









/*
#include<stdio.h>
#include<string.h>
void test(char s[]){
	int length=strlen(s);
	char chr=s[0];
	int num=1;
	int type=1;
	int all=1;
	float sum=0;
	
	for(int i=1;i<length;i++){
		if(s[i]==chr){
			num++;
			if(i==length-1){
				all+=num;
				sum=length/(float)type;
			}	
		}	
		else{
			type++;
			all+=num;
			chr=s[i];
			num=1;
			if(i==length-1){
				all++;
				sum=length/(float)type;
			}
		}
	}

	printf("%f",sum);
}
int main(){
	char str[50];
	scanf("%s",str);
	test(str);
}
*/















/*
#include<stdio.h>
void test(int n){
	int n1=n;
	int n2=0;
	int mid;
	while(n%10!=0){
		mid=n%10;
		n=n/10;
		n2=n2*10+mid;
	}
	n1=n1+n2;
	printf("%d",n1);
} 
int main(){
	printf("«Î ‰»În: ");
	int n;
	scanf("%d",&n);
	test(n);
}
*/



















/*
#include<stdio.h>
void test(int n){
	if(n==1){
		printf("1");
	}else if(n==2){
		printf("2");
	}else if(n%2==0){
		test((n-2)/2);
		printf("2");
	}else{
		test((n-1)/2);
		printf("1");
	}
}
int main(){
	printf("«Î ‰»În: ");
	int n;
	scanf("%d",&n);
	test(n);
} 
*/
