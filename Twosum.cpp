#include <iostream>
using namespace std;

int main() 
{
    int n=6;
    int arr[6] = {2,5,7,4,1,3};
    int target = 5;

    for(int i=0;i<=n;i++){
        for(int j=n;j>i;j--){
            if(arr[i] + arr[j] == target){
                cout << "{" << i << "," << j  << "}" << endl;           
                }
        }
    }
    return 0;
}