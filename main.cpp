#include <iostream>

using namespace std;

double bmi  (double height,double kilo);

int main()
{
    double cm,kg;
    cout<<"�п�J����(cm):";
    cin >>cm;
    cout<<"�п�J�魫(kg):";
    cin >>kg;
    cout<<"�A��bmi�Ȭ�:"<<bmi(cm,kg)<<endl;                     //�I�s�p��bmi����ƳB�z�����魫��ƨÿ�X
    return 0;
}

double bmi  (double height,double kilo)                         //�ǤJ�����P�魫
            {return ( kilo / ((height/100)*(height/100)) );     //���⬰BMI��
            };
