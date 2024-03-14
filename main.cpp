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
        
        if (x != "e") {
            y = stoi(x);
            z *= y;
            cout << "Result after multiplication: " << z << endl;
        }
    }
    while (x != "e");
    
    return 0;
}
