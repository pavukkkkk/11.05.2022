#include <map>
#include <iostream>
#include <string>
#include <tuple>
#include <vector>
#include <algorithm>
#include <functional>
#include <iostream>
#include <numeric>
#include <set>
#include <fstream>
#include <iostream>
#include <string>
#include <cmath>
#include <sstream>
using namespace std;
#include <iostream>
#include <list>

int main(int argc, const char * argv[]) {
    //VECTOR
    vector<int> a{1,2,3,4,5,6,7,8,9,10,11,12};
    vector<int> b{1,2,3,4,5,6,7,8,9,10,11,12};
    int n,tmp;
    cin>>n;
    vector<int> c;
    if (n<=a.size()){
        //A
        for (int i=0;i<n;i++){
            const vector<int>::iterator iter=b.begin();
            tmp=*iter;
            b.erase(iter);
          
            b.push_back(tmp);
        }
       
            for (auto x: b){
                cout<<x<<" ";
            }
        cout<<endl;
//    move(a.begin(), a.begin()+n, back_inserter(a));
//
//        remove(a.begin(), a.begin()+n, true);
//    a.erase(a.begin(),a.begin()+n);
        
        
    //B
        
    rotate(a.begin(), a.begin()+n, a.end());
    for (auto x: a){
        cout<<x<<" ";
        
    }
       
    }
    else{
        cout<<"error";
    }
    cout<<endl;
//LIST
    list<int> a1{1,2,3,4,5,6,7,8,9,10,11,12};
    list<int> b1{1,2,3,4,5,6,7,8,9,10,11,12};
    //A
    for (int i=0;i<n;i++){
        const list<int>::iterator iter=a1.begin();
        tmp=*iter;
        a1.erase(iter);
      
        a1.push_back(tmp);
    }
   
        for (auto x: b){
            cout<<x<<" ";
        }
    cout<<endl;
    
    //B
    list<int>::iterator iter=b1.begin();
    for (int i=0; i<n;i++){
        iter++;
    }
    rotate(b1.begin(), iter, b1.end());
    for (auto x: b1){
        cout<<x<<" ";
    }
    return 0;
}

