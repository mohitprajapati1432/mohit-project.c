#include"student.h"
template<typename dtype>
bool sortstudents(dtype type1)
{
    ifstream ifobj1;
    ifobj1.open("storage.dat",ios::binary);
    student std,stuArr[100],temp;
    int size=0;
    if (!ifobj1)
    {
        cout<<"error unable to open file !!"<<endl;
        exit(0);
    }
    while (ifobj1.read(reinterpet_cast<char>))
    {
        /* code */
    }
    
    

}