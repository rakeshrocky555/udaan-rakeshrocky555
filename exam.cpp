#include "bits/stdc++.h"
#include "algorithm"
using namespace std;
int main()
{
	
	int num,i,j;
	//to enter number of strings
	cin>>num;
	int ans[num][2];
	string s[num];
	string str; 
	
	for(i=0;i<num;i++)
{
	
	getline(cin,s[i]);
	cout<<"enter the string"<<endl;
}
	
	cout<<"enter the search string"<<endl;
	getline(cin,str);
	 
	 for(i=0;i<num;i++)
	 {
	 	ans[i][0]=i;
		 ans[i][1]=s[i].find(str);
	}
	 
	 
	 /*
	 sort the 2 dimensional array based on second column
	 
	 */
	/*
	now print the first three strings
	*/
}
