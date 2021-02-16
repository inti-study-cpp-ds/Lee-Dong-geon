#include <iostream>
#include <iomanip>
using namespace std;
int main(void)
{
    cout << "구구단 출력하기" << endl;
    cout<<setw(3);
    for (int i = 2; i < 10; i++)
    {
        for (int j = 2; j < 10; j++)
        {
            cout << i << " X " << j << " = " << i * j << setw(3);
        }
        cout << endl;
    }
}
