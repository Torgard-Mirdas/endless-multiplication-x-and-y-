#include <iostream>
#include <string>

using namespace std;

int main()
{
    string x;
    int y = 0;
    
    cout << "Enter the first number: ";
    cin >> x;
    
    do 
    {   
        int z = stoi(x);
        cout << "Your previous number is: " << x << endl;
        cout << "Enter next number or 'e' to exit: ";
        cin >> x;
        cout<<x << "x" << endl;
        
        if (x != "e") {
            y = stoi(x);
            cout << y << " y "<< endl;
            z *= y;
            cout<<z << "z " << endl;
            cout << "Result after multiplication: " << z << endl;
            x=to_string(z);
        }
    }
    while (x != "e");
    
    return 0;
}
