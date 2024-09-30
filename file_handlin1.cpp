//code for file handling 
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    
    ofstream myname("demo1.txt");//file creation
    myname<<"learn with Ahsan";
    myname.close();
    string myText;
    ifstream my("demo1.txt");
while(getline (my,myText))
{
    cout<<myText<<endl;
}
myname.close();
return 0;
}