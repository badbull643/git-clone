#include<bits/stdc++.h>
#include <utils.h>
#include <fstream>
/*


so the hash structure,

so 


each object/commit contains a head,


*/


int main() {
    //so the main thing is reading the file and spitting out a hash
    //read the file.
    //so the read file
    ifstream file("testhashfile.txt"); 
    stringstream buffer;

    buffer << file.rdbuf();

    std::string content = buffer.str();

    std::cout << "the hashed file: " << sha256(content) << '\n';
    
}

