#include<iostream>
#include<string>
using namespace std;

int main(){
    string me, doctor;
    getline(cin, me);
    getline(cin, doctor);

    if(me.size() >= doctor.size()){
        cout << "go" << endl;
    }else{
        cout << "no" << endl;
    }

    return 0;
}
