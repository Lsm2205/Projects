 #include <iostream>
 #include <fstream>
 #include <cstring>
using namespace std;

int main () {
   /* 1 задание 6 урока
   Написать программу, которая создаст два текстовых файла, 
   примерно по 50-100 символов в каждом (особого значения не имеет);
   */                                   
 
   FILE* f = fopen("files_1.txt", "w");
  
   fclose(f);
   
   std::ofstream out;          
    out.open("files_1.txt"); 
    
     
        cout<<"Введите текст в files_1.txt:";
           cin.getline(a);
        //f<<a;
       out << &a << std::endl;

     
    //std::cout << "End of program" << std::endl;
    
    //l.close();
    //system("pause");
    return 0;
}     