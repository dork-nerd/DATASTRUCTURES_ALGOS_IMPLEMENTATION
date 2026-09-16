#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)

void merge(vector<int> &vec,int l,int r){
    int mid = l + (r-l)/2;
    int start = l;
    int midstart = mid+1;
    int k = 0;
    vector<int> ans(r-l+1);
    while(start<=mid && midstart<=r){
        if(vec[start]<vec[midstart]) ans[k++] = vec[start++];
        else ans[k++] = vec[midstart++];
    }
    while(start<=mid){
        ans[k++] = vec[start++];
    }
    while(midstart<=r){
        ans[k++] = vec[midstart++];
    }
    for(int i=0;i<k;i++){
        vec[l+i] = ans[i];
    }
    return;
}

void breakk(vector<int> &vec,int l,int r){
    if(l<r){
        int mid = l + (r-l)/2;
        breakk(vec,l,mid);
        breakk(vec,mid+1,r);
        merge(vec,l,r);
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
	breakk(vec,0,vec.size()-1);
	cout << "After Sorting: \n";
	rep(i,0,vec.size()){
	    cout << vec[i] << " ";
	}
	return 0;
}
