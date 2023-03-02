#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    int Input_a ;
    int index[32] ; 
    cin >> Input_a ;
    int Input_b = Input_a;//這行的用意為先把輸入的十進位數字assign給等一下要轉為16進位的數字，因為如果現在不assign,Input_a最後就會變成0
     //第11到19行為轉換二進位制的程式碼
    int current_number = 0;
    for(int i= 0; Input_a > 0; i++){//如果條件設為>=0，則會變為無窮迴圈
        index[i] = Input_a % 2;
        Input_a /= 2;
        current_number ++;
    }
    for(int j = current_number -1 ;j >= 0; j--){
        cout << index[j];
    }
    cout <<" "<<"This is the result of binary numbering"<< endl;
    //第21行到第行為轉為16進位的程式碼
    string hexadecimal;
    int current_state; 
    while(Input_b > 0){
        int point = Input_b % 16;
        if(point >= 10){
            hexadecimal.push_back(point-10 +'A');
        }
        else{
            hexadecimal.push_back(point + '0');
        }
        current_state ++;
        Input_b /= 16;
    }
    reverse(hexadecimal.begin(), hexadecimal.end());
    cout << hexadecimal <<" "<< " This is the result of hexadecimal numbering. "; 
    return 0;
}
