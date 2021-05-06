 #include <iostream>
 #include <fstream>
 #include <cstring>
 #include <algorithm>
 #include <vector>
 #include <iterator>
  using namespace std;

  void readingFile(string[], ifstream &);
  
  void readingFile(string[], ifstream &infile)
    {   
    char next;
    infile.get(next);
        while (!infile.eof())  
        {
            cout << next;    
            infile.get(next);
        }
     } 

 /*
  void create_random_file(const char* filesname){
      std::ofstream stream {filesname};
      for (size_t i = 0; i < 50; i++)
   {
      char c = 'a' + (rand() % ('z' - 'a'));

      stream << c;
   }
   }
   */
int main () {
   /* 1 задание 6 урока
   Написать программу, которая создаст два текстовых файла, 
   примерно по 50-100 символов в каждом (особого значения не имеет);
   */   

      //create_random_file("files1.txt");
      //reate_random_file("files2.txt");



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



    /*2 задание 6 урока
     Написать функцию, «склеивающую» эти файлы, предварительно буферизуя 
     их содержимое в динамически выделенный сегмент памяти нужного размера.
     */

     string header1[50], header2[50] ; 

    int size1, size2, size3;

    ifstream Fin, Fin2;
    ofstream Fout;

    Fin.open("file1.txt");   
    Fin2.open("file2.txt");
    
    if (!Fin || !Fin2 )    
    {
        std::cout << "Не удалось открыть файл.\n";
        cin.ignore();
        return 1;
    }

    Fout.open("files1.txt");  
    if (!Fout)
    {
        std::cout << "Не удалось открыть файл.\n";
        cin.ignore();
        return 2;
    }

    std::cout << "Редактирование....\n" << endl;
    cin.ignore();

    std::cout << "Файл заголовков 1:\n" << endl;
    readingFile(header1, Fin);  
    cout << endl << endl;
    std::cout << "Файл заголовков 2:\n" << endl;
    readingFile(header2, Fin2); 
    cout << endl << endl;
    

    cin.ignore();



    return 0;
}     