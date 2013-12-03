#include <iostream>

using namespace std;

double bmi  (double height,double kilo);

int main()
{
    double cm,kg;
    cout<<"請輸入身高(cm):";
    cin >>cm;
    cout<<"請輸入體重(kg):";
    cin >>kg;
    cout<<"你的bmi值為:"<<bmi(cm,kg)<<endl;                     //呼叫計算bmi的函數處理身高體重資料並輸出
    return 0;
}

double bmi  (double height,double kilo)                         //傳入身高與體重
            {return ( kilo / ((height/100)*(height/100)) );     //換算為BMI值
            };
