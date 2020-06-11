#include <iostream>    
using namespace std;    
 class ngali    
{    
private: int x, y, z;
public:    
void add()    
{    
cout<<"Masukan dua bilangan : ";    
cin>>x>>y;    
z= x*y;    
cout<<"Hasil perkalian kedua bilangan tersebut adalah : "<<z<<endl;    
}    
};    
int main()    
{    
ngali cross;    
cross.add();    
return 0;    
}    
