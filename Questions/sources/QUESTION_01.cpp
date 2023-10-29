//
// Created by Mahros on 10/30/2023.
//

#include <vector>
#include <iostream>
using namespace std;
#include "../../mypackage.cpp"
#include "../headers/QUESTION_01.h"

void QUESTION_01(){

    /* Question
     * What is the value of x after two-second nested loops?
     * */

    string spaces = repeat(" ", 10);
    print(vector<string>{"Value", "Address"}, spaces);


    for(int x = 1; x <= 5; x++){
        print(x, spaces, "");
        print(&x);
        for(int x = 6; x <= 10; x++){
            print(repeat(" ", 4), "", "");
            print(x, spaces, "");
            print(&x);
            for(int x = 11; x <= 15; x++){
                print(repeat(" ", 4*2), "", "");
                print(x, spaces, "");
                print(&x);
                break;
            }
            break;
        }
        print(x, spaces, ""); print(&x);
        break;
    }

    /* Solution
     * Compiler define x for every loop with new Address:
        * address of x of first loop = 0x5e5b7ff16c.
        * address of x of second loop = 0x5e5b7ff168.
        * address of x of third loop = 0x5e5b7ff164.
    * So, x is defined -only- in the scope of current loop: inside Kurly Brackets.
    * When we print the value of x at the end of first loop; we got 0x5e5b7ff16c -x of the first loop-.
     * */


}