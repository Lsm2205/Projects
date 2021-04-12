 #include <iostream>

int main () {
   // 1  задание 3 урока                                      
 const int a  = 10, b = 20, c = 30, d = 40;   
 
    std::cout << a * (b + (static_cast<float>(c) / d));
    std::cout << "\n";
    return 0;
}     