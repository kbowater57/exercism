#include "reverse_string.h"
#include<iostream>


namespace reverse_string {

std::string reverse_string(std::string str)
{
    if (str.length() == 0){return str;};

    // for ( int i = str.length() -1 ; i < 0 ; i--){
    //     char c = str[i];
    //     str.erase(i,1);
    //     str.push_back(c);
    //     std::cout << str;
    // }

    // return str;
    
    std::string str2;

    while (!str.empty()){
        str2 += str.back();
        str.pop_back();
    }
    
    return str2;

}
}  // namespace reverse_string
