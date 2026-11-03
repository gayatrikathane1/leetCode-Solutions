#include<iostream>
#include<vector>
using namespace std;
int main(){
    double celsius=36.50;
    double kelvin=celsius+273.15;
    double fehrenheit=(celsius*1.80)+32.00;
    vector<double>ans={kelvin,fehrenheit};
    cout<<"["<<ans[0]<<" ,"<<ans[1]<<"  ]";
    return 0;
}
