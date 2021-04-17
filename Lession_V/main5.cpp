 #include <iostream>
 #include <string>

 using std::cout;
 using std::cin;
 using std::endl;

 void invert(unsigned numbers[], size_t length) {
     for (size_t i = 0; i < length; i++){
         if (numbers[i] == 0) {
             numbers[i] =1;
          } else if (numbers[i] == 1){
          numbers[i] = 0;
     }
    }
 } 

int main () {
   /* 1 задание 5 урока
   Задать целочисленный массив, состоящий из элементов 0 и 1. 
   Например: [ 1, 1, 0, 0, 1, 0, 1, 1, 0, 0 ]. Написать функцию, 
   заменяющую в принятом массиве 0 на 1, 1 на 0 (** без применения 
   if-else, switch, () ? :);
   */                                   
  
  unsigned nums[]{1, 1, 0, 0, 1, 0, 1, 1, 0, 0};
    invert(nums, 10);
    for (size_t i =0 ; i < 10; i++) {
        std::cout << nums[i] << " " ;
    }
    std::cout << '\n';
     
        

        return 0;
}     