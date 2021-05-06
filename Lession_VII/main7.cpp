 #include <iostream>
 #include <fstream>
 #include <cstring>

 #define IS_IN_RANGE(number, max)  (((number) >= 0 && (number) <= (max)))
 #define GET_ELEMENT(array, x, y) (*(*((array) + (y)) + (x)))
int main()
{

/*Задание 1, 7 урока
 Описать макрокоманду, проверяющую, входит ли переданное ей число в 
 диапазон от нуля (включительно) до 
 переданного ей второго аргумента (исключительно)
  */
/*Задание 2, 7 урока 
Описать макрокоманду, получающую доступ к элементу двумерного массива 
(организованного динамически) посредством разыменования указателей
*/

int** matrix = new int*[32]{};
for (size_t i = 0; i < 32; i++)
{
    matrix[i] = new int[32]{};
}
  matrix[4][16] = 42;
  std::cout << GET_ELEMENT(matrix, 16, 4 );
  std::cout << "\n";

   return 0;

} 