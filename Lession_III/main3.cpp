 #include <iostream>

  extern const int a, b, c, d;

int main () {
   // 1  задание 3 урока                                      
 //const int a  = 10, b = 20, c = 30, d = 40;   
 
    std::cout << a * (b + (static_cast<float>(c) / d));
    std::cout << "\n";
    
    // 2 задание 3 урока

    int y = 5;

    std::cout << ((y > 21) ? (2*(y - 21)) : (y - 21));
    std::cout << "\n";
    
    // 4 задание 3 урока  списал из группы

    int array[3][3][3]{};
    array[1][1][1] = 142; 
    int* ptr = &array[1][1][1];
    std::cout << *ptr;
    std::cout << "\n";

    return 0;
}     