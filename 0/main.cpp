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
#include <stack>

template <typename T>  void print(T a) {
    for (auto x: a){
        cout<<x<<" ";
    }
    cout<<endl;
}
template <typename T> void printrv(list<T> a) {
    typename std::list<T>::reverse_iterator it;
    for (it=a.rbegin(); it!=a.rend(); ++it)
            std::cout << " " << *it;
    cout<<endl;
}


int main() {

    list<char> road,deadend2,deadend1 ;
    string s;
    cin>>s;
    for(int i=0; i<s.length(); i++){
        road.push_back(s[i]);
    }
    char a;
    char c;
    c='G';
    int k;
    while (road.size()>0){
        cin>>a>>k;
        cout<<"doroga: ";
        for (auto x: road){
            if (x !=a){
            cout<<x<<" ";
            }
            
            else{
                cout<<endl;
                int d=0;
                c=road.back();
                road.pop_back();
                if (k==2){
                while (c!=a){
                d++;
                deadend1.push_back(c);
                c=road.back();
                road.pop_back();
            }
                deadend2.push_back(a);
                cout<<"tupik 1: ";
                printrv(deadend1);
            
                for (;d>0;d--){
                    road.push_back(deadend1.back());
                    deadend1.pop_back();
                }
                cout<<"tupik 2: ";
                printrv(deadend2);
                break;
            }
                else{
                    while (c!=a){
                    d++;
                    deadend2.push_back(c);
                    c=road.back();
                    road.pop_back();
                }
                    deadend1.push_back(a);
                    cout<<"tupik 1: ";
                    printrv(deadend1);
                    cout<<"tupik 2: ";
                    printrv(deadend2);
                    
                    for (;d>0;d--){
                        road.push_back(deadend2.back());
                        deadend2.pop_back();
                    }
                    break;
                    
                }
                }
            }
        print(road);
        }
    }
    


