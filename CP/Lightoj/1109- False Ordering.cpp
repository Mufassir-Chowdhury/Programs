#include<iostream>
#include<algorithm>
using namespace std;

struct order{
    int divisor;
    int num;
};

int cmp(const void *v1, const void *v2){
    if((((struct order*) v1) -> divisor) < (((struct order *) v2) -> divisor))
        return -1;
    else if((((struct order *) v1) -> divisor) == (((struct order *) v2) ->divisor) && (((struct order *) v1) -> num) > (((struct order *) v2) ->num))
        return -1;
    else
        return 1;
}

int main(){
    struct order o[1001];
    for(int i=1; i<1001; i++){
        o[i].divisor = 0;
        o[i].num = i;
        for(int j=2; j<i; j++){
            if(o[i].num%j == 0)
                o[i].divisor++;
        }
    }
    qsort(o+2, 999, sizeof(o[1]), cmp);
    int t;
    cin >> t;
    for(int i=1; i<=t; i++){
        int n;
        cin >> n;
        cout << "Case " << i << ": " << o[n].num << endl;
    }
    return 0;
}