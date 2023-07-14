#include<iostream>
using namespace std;

void PrintArray(int a[],int size)
{
	cout<<"Printing Array";
	for(int i=0;i<size;i++)
	{
		cout<<a[i]<<" ";
	}
}
int main()
{
	int arry[15];//declaring an array with size 15
	
	cout<<endl<<"Element at 5th index"<<arry[5]<<endl;////Accessing an Array Element using indexing
	cout<<endl<<"Element at 20th index"<<arry[20]<<endl;//Throws a warning stating out of bound of Array
	
	//Initialization of Array
	int second[3]={5,7,11};
	
	cout<<"Element at 2nd index"<<second[2]<<endl;
	
	
	int third[15]={2,7};
	int n=15;
	//Print the Array
	cout<<"Printing the arrya";
	for(int i=0;i<15;i++)
	cout<<third[i]<<" ";
	
	
	//Functions for Array
	cout<<"Calling the PrintArry Function"<<endl;
	PrintArray(third,n);
	
	//SizeOf Array
	int thirdSize=sizeof(third)/sizeof(int);
	cout<<"Size of ThirdSize"<<thirdSize<<endl;
	cout<<"Actual Size"<<sizeof(third);
	cout<<endl<<"EveryThing is Fine";
}
