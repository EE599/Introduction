#include <iostream>
#include <stdlib.h>

using namespace std;

int main(int argc, char *argv[])
{
    if (argc < 2) {
        cerr << "Please provide the number of elements to sort on the command line" << endl;
        return 1;
    }
    int n = atoi(argv[1]);
    int *data = new int[n];
    for (int i=0; i < n; i++) {
        data[i] = n-i;
    }
    for (int i=0; i < n; i++) {
        for (int j=0; j < n-i-1; j++) {
            if (data[j] > data[j+1]) {
                int temp = data[j];
                data[j] = data[j+1];
                data[j+1] = temp;
            }
        }
    }
    for (int i=0; i < n; i++) {
        cout << data[i] << " ";
    }
    cout << endl;
    return 0;
}
