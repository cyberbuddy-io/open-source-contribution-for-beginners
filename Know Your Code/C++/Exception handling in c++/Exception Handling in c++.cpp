// Exception handling in c++


/*

try.......try statement allows you to define a 
block of code to be tested for errors while it is being executed.

throw......throw keyword throws an exception when a problem is detected in try block

catch........catch statement allows you to define a block
of code to be executed, if an error occurs in the try block


*/












/*

Without Exception Hnadling.....
Run time error occurs and 
progarm will terminate 

*/




# include<iostream>
using namespace std;
int main()
{
    int a=10,b=10,c;
    c=a/(a-b);             // progarm will terminate from this  line 
    cout<<"Result: "<<c;

}

















# include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter two numbers: ";
    cin>>a>>b;

    try
    {
        if(b==0)
        throw b;

        else
        {
            c=a/b;
            cout<<"Result : "<<c<<endl;
        }
    }

    catch(int x)
    {
        cout<<"Can't divide by "<<x;
    }

}


















# include<iostream>
using namespace std;
int main()
{
    int a;
    string b;
    float c;

    cout<<"Enter a: ";
    cin>>a;

    cout<<"Enter sting: ";
    cin>>b;

    cout<<"Enter float: ";
    cin>>c;

    try 
    {
        if(a==2)
        {
            throw a;
        }

        else if(b=="hello")
        {
            throw b;
        }

        else if(c==2.7)
        {
            throw c;
        }

        else 
        {
            cout<<"int value: "<<a<<endl;
            cout<<"string value: "<<b<<endl;
            cout<<"float value: "<<c<<endl;
        }

    }

    catch(...)   
    {
        cout<<"Inavlid : ";
    }


}




// catch(...) ellipsis that can handle any type of data
















# include<iostream>
using namespace std;
int main()
{
    int a;
    string b;
    float c;

    cout<<"Enter a: ";
    cin>>a;

    cout<<"Enter sting: ";
    cin>>b;

    cout<<"Enter float: ";
    cin>>c;

    try 
    {
        if(a==2)
        {
            throw a;
        }

        else if(b=="hello")
        {
            throw b;
        }

        else if(c==2.7)
        {
            throw c;
        }

        else 
        {
            cout<<"int value: "<<a<<endl;
            cout<<"string value: "<<b<<endl;
            cout<<"float value: "<<c<<endl;
        }

    }

    catch(int q)
    {
        cout<<"Inavlid : ";
    }

    catch(string w)
    {
        cout<<"Invalid 2 : ";
    }

    catch(float e)
    {
        cout<<"Inavlid 3 : ";
    }


}





































# include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter the age: ";
    cin>>age;

    try
    {
        if(age>0 && age<18)
        {
            throw age;
        }

        else if(age>120)
        {
            throw age;
        }

        else if(age>=18 && age<=120)
        {
            cout<<"Eligible for voting. "<<endl;
        }

        else 
        {
            cout<<"Enter only int value. "<<endl;
        }
    }


    catch(...)
    {
      cout<<"Not eligible for voting. "<<endl;
    }
    
}























// Rethrowing an exception


/*

An exception thrown inside a catch block.
Caught by an outer catch block.
Throw keyword

*/








# include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter a and b: ";
    cin>>a>>b;

    try 
    {
        try 
        {
            cout<<"Start the program. "<<endl;
            if(b==0)
            {
                throw b;
            }

            else 
            {
                cout<<"Result : "<<a/b<<endl;
            }
        }

        catch(int q)
        {
            cout<<"Exception occurs : "<<endl;
            throw;
        }
    }

    catch(int i)
    {
        cout<<"Rethrow exception : "<<endl;
    }

    cout<<"End of the program : "<<endl;
    
}





















# include<iostream>
using namespace std;
void disp(int z, int v)
{
    try 
    {
        if(v==0)
        {
            throw v;
        }

        else {
            cout<<"Result : "<<z/v;
        }
    }

    catch(int f)
    {
        cout<<"Exception in function : "<<endl;
        throw;
    }

}



int main()
{
    try 
    {
        disp(20,0);
    }

    catch(int q)
    {
        cout<<"Exception in main : "<<endl;
    }

}





