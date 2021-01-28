#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;

bool check(int year){
    return ((year%4==0 && year%100)|| (year%400 == 0));
}

int main(){
    int t;
    cin >> t;
    for(int i=1; i<=t; i++){
        string month, month2;
        long long int date, year, date2, year2, num = 0;
        cin >> month;
        scanf("%d, %lld", &date, &year);
        cin >> month2;
        scanf("%d, %lld", &date2, &year2);
        if(year == year2){
            if((month == "January" || month == "February") && (month2 != "January" && month2 != "February")){
                if(check(year))
                    num = 1;
            } else if(month2 == "February" && date2 == 29)
                if(check(year))
                    num = 1;
        } else{
            if((month == "January" || month == "February") && check(year))
                num =1;
            for(int j=year+1; j<year2 ; j++){
                if(check(j)){
                    num++;
                    num += (year2-j)/4;
                    break;
                }
            }

            if(month2 == "February" && date == 29)
                if(check(year2))
                    num++;
            if(month2 != "January" && month2 != "February")
                if(check(year2))
                    num++; 
        }
        cout << "Case " << i << ": " << num << endl;
    }
    return 0;
}