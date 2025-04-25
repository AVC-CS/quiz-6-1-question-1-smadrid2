#include <iostream>
using namespace std;

void getTwoValues(int &begin, int &end);
int getNextPrime (int begin);
int getPrevPrime(int end);
int isPrime(int num);

void getTwoValues(int &begin, int &end) {
    do {
        cout << "Enter two integers (bin < end) : ";
        cin >> begin >> end; 
        if (begin >= end) {
            cout << "Invalid input. Begin must be less than end." << endl;

        }
    } while (begin >= end);
}

int isPrime (int num) {
    if (num <= 1)
        return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int getNextPrime(int end) {
    int num = end -1;
    while (num > 1) {
        if (isPrime(num)){
        return num;
        }
        num --;
    }
    return -1;
    
}