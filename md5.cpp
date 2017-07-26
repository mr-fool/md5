#include <iostream>
#include <thread>
#include <string>
using namespace std;

//Taking user input

string userinput(){
    string message;
    cout << "Enter the message you want to encrypt!" << endl;
    getline(cin,message);
    return message;
}

int main()
{
    //creating thread
    std::thread input(userinput);

    //All variables are unsigned 32 bit and wrap modulo 2^32 when calculating
    unsigned int[64] s, K;
    unsigned int i;

    //s specifies the per-round shift amounts

    s[0-15] = { 7, 12, 17, 22,  7, 12, 17, 22,  7, 12, 17, 22,  7, 12, 17, 22 };
    s[16-31] = { 5,  9, 14, 20,  5,  9, 14, 20,  5,  9, 14, 20,  5,  9, 14, 20 };
    s[32-47] = { 4, 11, 16, 23,  4, 11, 16, 23,  4, 11, 16, 23,  4, 11, 16, 23 };
    s[48-63] = { 6, 10, 15, 21,  6, 10, 15, 21,  6, 10, 15, 21,  6, 10, 15, 21 };

    //Initialize variables:
    int a0 = 0x67452301;   //A
    int b0 = 0xefcdab89;   //B
    int c0 = 0x98badcfe;   //C
    int d0 = 0x10325476;   //D

    //synchronize threads
    input.join();


    return 0;
}

