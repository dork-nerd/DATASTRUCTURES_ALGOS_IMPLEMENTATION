#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)

void selectionSort(vector<int> &vec){
    int size = vec.size();
    rep(i,0,size){
        int minindex = i;
        rep(j,i,size){
            if(vec[minindex] > vec[j]) minindex = j;
        }
        int temp = vec[minindex];
        vec[minindex] = vec[i];
        vec[i] = temp;
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
	selectionSort(vec);
	cout << "After Sorting: \n";
	rep(i,0,vec.size()){
	    cout << vec[i] << " ";
	}
}
