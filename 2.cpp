#include<stdio.h>
int main(){
	int n=2,i,j,k,l,m=0;
	if(n>=2&&n<=1000)
		scanf("%d",&n);
	int x[n],y[n]={},z[n];
	for(i=0;i<n;i++)
		scanf("%d",&x[i]);
	for(i=0;i<n;i++){
		k=1;
		for(j=k;j<n;j++){
			if(x[i]==x[j]){
				y[i]++;	
			}
		}
		k++;
	}
	l=y[0];
	for(i=1;i<n;i++){
		if(l<y[i]){
			l=y[i];
			m=i;
		}
	}
	z[0]=x[m];
	for(i=0,j=1;i<n;i++){
		if(l==y[i]){
			z[j]=x[i];
			j++;
		}		
	}
	for(i=0;i<j;i++){
		k=1;
		for(l=k;l<j;l++){
			if(z[i]>z[l]){
				z[i]=z[l];
				z[i+1]=z[i];
			}
		}
	}
	for(i=0;i<j;i++)
		printf("%d ",z[i]);
	return 0;
}
