#include<iostream>
#include<queue>
using namespace std;

int main(){
    int t;
    scanf("%d", &t);
    queue <long long int> q;
    while(t--){
        int n;
        scanf("%d", &n);
        if(n==1){
            long long int k;
            scanf("%lld", &k);
            q.push(k);
        } else if(n==2){
            if(!q.empty())
                q.pop();
        } else if(n==3){
            if(q.empty())
                printf("Empty!\n");
            else 
                printf("%lld\n", q.front());
        }
    }
    return 0;
}