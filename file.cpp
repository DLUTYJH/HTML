#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
const char *filename ="111.txt";
const int SIZE=100;
int main()
{
    ifstream ifile(filename,ios::in);
	char *str=new char[SIZE];
    long wordNum=0,i=0;
	while(!ifile.eof())
    {
		ifile.getline(str,SIZE);
		i=0;
		if(str[0]== 32) i=1;
        for(;i<strlen(str);i++)
			if(str[i]==32||str[i]==33 ||str[i]==63||str[i]==46||str[i]==44||str[i]==58)
                    wordNum+=1;
    }
    ifile.close();
	delete[]str;
    cout<<"word number="<<wordNum<<endl;
}
