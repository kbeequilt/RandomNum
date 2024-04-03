#include <iostream>
#include <ctime>
using namespace std;

int main() {
    const int MAX = 20;
    srand(time(0));
    int numbers[MAX];
    for (int i =0; i < MAX; i++) {
        int r = rand() % 100;
        numbers[i] = {r};
    }

    for (int i =0; i < MAX; i++)
        cout << numbers[i] << " ";
    cout << endl;

    int smallest = numbers[0];
    int largest = numbers[0];
    for (int i = 0; i < MAX; i++){
        if (smallest > numbers[i])
            smallest = numbers[i];
        if(largest < numbers[i])
            largest = numbers[i];
    }
    cout << "smallest " << smallest << " "
         << "largest " << largest;
    return 0;
}
