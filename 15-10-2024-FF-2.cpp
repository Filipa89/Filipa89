#include <iostream>
#include <filesystem>
#include <string>
#include <iomanip> // Para manipulação de formato

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

    // Cabeçalho da tabela
    std::cout << std::left << std::setw(30) << "Nome_ficheiro" << "Tamanho (bytes)" << std::endl;
    std::cout << std::string(50, '-') << std::endl;

    for (const auto& entrada : fs::directory_iterator(fs::current_path())) {
        if (entrada.is_regular_file() && entrada.path().extension() == extensao) {
            std::cout << std::left << std::setw(30) << entrada.path().filename().string()
                      << entrada.file_size() << std::endl;
        }
    }

    return 0;
}