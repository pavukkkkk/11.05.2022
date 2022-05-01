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

int main() {
    
    vector<int> m= { 1,2,3,4,5,6 };

    //for_each выполняет какое-либо действие с каждым элементом массива по отдельности
    //изначально является немодифицирующим алгоритмом, т.е. не меняет исходный контейнер, однако он может быть изменен в соответствии с передаваемой функцией
    for_each(m.begin(), m.end(), [](int& a) { return a-10; });
    for (auto x: m){
        cout<<x<<" ";
        
    }
    cout<<endl;

    //transform изменяет исходный контейнер
    //алгоритм может работать с двумя контейнерами одновременно и\или помещать результат в новый контейнер
    transform(m.begin(), m.end(), m.begin(), [](int a) {return a-10; });
    for (auto x: m){
        cout<<x<<" ";
        
    }
}
