#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
void insertionSort(vector<int> &vec){
    int size = vec.size();
    rep(i,0,size){
        int j=i-1;
        int val = vec[i];
        while(j>=0 && vec[j]>val){
            vec[j+1] = vec[j];
            j--;
        }
        vec[j+1] = val; 
    }
    return;
}
int main() {
	vector<int> vec = {1,6,7,4,8,3,2,5};
    cout << "Before Sorting: \n";
	rep(i,0,vec.size()){
	    cout << vec[i] << " ";
	}
	cout << "\n";
	insertionSort(vec);
	cout << "After Sorting: \n";
	rep(i,0,vec.size()){
	    cout << vec[i] << " ";
	}
}
