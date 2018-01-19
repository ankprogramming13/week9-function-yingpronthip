#include <iostream>

using namespace std;

void swapNumber (int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void Showvalue (int x, int y){
    cout << "This is x : " << x << endl;
    cout << "This is y : " << y << endl;
}

int main() {
    /*เขียนโปรแกรมรับค่าจำนวนเต็มบวกจากคีย์บอร์ด 2 จำนวน เก็บไว้ในตัวแปร และสลับค่าข้อมูลระหว่างตัวแปรสองตัวแปรดังกล่าว
    โดยกำหนดให้โปรแกรมสลับค่าข้อมูลจนกว่าผู้ใช้งานต้องการออกจากการทำงานของโปรแกรม
    และแบ่งการทำงานของโปรแกรมเป็นโปรแกรมย่อย
    */
    int a,b;
    cin>>a;
    cin>>b;
    Showvalue(a,b);

    int cmd;

    do{
        cin >> cmd;
        if (cmd=1){
            swapNumber(&a,&b);
            Showvalue(a,b);
        }
    }while(cmd != 2);

    return 0;
}
