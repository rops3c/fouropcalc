#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    float num1, num2;
    char op;
    
cout<<"Enter first number: ";
cin>>num1;
cout<<"Enter operator: ";
cin>>op;
cout<<"Enter Second number: ";
cin>>num2;

int summ;

if(op == '+'){
    summ = num1 + num2;  
}else if(op == '-'){
    summ = num1 - num2;
}else if(op == '/'){
    summ = num1 / num2;
}else if(op == '*'){
    summ = num1 * num2;
}else
{
    cout<<"uknown operator " <<endl;
}
// You CAn Uncomment 
//setprecison
//std::cout << std::setprecision(5) << summ << '\n';
//setiosflags
//cout << setiosflags(ios::oct) << summ << '\n';

cout<<"The result is  "  <<  summ  <<endl; 
    return 0;
}
