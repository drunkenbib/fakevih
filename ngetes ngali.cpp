#include <iostream>    
using namespace std;    
 class ngali    
{    
private: int a, b, x;
public:    
void add()    
{    
cout<<"Masukan bilangan pertama : ";    
cin>>a;
cout<<"Masukan bilangan kedua : ";
 cin>>b;
x= a*b;    
cout<<"Hasil perkalian kedua bilangan tersebut adalah : "<< x <<endl;    
}    
};    
int main()    
{    
ngali cross;    
cross.add();    
return 0;    
}    

