#include<stdio.h>
int main(){
	int n=2,i,j,k,l,m=0;
	if(n>=2&&n<=1000)
		scanf("%d",&n);
	int x[n],y[n]={},z[n];
	for(i=0;i<n;i++)
		scanf("%d",&x[i]);
		k=1;
	for(i=0;i<n;i++){
		for(j=k;j<n;j++){
			if(x[i]==x[j]){
				y[i]++;	
			}
		}
		k++;
	}
	//for(i=0;i<n;i++)
		//printf("%d ",y[i]);
	l=y[0];
	for(i=1;i<n;i++){
		if(l<y[i]){
			l=y[i];
			m=i;
		}
	}
	z[0]=x[m];
	//printf("%d ",z[0]);
	for(i=0,j=1;i<n;i++){
		if(l==y[i]){
			z[j]=x[i];
			printf("%d %d ",z[j],j);
			j++;
			
		}		
	}
	//printf("%d ",j);
	k=2;
	for(i=1;i<j;i++){
		for(l=k;l<j;l++){
			if(z[i]>z[l]){
				z[i]=z[l];
				z[i+1]=z[i];
			}
		}
		k++;
	}
	for(i=1;i<j;i++)
		printf("%d ",z[i]);
	return 0;
}
