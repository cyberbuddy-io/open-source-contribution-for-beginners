# include <iostream>
using namespace std;
class student{
    protected:
    int rollno;
    public:
    void setroll(int a){
        rollno=a;
    }
    void getrollno(){
        cout<<"The roll number is "<<rollno<<endl; 
    }
};
class exam :public student{
      protected:
      int physics,maths;
      public:
          void setmarks(int a,int b){
              physics=a,maths=b;
          }
          void getmarks(){
              cout<<"your physics marks are "<<physics<<" and your maths marks are "<<maths<<endl;
          }
          
};
class result:public exam{
    public:
        void printresult(){
            
            cout<<"the result of student of roll number "<<rollno<<" : "<<endl;
            getmarks();
            cout<<"The total percentage is "<<(physics+maths)/2<<endl;
        }
};
int main(){
      result sam;
      sam.setroll(515);
      sam.setmarks(94,96);
      sam.printresult();
return 0;
}