#include <iostream>
#include <string>
#include "timestamp_FF.h"
using namespace std;

// Classe base Funcionario
class Funcionario {
protected:
    string nome;
    string nomeContribuinte;

public:
    Funcionario(string nome, string nomeContribuinte) : nome(nome), nomeContribuinte(nomeContribuinte) {}

    virtual void exibirInformacoes() const {
        cout << "Nome: " << nome << endl;
        cout << "Nome de Contribuinte: " << nomeContribuinte << endl;
    }
};

// Classe derivada Freelancer
class Freelancer : public Funcionario {
private:
    int horasTrabalhadas;
    double valorPorHora;

public:
    Freelancer(string nome, string nomeContribuinte, int horasTrabalhadas, double valorPorHora)
        : Funcionario(nome, nomeContribuinte), horasTrabalhadas(horasTrabalhadas), valorPorHora(valorPorHora) {}

    double calcularPagamento() const {
        return horasTrabalhadas * valorPorHora;
    }

    void exibirInformacoes() const override {
        Funcionario::exibirInformacoes();
        cout << "Horas Trabalhadas: " << horasTrabalhadas << endl;
        cout << "Valor por Hora: " << valorPorHora << endl;
        cout << "Pagamento Total: " << calcularPagamento() << endl;
    }
};

// Classe derivada Efetivo
class Efetivo : public Funcionario {
private:
    double salarioBase;
    double bonificacaoAnual;

public:
    Efetivo(string nome, string nomeContribuinte, double salarioBase, double bonificacaoAnual)
        : Funcionario(nome, nomeContribuinte), salarioBase(salarioBase), bonificacaoAnual(bonificacaoAnual) {}

    double calcularSalarioAnual() const {
        return salarioBase * 12 + bonificacaoAnual;
    }

    void exibirInformacoes() const override {
        Funcionario::exibirInformacoes();
        cout << "Salario Base Mensal: " << salarioBase << endl;
        cout << "Bonificação Anual: " << bonificacaoAnual << endl;
        cout << "Salario Anual Total: " << calcularSalarioAnual() << endl;
    }
};

int main() {
    meuCarimbo();
    Freelancer freelancer("João Silva", "123456789", 160, 20.0);
    Efetivo efetivo("Maria Oliveira", "987654321", 3000.0, 5000.0);

    cout << "Informações do Freelancer:" << endl;
    freelancer.exibirInformacoes();

    cout << "\nInformações do Efetivo:" << endl;
    efetivo.exibirInformacoes();

    return 0;
}
