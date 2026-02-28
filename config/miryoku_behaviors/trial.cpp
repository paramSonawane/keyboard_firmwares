#include<iostream>

#define SWITCH(ROW, COL) 12 * ROW + COL

int main(){
    std::cout<<SWITCH(4, 3);
    //std::cout<<"hi"<<std::endl;
    return 0;
}
