#include <iostream>

using namespace std;

double bmi  (double height,double kilo)                         //�ǤJ�����P�魫
            {return ( kilo / ((height/100)*(height/100)) );     //���⬰BMI��
            };

int main()
{
    double cm,kg,b;
    cout<<"�п�J����(cm):";
    cin >>cm;
    cout<<"�п�J�魫(kg):";
    cin >>kg;
    b=bmi(cm,kg);
    cout<<"�A��bmi�Ȭ�:"<<b<<endl;                     //�I�s�p��bmi����ƳB�z�����魫��ƨÿ�X
    if  (b<18.5)
        {cout<<"�魫�L��	BMI �� 18.5";
        }
    else
        {if (b<24)
            {cout<<"���`�d��	18.5 �� BMI ��24";
            }
         else
            {if (b<27)
                {cout<<"�L    ��	24 �� BMI �� 27";
                }
             else
                {if (b<30)
                    {cout<<"���תέD	27 �� BMI �� 30";
                    }
                 else
                    {if (b<35)
                        {cout<<"���תέD	30 �� BMI �� 35";
                        }
                     else
                        {cout<<"���תέD	BMI �� 35";
                        }
                    }
                }
            }
        }
    return 0;
}
