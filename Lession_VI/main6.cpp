 #include <iostream>
 #include <fstream>
 #include <cstring>
 #include <algorithm>
 #include <vector>
 #include <iterator>
  //using namespace std;

  /* void create_random_file(const char* filesname){
      std::ofstream stream {filesname};
      for (size_t i = 0; i < 50; i++)
   {
      char c = 'a' + (rand() % ('z' - 'a'));

      stream << c;
   }
   }
*/
int main (int argv,char** argc) {
   /* 1 задание 6 урока
   Написать программу, которая создаст два текстовых файла, 
   примерно по 50-100 символов в каждом (особого значения не имеет);
   */   

      //create_random_file("files1.txt");
     // reate_random_file("files2.txt");



    /*  Пытался сделать с вводом текста, но в результате получал  - набор символов.
    FILE* f = fopen("files_1.txt", "w");
  
   fclose(f);
   
   std::ofstream out;          
    out.open("files_1.txt"); 
    
     
        cout<<"Введите текст в files_1.txt:";
           cin.getline(a);
        //f<<a;
       out << &a << std::endl;
    */     
    //std::cout << "End of program" << std::endl;
    
    //l.close();
    //system("pause");
    
    if(argv<3)
    {
      std::cout << "Неправильные входные параметры" << std::endl;
      return -1;
    }



  //читаем файл
  std::fstream file1;
  std::fstream file2;
  file1.open(argc[1]);
  file2.open(argc[2]);



  if((!file1)||(!file2))
    {
      std::cout << "Не удается открыть один из файлов" << std::endl;
    }



  std::istream_iterator<std::string> in1(file1);
  std::istream_iterator<std::string> in2(file2);
  std::istream_iterator<std::string> eof1;
  std::istream_iterator<std::string> eof2;



  std::vector<std::string> vector1(in1,eof1);
  std::vector<std::string> vector2(in2,eof2);



  std::vector<std::string> names;



  std::copy(vector1.begin(),vector1.end(),back_inserter(names));
  std::copy(vector2.begin(),vector2.end(),back_inserter(names));



  //std::copy(names.begin(),names.end(),std::ostream_iterator<std::string>(std::cout," "));



  std::sort(names.begin(),names.end());
  auto it=std::unique(names.begin(),names.end());



  names.erase(it);



  std::copy(names.begin(),names.end(),std::ostream_iterator<std::string>(std::cout," "));

    return 0;
}     