// Решите загадку: Сколько чисел от 1 до 1000 содержат как минимум одну цифру 3?
// Напишите ответ здесь:
#include <iostream>
using namespace std;
bool has3(int x) {
    while(x) {
        if(x%10==3)
            return true;
        x/=10;
    }
    return false;
}
int main() {
    int c=0;
    for(int i=1; i<=100; i++)
        if(has3(i))
            c++;
    cout<<c;
}
// Закомитьте изменения и отправьте их в свой репозиторий.
