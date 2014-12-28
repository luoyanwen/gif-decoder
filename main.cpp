//
//  main.cpp
//  GIF-T
//
//  Created by Alexander Hill on 12/28/14.
//  Copyright (c) 2014 Alexander Hill. All rights reserved.
//

#include <iostream>
#include "gif.h"

int main(int argc, const char * argv[]) {
    std::cout << "GIF Parser" <<  argc << endl;
    
    std::string filename;
    if (argc < 2)
        filename = "test.gif";
    else
        filename = argv[1];
    
    GIF gif(filename);

    return 0;
}