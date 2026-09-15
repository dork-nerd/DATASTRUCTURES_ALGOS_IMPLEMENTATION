#include <bits/stdc++.h>
using namespace std;

int linearSearch(vector<int> &vec,int element){ //Element to be found
    for(int i=0;i<vec.size();i++){
        if(vec[i]==element) return i;
    }
    return -1;
}


int main() {
    vector<int> vec = {1,2,3,4,5,6,7};
	int index = linearSearch(vec,0);
	if(index!=-1) cout << "The element is at " << index << "\n";
	else cout << "The element is not present in the array" << "\n";
	return 0;
}
