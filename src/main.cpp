#include<bits/stdc++.h>
#include "utils.h"
#include <fstream>
/*


so the hash structure,

so the hashing works,


so also need the adressing part,
next thing i need too get working is the blob commit model,

where,


a commit stores a header basically,

so reading a set of files/ adding them too the string,

allocating a file too the blob thing

so look at a folder structure,
basically,

how are things allocated? 

so 

assign each element a structure,

so if file type -> folder -> tree hash of its contents,

//create the blobs first,

so 




*/


int main() {
    //so the main thing is reading the file and spitting out a hash
    //read the file.
    //so the read file
    std::ifstream file("testhashfile.txt"); 
    std::stringstream buffer;

    buffer << file.rdbuf();

    std::string content = buffer.str();

    std::cout << "the hashed file: " << sha256(content) << '\n';
    
    
    
}

