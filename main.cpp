#include <iostream>

using namespace std;

float metry;

float ile_cali(float m)
{
  return m*39.37;
}


int main()
{
    cout << "Podaj ile metrow: ";
    cin>>metry;

    cout<<"na cale: "<<ile_cali(metry)<<endl;


    return 0;
}
