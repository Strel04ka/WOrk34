#include <iostream>
using namespace std;

int main()
{
    double x;
    double y;
    double R;
    
    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;


    R = sqrt(x * x + y * y); // Ввести "R" з клавіатури не можливо, оскільки його значення напряму залежить від значень "x" && "y".
                             // Насильне введення довільного значення "R" може спричинити дисфункцію.
    if ((y <= sqrt(R * R - x * x) && y>=0 && x<=0) || (y >= sqrt(R*R-x*x) && y<=0 && x<=0) || (y<=x+R && y>=0 && x<=0))
    {
        cout << endl << "Yes";
    }
    else 
    {
        cout <<endl<< "No";
    }
    cin.get();
    return 0;
}