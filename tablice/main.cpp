#include <iostream>
#include <vector>
using namespace std;

int main()
{
    cout << "tablice:" << endl;
    int tab[6];
    for (int i = 0; i <6; i++){
        //cout << i << ' ' << endl;
        tab[i] = i+1;
        cout << "tab[" << i << "]=" << tab[i] << endl;
    }
    vector <int> v;
    for (int i = 0; i <6; i++){
        v.push_back(i+1);
        cout << "v[" << i << "]=" << v[i] << endl;
    }
    return 0;
}
