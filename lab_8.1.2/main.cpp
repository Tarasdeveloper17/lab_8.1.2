#include <iostream>
#include <string>
#include <string.h>
using namespace std;

void Change(char* s, char c, char c1,int i)
{
    char d[4] = "***";
    if ((c == s[i]  && c1 == s[i+1]) ||( c1 == s[i] && c == s[i+1]))
    {
        s[i] = 0;
        strcat(s, d);
        
    }
    
    if(s[i] != '\0')
    {
        Change(s, c, c1,i+1);
    }
 }
int main()
{
    char s[10];
    cout << "Enter string:" << endl;
    cin.getline(s, 10);
    char c = 'n';
    char c1 = 'o';
    cout << "Before :"<< s<<endl;
    Change(s, c, c1,0);
    cout<<"After: "<<s<<endl;
    return 0;
}

