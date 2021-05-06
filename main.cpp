/* two changes are left:-
  1) take care while taking input input only numbers
  2) compare both methods a and b.
  income_old and tax_old represents old method and income_new and tax_new represents new method.
*/
#include<iostream>
#include<string>
using namespace std;
int main()
{
    cout<< "WELCOME TO INDIAN INCOME TAX MODEL"<< endl;
    char start='y';

    while(start == 'y')
    {
        cout<< "ENTER YOUR YEARLY INCOME(please enter in numerical form)"<< endl;
        string income_old1;
        double tax_old= 0;
        cin >> income_old1;
        cout<< "YOUR INCOME IS:"<< income_old1<< endl;
        cout<< "if it is correct press y and if it is wrong press n and enter"<< endl;
        char var1;
        cin >> var1;
        while(var1 == 'n')
        {
            cout<< "enter your income again and this time be careful"<< endl;
            cin >> income_old1;
            cout<< "if it is correct press y and if it is wrong press n and enter"<< endl;
            cin >> var1;
        }
        for(unsigned int i=0; i<income_old1.size(); i++)
        {
            if(((int)income_old1[i]>65&&(int)income_old1[i]<91)||((int)income_old1[i]>97&&(int)income_old1[i]<123))
            {
                start='n';
                cout<< "you have entered wrong salary"<< endl;
                cout<< "if u want to start again with a diff salary press y and enter or else if u wanna exit press any alphabet and enter"<< endl;
                cin>> start;
                break;
            }
        }
        if(start=='n')
        {
            break;
        }
        double income_old = stod(income_old1);
        double income_new= income_old;
        if(income_old <0)
        {
            cout<< "you are already in debt so we cant take tax from u"<< endl;
            cout<< "thankyou for using our service"<< endl;
            cout<< "press y and enter for starting again or else press any other alphabet and enter to exit"<< endl;
            char var2;
            cin>> var2;
            if (var2=='y')
            {
                continue;
            }
            else
            {
                break;
            }
        }
        else if(income_old==0)
        {
            cout<< "first go and earn some money then pay tax and we are happy to see your enthusiasm."<< endl<< "hoping to see you again"<< endl;
            cout<< "press y and enter for starting again or else press any other alphabet and enter to exit"<< endl;
            char var2;
            cin>> var2;
            if (var2=='y')
            {
                continue;
            }
            else
            {
                break;
            }
        }
        else if(income_old <= 500000)
        {
            cout<< "NO TAX"<<endl<< "thankyou use our service again"<<endl;
            cout<< "press y and enter for starting again or else press any other alphabet and enter to exit"<< endl;
            char var2;
            cin>> var2;
            if (var2=='y')
            {
                continue;
            }
            else
            {
                break;
            }
        }
        else
        {
            cout<< "have u invested under section 180c press y for yes and n for no then enter"<< endl;
            char investment_chk;
            cin >> investment_chk;
            if(investment_chk=='y')
            {
                cout<< "enter how much money have u invested"<< endl;
                float investment_money;
                cin >> investment_money;
                if(investment_money<150000)
                {
                    income_old= income_old - investment_money;
                }
                else
                {
                    income_old= income_old - 150000;
                }
            }
            cout<< "what is your source of income press s for salaried and o for others and then enter"<< endl;
            char src;
            cin >> src;
            if(src == 's')
            {
                income_old= income_old - 50000;
            }
            if(income_old <=1000000)
            {
                tax_old= (5*250000/100) + ((income_old-500000)*20/100);
            }
            else
            {
                tax_old= (5*250000/100) + (20*500000/100) + ((income_old-1000000)*30/100);
            }
            cout<< "your complete tax from method a is:"<< tax_old<<endl;
            double tax_new= 0;
            if(income_new<= 500000)
            {
                cout<< "CHEERS NO TAX FOR YOU"<< endl;
            }
            else if (income_new<= 750000)
            {
                tax_new= (5*250000/100) + ((income_new-500000)*10/100);
            }
            else if (income_new<= 1000000)
            {
                tax_new= (5*250000/100) +  (250000*10/100) + ((income_new-750000)*15/100);
            }
            else if (income_new<= 1250000)
            {
                tax_new =(5*250000/100) +  (250000*10/100) +  (250000*15/100) + ((income_new-1000000)*20/100);
            }
            else if (income_new<= 1500000)
            {
                tax_new =(5*250000/100) +  (250000*10/100) +  (250000*15/100) + (250000*20/100) + ((income_new-1250000)*25/100);
            }
            else
            {
                tax_new =(5*250000/100) +  (250000*10/100) +  (250000*15/100) + (250000*20/100) + (250000*25/100) + ((income_new-1500000)*30/100);
            }
            cout<< "your complete tax from method b is:"<<tax_new << endl;
            if(tax_new<tax_old)
            {
                cout<< "new tax system is better for u"<< endl;
            }
            else if(tax_new>tax_old)
            {
                cout<< "old tax system is better for u"<< endl;
            }
            else
            {
                cout<< "both are same"<< endl;
            }
            cout<< "press y and enter for starting again or else press any other alphabet and enter to exit"<< endl;
            char var3;
            cin>> var3;
            if (var3=='y')
            {
                continue;
            }
            else
            {
                break;
            }
        }

    }
    return 0;
}


