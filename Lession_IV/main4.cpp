 #include <iostream>

  

int main () {
   /* 1 задание 4 урока
   Написать программу, проверяющую что сумма двух чисел лежит в пределах от 10 до 20 
   (включительно), если да – вывести true, в противном случае – false;
   */                                   
  int x = 0;
  int y = 0;
  int z = 0;
  
  std::cout << "Введите первое число от 1 до 10\n";
  std::cin >> x;
  std::cout << "Введите второе число от 1 до 10\n";
  std::cin >> y;
  z = x + y;
  std::cout << z << "\n"; 
  
  if (z >= 10 && z <= 20)
      {
          std::cout << "true\n";
      }
  else 
     {
           std::cout << "fasle\n";
     }





    return 0;
}     