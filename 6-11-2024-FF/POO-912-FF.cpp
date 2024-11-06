#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

class DVD {
private:
    float preco;
public:
    virtual void adquirir() = 0;
    virtual void devolver() = 0;
    virtual void recibo() = 0;
    virtual void imprimir() = 0;
};

class DVDdeVender : public DVD {
public:
    void adquirir() override {
        cout << "DVD adquirido para venda." << endl;
    }
    void devolver() override {
        cout << "DVD devolvido." << endl;
    }
    void recibo() override {
        cout << "Recibo de venda gerado." << endl;
    }
    void imprimir() override {
        cout << "DVD de Venda" << endl;
    }
};

class DVDdeAlugar : public DVD {
private:
    string dataDevolucao;
public:
    void adquirir() override {
        cout << "DVD alugado." << endl;
    }
    void devolver() override {
        cout << "DVD devolvido." << endl;
    }
    void recibo() override {
        cout << "Recibo de aluguel gerado." << endl;
    }
    void imprimir() override {
        cout << "DVD de Aluguel" << endl;
    }
};

class ColecaoDeDVDs {
private:
    vector<DVD*> dvds;
public:
    void acrescentarDVD(DVD* d) {
        dvds.push_back(d);
    }

    void consultarDVD(int index) {
        if (index >= 0 && index < dvds.size()) {
            dvds[index]->imprimir();
        } else {
            cout << "DVD não encontrado." << endl;
        }
    }

    void relatorio() {
        ofstream arquivo("relatorio_dvds.txt");
        for (auto& dvd : dvds) {
            dvd->imprimir();
            arquivo << "DVD registrado." << endl; // Simples exemplo de gravação
        }
        arquivo.close();
        cout << "Relatório salvo em 'relatorio_dvds.txt'." << endl;
    }

    void imprimirTodos() {
        for (auto& dvd : dvds) {
            dvd->imprimir();
        }
    }
};

void menu() {
    ColecaoDeDVDs colecao;
    int opcao;
    do {
        cout << "Menu de Opções:" << endl;
        cout << "1. Inserir DVD de Aluguel" << endl;
        cout << "2. Inserir DVD de Venda" << endl;
        cout << "3. Consultar DVD" << endl;
        cout << "4. Relatório" << endl;
        cout << "5. Sair" << endl;
        cout << "Escolha uma opção: ";
        cin >> opcao;

        switch (opcao) {
            case 1:
                colecao.acrescentarDVD(new DVDdeAlugar());
                break;
            case 2:
                colecao.acrescentarDVD(new DVDdeVender());
                break;
            case 3: {
                int index;
                cout << "Digite o índice do DVD para consultar: ";
                cin >> index;
                colecao.consultarDVD(index);
                break;
            }
            case 4:
                colecao.relatorio();
                break;
            case 5:
                cout << "Saindo..." << endl;
                break;
            default:
                cout << "Opção inválida. Tente novamente." << endl;
        }
    } while (opcao != 5);
}

int main() {
    menu();
    return 0;
}
