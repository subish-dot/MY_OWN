#include<iostream>
using namespace std;



int string_to_number(string number)
{
int num=0,temp;
for (int i=0;number[i]!='\0';i++)
{
 temp=number[i]-48;
 num=num*10+temp;
}
return num;
}



string number_to_string(int number)
{
    int no_of_digits=0;
    int temp=number;
    while(temp)
    {
        temp=temp/10;
        no_of_digits++;
    }

    char str[no_of_digits];
    while(no_of_digits)
    {
        no_of_digits--;
        temp=number%10;
        number=number/10;
        str[no_of_digits]=temp+48;
    }
    return str;
}



string multiply(string num1,string num2)
{
    int a=string_to_number(num1);
    int b=string_to_number(num2);
    int c=a*b;
    string ans=number_to_string(c);
    return ans;
}




int main()
{
    string num1,num2,result;
    cout<<"enter the first number : ";
    cin>>num1;
    cout<<"enter the second number : ";
    cin>>num2;
    result=multiply(num1,num2);
    cout<<"result : "<<result;
}