#include <iostream>
using namespace std;
 
int main() {
	// your code goes here
	long int t;
	cin>>t;
	while(t--)
	{
	int n;
	cin>>n;
    	for(int i=1;i<=n;i++)
    	{
    	    for(int j=1;j<=i;j++)
    	    {
    	        cout<<"*";
    	    }
    	    for(int k=1;k<=2*(n-i);k++)
    	        cout<<"#";
    	   for(int j=1;j<=i;j++)
    	    {
    	        cout<<"*";
    	    }
    	    cout<<endl;
    	}   
	}
 
	return 0;
}