#include <iostream>
#include<conio.h>

using namespace std;
	int a, b;
int main() {
    
    cout << "menentukan nilai terbesar dari variabel a dan b \n";
    cout << "masukkan nilai a : "; cin >> a;
    cout << "masukkan nilai b : "; cin >> b;
    
    if ( a > b ) 
        cout << "nilai terbesar   : " << "a" << endl;
    else
	cout << "nilai terbesar   : " << "b" << endl; 
    
    getch();
}