#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)

void bubbleSort(vector<int> &vec){
    int size = vec.size();
    rep(i,0,size){
        rep(j,0,size-i-1){
            if(vec[j+1]<vec[j]){
                int temp = vec[j+1];
                vec[j+1] = vec[j];
                vec[j] = temp;
            }
        }
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
	bubbleSort(vec);
	cout << "After Sorting: \n";
	rep(i,0,vec.size()){
	    cout << vec[i] << " ";
	}
}
