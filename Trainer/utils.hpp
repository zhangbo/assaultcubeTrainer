//
//  utils.hpp
//  Headshot
//
//  Created by bob smith on 2021/1/24.
//

#ifndef utils_h
#define utils_h

#include <vector>
#include <fstream>

template <typename T>
int saveTensorToFile(std::vector<T> tensor, std::string outFilePath) {
    std::ofstream outFile;
    outFile.open(outFilePath, std::ios::binary | std::ios::binary);
    if (!outFile) {
        std::cerr << "Failed to open " << outFilePath << " for writing\n";
        return 1;
    }
    for (auto &i : tensor) {
        outFile.write(reinterpret_cast<char*>(&i), sizeof(T));
    }
    outFile.close();
    return 0;
}

#endif /* utils_h */
