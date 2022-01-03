#include<iostream>
using namespace std;

class stack{
    private:
        int top;
        int arr[5];

    public:
        stack(){
            top=-1;
            for(int i=0;i<5;i++){
                arr[i]=0;
            }
        }
        bool isempty(){
            if (top==-1){
                return true;
            }
            else{
                return false;
            }
        }
        bool isfull(){
            if(top==4){
                return true;
            }
            else{
                return false;
            }
        }
        void push(int val){
            if(isfull()){
                cout<<"stack overflow"<<endl;
            }
            else{
                top++;
                arr[top]=val;
            }
        }
        int pop(){
            if(isempty()){
                cout<<"stack underflow"<<endl;
                return 0;
            }
            else{
                int popvalue=arr[top];
                arr[top]=0;
                top--;
                return popvalue;
            }
        }
        int count(){
            return(top+1);
        }
        int peek(int pos){
            if(isempty()){
                cout<<"stack underflow"<<endl;
            }
            else{
                return arr[pos];
            }
        }
        void change(int pos,int val){
            arr[pos]=val;
            cout<<"value changed at location "<<pos<<endl;
        }
        void display(){
            cout<<"All values in the stack are : "<<endl;
            for(int i=4;i>=0;i--){
                cout<<arr[i]<<endl;
            }
        }
};
int main(){
    stack s1;
    int option ,position,value;
    do{
        cout<<"what operation you want to perform? Select option number.Enter 0 to exit."<<endl;
        cout<<"1. Push()"<<endl;
        cout<<"2. Pop()"<<endl;
        cout<<"3. Isempty()"<<endl;
        cout<<"4. Isfull()"<<endl;
        cout<<"5. Peek()"<<endl;
        cout<<"6. count()"<<endl;
        cout<<"7. change()"<<endl;
        cout<<"8. Display()"<<endl;
        cout<<"9. clear screen"<<endl<<endl;
        cin>>option;
        switch(option){
            case 0:{
                break;
            }
            case 1:{
                cout<<"enter an item to push in the stack"<<endl;
                cin>>value;
                s1.push(value);
                break;
            }
            case 2:
            {
                cout<<"pop function called - popped value: "<<s1.pop()<<endl;
                break;
            }
            case 3:{
                if(s1.isempty()){
                    cout<<"stack is empty"<<endl;
                }
                else{
                    cout<<"stack is not empty"<<endl;
                    break;
                }
            }
            case 4:{
                 if(s1.isfull()){
                    cout<<"stack is full"<<endl;
                }
                else{
                    cout<<"stack is not full"<<endl;
                    break;
                }
            }
            case 5:{
                cout<<"enter position you want to peek: "<<endl;
                cin>>position;
                cout<<"peek function called - value at position "<<position<<" is "<<endl<<s1.peek(position)<<endl;
                break;
            }
            case 6:{
                cout<<"count function called - number of items in stack are: "<<s1.count()<<endl;
                break;
            }
            case 7:{
                cout<<"change function called - "<<endl;
                cout<<"enter position of item you want to change : "<<endl;
                cin>>position;
                cout<<endl;
                cout<<"enter value of item you want to change : "<<endl;
                cin>>value;
                s1.change(position,value);
                break;
            }
            case 8:{
                cout<<"display function called - "<<endl;
                s1.display();
                break;
            }
            case 9:{
                system("cls");
                break;
            }
            default:{
                cout<<"enter proper option number!!";
            }
        }
    }while(option!=0);

    return 0;

}