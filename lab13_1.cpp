#include <iostream>
using namespace std;

template <typename T>
void insertionSort(T d[],int N){
T temp;
int i=1;
do{
int x=i;	
do{
	
if(d[x]>d[x-1]){temp=d[x];d[x]=d[x-1];d[x-1]=temp;} 
	
x--;
}while(x>0);cout<<"Pass "<<i<<":";
for(int j=0;j<N;j++){
	cout<<d[j]<<" ";
	
}
	cout<<"\n";	
		
i++;
	
}while(i<N);
}

int main(){
	int a[10] = {12,25,30,44,2,0,4,7,55,25};
	cout << "Input Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";
	cout << "\n\n";
	
	insertionSort(a,10);
	
	cout << "\nSorted Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";	
}