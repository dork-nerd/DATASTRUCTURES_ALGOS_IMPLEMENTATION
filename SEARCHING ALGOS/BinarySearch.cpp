#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> &vec,int element){ //Element to be found
    int l = 0;
    int r = vec.size()-1;
    while(l<=r){
        int mid = l+(r-l)/2;
        if(vec[mid]==element) return mid;
        else if(vec[mid]>element) r=mid-1;
        else l= mid+1;
    }
    return -1;
}

int main() {
    vector<int> vec = {1,2,3,4,5,6,7};
	cout << binarySearch(vec,2);
	return 0;
}
