#include"iostream"
#include"windows.h"
#include"mmsystem.h"
#include"stdio.h"

using namespace std;
int main()
{
    char ch[100];
    cout<<"************Welcome To AI************"<<endl;
    cout<< "You can open notepad -> open notepad "<<endl << "You can open cmd -> open cmd" << endl<<"You can open calculator-> open calculator"<<endl <<"You can open registry editor->open registry editor"<< endl;
    gets(ch);
    STARTUPINFO start = {0};
    PROCESS_INFORMATION processInfo = {0};
    while(1){
        if(strcmp(ch,"open notepad")==0)
        {
            CreateProcess(TEXT("C:\\WINDOWS\\system32\\notepad.exe"),NULL,NULL,NULL,false,NULL,NULL,NULL,&start,&processInfo);
            exit(0);
        }
        else if(strcmp(ch,"open calculator")==0)
        {
            CreateProcess(TEXT("C:\\WINDOWS\\system32\\calc.exe"),NULL,NULL,NULL,false,NULL,NULL,NULL,&start,&processInfo);
            exit(0);
        }
        else if(strcmp(ch," open registry editor")==0)
        {
            CreateProcess(TEXT("C:\\WINDOWS\\system32\\regedt32.exe"),NULL,NULL,NULL,false,NULL,NULL,NULL,&start,&processInfo);
            exit(0);
        }
        else if(strcmp(ch,"open cmd")==0)
        {
            CreateProcess(TEXT("C:\\WINDOWS\\system32\\cmd.exe"),NULL,NULL,NULL,false,NULL,NULL,NULL,&start,&processInfo);
            exit(0);
        }
    }
}
