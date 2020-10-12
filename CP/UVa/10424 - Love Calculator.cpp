#include<iostream>
#include<ctype.h>
#include<math.h>
#include<algorithm>
#include<string>
using namespace std;

int main(){
    string name;
    string name2;
    while(getline(cin, name)){
        getline(cin, name2);
        int num1 = 0, num2 = 0;
        for(int i=0; i<name.size(); i++)
            if(isalpha(name[i]))
                num1 += tolower(name[i]) - 'a' + 1;
        for(int i=0; i<name2.size(); i++)
            if(isalpha(name2[i]))
                num2 += tolower(name2[i]) - 'a' + 1;
        while(log10(num1)>=1.){
            string nums = to_string(num1);
            num1 = 0;
            for(int i=0; i<nums.size(); i++)
                num1 += nums[i] - '0';
        }
        while(log10(num1)>=1.){
            string nums = to_string(num2);
            num2 = 0;
            for(int i=0; i<nums.size(); i++)
                num2 += nums[i] - '0';
        }
        double ratio = 0;
        ratio = (double)min(num1, num2)*100./(double)max(num1, num2);
        printf("%.2lf %%\n", ratio);
    }
    return 0;
}