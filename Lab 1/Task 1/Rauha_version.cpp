#include <iostream>
using namespace std;
int main(){
    char grade;
    cout<<"Enter your grade: ";
    cin>>grade;
    if(grade=='A'){
        cout<<"Excellent!";
    }
    else if(grade=='B'){
        cout<<"Good!";
    }
    else if(grade=='C'){
        cout<<"Satisfactory!";
    }
    else if(grade=='D'){
        cout<<"Pass!";
    }
    else if(grade=='F'){
        cout<<"Fail!";
    }
    else{
        cout<<"Invalid grade!";
    }
} return 0;
}


Got it — I’ll leave it exactly as-is for now.
