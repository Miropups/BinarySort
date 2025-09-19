

#include <iostream>
#include <bitset>
#include <vector>
using namespace std;


void listingOne() {
    unsigned int x = 25;
    const int n = sizeof(int) * 8; //колличество разрядов в числе типа int = 32
    unsigned mask = (1 << n - 1); //первый страший бит 32-разрядной сетки
    cout << "Начальный вид маски: " << bitset<n>(mask) << endl;
    cout << "Результат: ";
    for (int i = 1; i <= n; i++) {
        cout << ((x & mask) >> (n - i));
        mask = mask >> 1;
    }
    cout << endl;
    system("pause");


}
void listingTwo() {

    vector<int> numbers = {0, 5, 7, 4, 2 ,1}; // 2 3 5 6 7
    vector<int> sorted_vector = {};

    unsigned char counter = 0;
    for (int i = 0; i < 8; i++) {
        if (find(numbers.begin(), numbers.end(), i) != numbers.end()) {
            counter += pow(2, i);
        }
        
    }
    unsigned mask = 1;
    for (int i = 1; i <= 8; i++) {
        cout << ((counter & mask) >> (i-1));
        if (((counter & mask) >> (i-1)) == 1) {
            
            sorted_vector.push_back(i-1);
            
        }
        mask = mask  <<1;
        
        //число, i-1 разряд
        
    }
    cout << endl;
    for (int num : sorted_vector) {
        cout << num << " ";
    }
    cout << endl;
    
}

void listingThree(){
    vector<int> numbers = { 0, 5, 7, 4, 2 ,1, 24,42,23,11};
    vector<int> sorted_vector = {};

    const int len = 64;

    unsigned long long counter = 0;
    for (int i = 0; i < len; i++) {
        if (find(numbers.begin(), numbers.end(), i) != numbers.end()) {
            cout << "-----------ПРОВЕРКА" << endl;
            counter += pow(2, i);
            cout << counter << " --- ПРИБАВЛЯЕМ --- "<< i<<endl;
        }

    }
    
    unsigned long long mask = 1;
    

    for (int i = 1; i <= len; i++) {
        if (((counter & mask) >> (i - 1)) == 1){ //число, i-1 разряд
            sorted_vector.push_back(i - 1); }
        mask = mask << 1;
    }
    cout << endl;
    cout << "ВЫВОД ВСЕХ ЦИФР ---" << endl;
    for (int num : sorted_vector) {
        cout << num << " ";
    }
    cout << endl;
}
int main()
{
    /*
    
    unsigned char x = 191;
    int bit_number = 7;
    
    unsigned char mask = 1;
    cout << +x << endl;
    x = x & (~(mask << bit_number-1));
    
    cout << "Значение X - "<< int(x)<<endl; */


   //listingOne();
   //listingTwo();
   listingThree();
    
}

