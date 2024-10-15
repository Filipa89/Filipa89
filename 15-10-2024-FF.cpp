#include <iostream>
#include <filesystem>
#include <string>

namespace fs = std::filesystem;

int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cerr << "Uso: " << argv[0] << " <extensão_do_arquivo>" << std::endl;
        return 1;
    }

    std::string extensao = argv[1];
    if (extensao.front() != '.') {
        extensao.insert(0, ".");
    }

    for (const auto& entrada : fs::directory_iterator(fs::current_path())) {
        if (entrada.is_regular_file() && entrada.path().extension() == extensao) {
            std::cout << entrada.path().filename().string() << std::endl;
        }
    }

    return 0;
}
