#include<iostream>
using namespace std;
int main(){
   int i,n,x;
   int largest,smallest;
   
  cout<< "Enter number of numbers: ";
  cin >> n;

  cout<< "Enter the numbers\n";
  cin >> x;
    largest = x;
  smallest = x;
  for(i=1;i<n;i++){
    cin>> x;
    

    if(x>largest){
        largest = x;

    }else if(x<smallest){
        smallest = x;
    }
  }
  cout << "Largest number is:  " << largest<< '\n';
  cout<< "Smallest number is:  " << smallest;


    return 0;
}