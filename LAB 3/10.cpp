#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

struct Part
{
    std::string SerialNumber;
    int YearofManufacturing;
    std::string MaterailType;
    int Quantity;
};

const int SIZE = 60;
Part parts[SIZE];

std::string materials[3] = {"Steel","Aluminium","Iron"};

void InitializeParts()
{
    srand(time(0));

    for(int i=0;i<SIZE;i++)
    {
        parts[i].SerialNumber=std::string(1 , 'A' + i /10) + std::string(1 , 'A' + i % 10) + std::to_string(i%10);
        parts[i].YearofManufacturing=rand() % 29 + 1990;
        parts[i].MaterailType=materials[rand() % 3];
        parts[i].Quantity=rand() % 1000 + 1;
    }
}

void DisplayParts(std::string start ,std::string end)
{
    for(int i=0;i<SIZE;i++)
    {
        if(parts[i].SerialNumber<=end)
        {
            std::cout<<"Serial Number :"<<parts[i].SerialNumber<<"\n";
            std::cout<<"Yaers of Manufacturing :"<<parts[i].YearofManufacturing<<"\n";
            std::cout<<"Material Type :"<<parts[i].MaterailType<<"\n";
            std::cout<<"Quantity :"<<parts[i].Quantity<<"\n\n";
        }
    }
}
 int main()
 {
    InitializeParts();
    DisplayParts("BB1" , "CC6");
    return 0;
 }

