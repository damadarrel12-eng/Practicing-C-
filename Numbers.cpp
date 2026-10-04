#include<iostream>
using namespace std;
int main(){
    int n,i;
    int num[20];
    int count = 0;
    cout << "Enter the number of numbers\n";
    cin >> n;
    for(i=0;i<n;i++){

        cin >> num[i];
        cout << '\n';
       
        if(num[i]% 2 == 0){
            
            count++;
        }
    }
    cout << count;





}
