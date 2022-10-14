#include<iostream>
 using namespace std;
 int main()
 {
 	int i,j,n,arr[50],temp;
 	cout<<"enter the size of arr[50]";
 	cin>>n;
 	cout<<"enter"<<"n"<<"number";
 	for(i=0;i<n;i++)
 	{
 		cin>>arr[i];
	 for(i=0;i<n-1;i++)
	 {
	 	for(j=0;j<n-i-1;j++)
	 	{
	 		if(arr[i]>arr[j+1])
	 		{
	 			temp=arr[i];
	 			arr[i]=arr[j+1];
				 arr[j+1]=temp;			 }
		 }
	 }
 }
 cout<<"sorting of array using bubble sort technique";
 for(j=0;j<n;j++)
  {
  cout<<"the array is sorted successfully";
 cout<<"the new array is:";
 cin>>arr[i];
 }
  for(i=0;i<n;i++)
 {
 cout<<arr[i]<<" ";
 cout<<endl;
 return 0;
}
}

