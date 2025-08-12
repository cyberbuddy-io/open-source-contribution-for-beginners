#include <iostream>
#include <string.h>
using namespace std;
class vowel
{
private:
    int i, count = 0;
    char str[100];

public:
    void func()
    {
        cout << "Enter  the string : ";
        // cin.getline(str,100);
        gets(str);
        for (i = 0; str[i]; i++)
        {
            if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
            {
                count++;
            }
        }
        cout << "Total number of vowels in the string = " << count;
    }
};
int main()
{
    vowel obj;
    obj.func();
    return 0;
}