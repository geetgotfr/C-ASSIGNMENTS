/* A variable x=10 had address 0x100 and this address is stored in pointer variable p. 
Now if we change the value of x to 20, then the value of x will be changed to 20 but the address of x will remain same i.e. 0x100. 
So the value of pointer variable p will also remain same i.e. 0x100. But if we change the value of pointer variable p to 0x200, 
then the value of pointer variable p will be changed to 0x200 but the value of x will remain same i.e. 20. 
So changing the value of a variable does not change the value of its pointer and changing the value of a pointer does not change the value of its variable.

variable ke aage star lagana matlab ki vo pointer hai and compiler also knows this,
 eg *p is a pointer variable and p is a pointer to a variable.
 address is represented in hexadecimal
 
 x aur *p same cheese hai 
 
 p stores an address
 *p accesses the value at that address 
change(x) means changing the value of variable x but the address of x will remain same 

 #include<stdio.h>

 int main(){
    int x=10;
    int *p=&x;
    printf("x=%d\n",x);
    printf("p=%p\n",p);
    printf("x=%d\n",*p); // pointer variable declaration
    x=30;
    printf("x=%d\n",x);
    *p=60; // changing the value of x using pointer variable
    printf("x=%d\n",x);
    return 0;
} 

void change(int x){
    x=100;
}

int main(){
    int x=10;
    change(x);
  return x != 10;
}
*/

#include <stdio.h>

static void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main(void)
{
    int a = 10;
    int b = 20;

    printf("Before swapping a=%d b=%d\n", a, b);
    swap(&a, &b);
    printf("After swapping a=%d b=%d\n", a, b);
    return 0;
}