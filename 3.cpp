#include<stdio.h>
int main(){
	int n[3],i,j,m1,m2,m3;
	for(i=0;i<3;i++)
		scanf("%d",&n[i]);
	printf("\n");
	int x[n[0]][n[0]],y[n[1]][n[1]],z[n[2]][n[2]];
	int s1[n[0]*2]={},s2[n[1]*2]={},s3[n[2]*2]={};
	int k[3]={};
	for(i=0;i<n[0];i++)
		for(j=0;j<n[0];j++){
			scanf("%d",&x[i][j]);
			s1[i]+=x[i][j];
			//s1[i+n[0]]+=x[j][i];
			//printf("%d\n",s1[i+n[0]]);
			
		}
	
	printf("\n");
	for(i=0;i<n[1];i++)
		for(j=0;j<n[1];j++){
			scanf("%d",&y[i][j]);
			s2[i]+=y[i][j];
		//	s2[i+n[1]]+=y[j][i];
		}
	printf("\n");
	for(i=0;i<n[2];i++)
		for(j=0;j<n[2];j++){
			scanf("%d",&z[i][j]);
			s3[i]+=z[i][j];
		//	s3[i+n[2]]+=z[j][i];
		}
	for(i=0;i<n[0];i++)
		for(j=0;j<n[0];j++)
			s1[i+n[0]]+=x[j][i];
	//for(i=0;i<n[0]*2;i++)
		//printf("%d %d\n", s1[i],i);	
			
	for(i=0;i<n[1];i++)
		for(j=0;j<n[1];j++)
			s2[i+n[1]]+=y[j][i];
			
	for(i=0;i<n[2];i++)
		for(j=0;j<n[2];j++)
			s3[i+n[2]]+=z[j][i];
			
			
	m1=s1[0],m2=s2[0],m3=s3[0];
	
	
	for(i=1;i<n[0]*2;i++)
		if(m1==s1[i])
			k[0]++;
	//	printf("%d\n",k[0]);
	for(i=1;i<n[1]*2;i++)
		if(m1==s1[i])
			k[1]++;
	for(i=1;i<n[2]*2;i++)
		if(m1==s1[i])
			k[2]++;	
	for(i=0;i<3;i++){
		if(k[i]==n[i]*2-1)
			printf("No\n");
		else 
			printf("yes\n");
	}	
	return 0;
}
