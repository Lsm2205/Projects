 #include <iostream>
 #include <string>

 using std::cout;
 using std::cin;
 using std::endl;
  

int main () {
   /* 1 задание 5 урока
   Задать целочисленный массив, состоящий из элементов 0 и 1. 
   Например: [ 1, 1, 0, 0, 1, 0, 1, 1, 0, 0 ]. Написать функцию, 
   заменяющую в принятом массиве 0 на 1, 1 на 0 (** без применения 
   if-else, switch, () ? :);
   */                                   
  int arr[2];

        // Заполняем массив с клавиатуры
        for (int i = 0; i < 2; i++) {
            std::cout << "[" << i + 1 << "]" << ": ";
            cin >> arr[i];
        }

        // И выводим заполненный массив.
        std::cout << "\n Массив: ";

        for (int i = 0; i < 2; ++i) {
            std::cout << arr[i] << " ";
        }

        cout << endl;

        return 0;
}     