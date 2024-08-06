#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> numbers(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
    }

    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += numbers[i];
    }

    double average = static_cast<double>(sum) / n;
    cout << "The average is: " << average << endl;

    return 0;
}
