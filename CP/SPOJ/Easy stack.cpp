    #include<iostream>
    #include<stack>
    using namespace std;
     
    int main(){
        int t;
        scanf("%d", &t);
        stack <long long int> st;
        while(t--){
            int n;
            scanf("%d", &n);
            if(n==1){
                long long int k;
                scanf("%lld", &k);
                st.push(k);
            } else if(n==2){
                if(!st.empty())
                    st.pop();
            } else if(n==3){
                if(st.empty())
                    printf("Empty!\n");
                else 
                    printf("%lld\n", st.top());
            }
        }
        return 0;
    } 