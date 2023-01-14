#include "student.h"

class user
{
    public:
    char uname[30];
    char pass[10];
};
bool isValid(char username[],char password[])
{
    user temp;
    ifstream ifobj;
    ifobj.open("admin.dat",ios::binary);

    if (!ifobj)
    {
        cout<<"error unable to open file !"<<endl;
        exit(0);
    }
    
    while (ifobj.read(reinterpret_cast<char *>(&temp),sizeof(user)))
    {  
        if (!strcmp(temp.uname,username) && !strcmp(temp.pass,password))
        {
            cout<<endl<<"Login succesfully!"<<endl;
            ifobj.close();
            return true;
        }
           
    }
    cout<<endl<<"invalid username or password !"<<endl;
    ifobj.close();
    return false;
}
void saveuser()
{
    ofstream ofs;
    ofs.open("admin.dat",ios::binary|ios::app);
    user u1;
    cout<<"Enter Username :";
    cin.getline(u1.uname,50);
    cout<<"Enter Password :";
    for (int i = 0; i < 9; i++)
    {
        u1.pass[i]=getch();
        cout<<"*";
    }
    u1.pass[9]='\0';
    ofs.write(reinterpret_cast<char*>(&u1),sizeof(user));
    cout<<endl;
    ofs.close();
}
// int main()
// {
//     saveuser();

//     char name[50]="mohit",pass[]="mohit@123";
//     isValid(name,pass);
//     return 0;
// }