#include<iostream>
#include<stdio.h>
#include<string>
#include<bitset>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i=1; i<=t; i++){
        int a, b, c, d, e, f, g, h;
        string::size_type sz;
        string as, bs, cs, ds;
        scanf("%d.%d.%d.%d", &a, &b, &c, &d);
        scanf("%d.%d.%d.%d", &e, &f, &g, &h);
        as = bitset<8>(a).to_string();
        a = stoi(as, &sz);
        bs = bitset<8>(b).to_string();
        b = stoi(bs, &sz);
        cs = bitset<8>(c).to_string();
        c = stoi(cs, &sz);
        ds = bitset<8>(d).to_string();
        d = stoi(ds, &sz);
        if(a == e && b == f && c == g && d == h)
            cout << "Case " << i << ": Yes" << endl;
        else
            cout << "Case " << i << ": No" << endl;
    }
    return 0;
}