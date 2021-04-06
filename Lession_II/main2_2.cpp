#include <iostream>


using namespace std;

int main() 
{
    setlocale(0,"");
    
 
    char cells[9] = {'-','-','-','-','-','-','-','-','-',};
    
    int cell;
    int cell1;
    
    
    std::cout << " \n\n 2,3,4,5 задание 2 урока\n\n\n";
  
    std::cout << "Номера клеток:" << endl;
    std::cout << "-" << 1 << "-" << '|' << "-" << 2 << "-" << '|' << "-" << 3 << "-" << endl;
    std::cout << "-" << 4 << "-" << '|' << "-" << 5 << "-" << '|' << "-" << 6 << "-" << endl;
    std::cout << "-" << 7 << "-" << '|' << "-" << 8 << "-" << '|' << "-" << 9 << "-" << "\n" << endl;
 
 
    std::cout << "Игровое поле (--- пусто):" << endl;
    std::cout << "-" << cells[0] << "-" << '|' << "-" << cells[1] << "-" << '|' << "-" << cells[2] << "-"  <<  endl;
    std::cout << "-" << cells[3] << "-" << '|' << "-" << cells[4] << "-" << '|' << "-" << cells[5] << "-"  <<  endl;
    std::cout << "-" << cells[6] << "-" << '|' << "-" << cells[7] << "-" << '|' << "-" << cells[8] << "-"  <<  "\n" << endl;
    
    
    
     return 0;
 
 
}
