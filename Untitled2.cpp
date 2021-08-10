#include<iostream>
using namespace std;

int main()
{
	int i,j,n,m;
	cin>>n;
	int c[i][j];
	for(i=0;i<=n;i++){
		for(j=0;j<=i;j++){
			if(j==0)
			c[i][j]=1;
			else if(i==j)
			c[i][j]=1;
			else
			{
				c[i][j]=c[i-1][j-1]+c[i-1][j];
			}
		}
	}
	/*for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			cout<<c[i][j];
		}
		cout<<endl;
	} */
	for(i=0;i<=n;i++){
		for(j=0;j<=i;j++){
			cout<<c[i][j];
		}
		cout<<endl;
	}
}
