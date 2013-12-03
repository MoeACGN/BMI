#include <iostream>

using namespace std;

double bmi  (double height,double kilo)                         //傳入身高與體重
            {return ( kilo / ((height/100)*(height/100)) );     //換算為BMI值
            };

int main()
{
    double cm,kg,b;
    cout<<"請輸入身高(cm):";
    cin >>cm;
    cout<<"請輸入體重(kg):";
    cin >>kg;
    b=bmi(cm,kg);
    cout<<"你的bmi值為:"<<b<<endl;                     //呼叫計算bmi的函數處理身高體重資料並輸出
    if  (b<18.5)
        {cout<<"體重過輕	BMI ＜ 18.5";
        }
    else
        {if (b<24)
            {cout<<"正常範圍	18.5 ≦ BMI ＜24";
            }
         else
            {if (b<27)
                {cout<<"過    重	24 ≦ BMI ＜ 27";
                }
             else
                {if (b<30)
                    {cout<<"輕度肥胖	27 ≦ BMI ＜ 30";
                    }
                 else
                    {if (b<35)
                        {cout<<"中度肥胖	30 ≦ BMI ＜ 35";
                        }
                     else
                        {cout<<"重度肥胖	BMI ≧ 35";
                        }
                    }
                }
            }
        }
    return 0;
}
