#include <iostream>

using namespace std;

int main()
{
    int
    option;

    cout << "1. Interest"<<endl<<"2. Depreciation"<<endl;
    cout << "Please choose the option you want "<<endl;
    cin >> option;

    while (option<1 ||option>2){
        cout<<"Please input the correct number"<<endl;
        cin>>option;
    }
    while (option == 1){
        cout<< "Welcome to the interest section"<<endl;
        option += 2;
    }
    while (option == 2){
            cout<< "Welcome to the depreciation section"<<endl;
            option++;
    }
    return 0;
}
