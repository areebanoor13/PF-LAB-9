#include<iostream>
using namespace std;

int main() {
    int arr[3]; 

    cout << "Enter elements one by one:" << endl;
    
    for (int i = 0; i < 3; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    cout << "\nElements in forward order:" << endl;
    for (int i = 0; i < 3; i++) {
        cout << arr[i] << " ";
    }


    cout << "\n\nElements in reversed order:" << endl;
    for (int i = 2; i >= 0; i--) {
        cout << arr[i] << " ";
    }

    return 0;
}
