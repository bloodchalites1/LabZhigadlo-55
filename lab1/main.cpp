#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int num, i=0;
    cout << "¬ведите число " << endl;
    cin >> num;
    for (int i=0; i<=num; i++)
    {
        cout<<i<<endl;
    }

    while (i<num)
    {
        if (i%2 == 0) {
            cout<<i<<endl;
        }
        else{
            cout<<"b"<<endl;
        }
        i++;
    }

    for (int i=1; i<=num; i++)
    {
        if(i%1000==0)
    {
        cout<<"ѕрошла " <<i/1000<< " тыс€ча циклов"<< endl;
    }
    }
}
