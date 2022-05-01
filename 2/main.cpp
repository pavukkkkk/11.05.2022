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
using namespace std;
#include <ctime>

bool* resheto(int n) {
    n++;
    bool* a = new bool(n);
    a[0] = false;
    a[1] = false;
    for (int i = 2; i < n; i++)
        a[i] = true;
    for (int i = 2; i * i < n; i++)
        for (int j = i * i; j < n; j += i)
            a[j] = false;
    return a;
}
int main() {
    
    
    
    int stime;
    long ltime;
    ltime = time (NULL);
    stime = (unsigned int) ltime/2;
    srand(stime);
    vector<int> b,a;
    list<int> b1,a1;
    for (int i = 0; i < 10; i++) {
        int n = rand() % 20;
        cout<<n<<" ";
        b.push_back(n);
        a.push_back(n);
        a1.push_back(n);
        b1.push_back(n);
    }
    cout<<endl;

    int m = *max_element(b.begin(), b.end());
    bool* res = resheto(m);
    
    
    //VECTOR

    //A
    vector<int> anew;
    vector<int>::iterator iter=a.begin();
    for (int i=0;i<a.size();){
        if (res[a[i]]){
            anew.push_back(a[i]);
            a.erase(iter+i);
        }
        else{
            i++;
        }
    }
    for (auto x: a){
        anew.push_back(x);
    }
    for (auto x: anew){
        cout<<x<<" ";
    }
    cout<<endl;
    //B
    vector<int> bnew(b.size());
    auto it = copy_if(b.begin(), b.end(), bnew.begin(), [res](const int& b) {
        return res[b];
        });
    copy_if(b.begin(), b.end(), it, [res](const int& b) {
        return !res[b];
        });
    
    for (auto x: bnew){
        cout<<x<<" ";
    }
    cout<<endl;
    
    //LIST
    //A
    list<int> a1new;
    for (auto x: a1){
        if (res[x]){
            a1new.push_back(x);}
        
    }
    for (auto x: a1){
        if (!res[x]){
            
        
            a1new.push_back(x);}
        
    }
    for (auto x: a1new){
        cout<<x<<" ";
    }
    cout<<endl;
    //B
    list<int> b1new(b.size());
    auto it1 = copy_if(b1.begin(), b1.end(), b1new.begin(), [res](const int& b) {
        return res[b];
        });
    copy_if(b1.begin(), b1.end(), it1, [res](const int& b) {
        return !res[b];
        });
    
    for (auto x: b1new){
        cout<<x<<" ";
    }
    cout<<endl;
}
