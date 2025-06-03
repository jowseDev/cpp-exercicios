#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;
struct Produto
{
    int codigo;
    float precoCusto;
    float precoVenda;
    int estoque;
};
float calcularLucro(const Produto p)
{
    return (p.precoVenda - p.precoCusto) * p.estoque;
}

int main()
{
    int n;

    cout << "Programa para cadastrar Produtos e calcular LUCRO.\n"
         << endl;

    cout << "Quantos produtos voc� vai cadastrar? ";
    cin >> n;

    Produto produtos[n];

    ofstream arquivo("produtos_lucro.txt");

    arquivo << "Programa para cadastrar Produtos e calcular LUCRO.\n"
            << endl;
    arquivo << "Quantos produtos voc� vai cadastrar?\n"
            << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "\nINFORME O C�DIGO DO PRODUTO: ";
        cin >> produtos[i].codigo;
        cout << "INFORME O PRE�O DE CUSTO DO PRODUTO: ";
        cin >> produtos[i].precoCusto;
        cout << "INFORME O PRE�O DE VENDA DO PRODUTO: ";
        cin >> produtos[i].precoVenda;
        cout << "INFORME A QUANTIDADE EM ESTOQUE DO PRODUTO: ";
        cin >> produtos[i].estoque;

        float lucro = calcularLucro(produtos[i]);

        cout << fixed << setprecision(2);
        cout << "O Produto: " << produtos[i].codigo << " pode gerar R$ " << lucro << " de lucro." << endl;
        arquivo << "INFORME O C�DIGO DO PRODUTO:\n"
                << produtos[i].codigo << "\n";
        arquivo << "INFORME O PRE�O DE CUSTO DO PRODUTO:\n"
                << produtos[i].precoCusto << "\n";
        arquivo << "INFORME O PRE�O DE VENDA DO PRODUTO:\n"
                << produtos[i].precoVenda << "\n";
        arquivo << "INFORME A QUANTIDADE EM ESTOQUE DO PRODUTO:\n"
                << produtos[i].estoque << "\n";
        arquivo << fixed << setprecision(2);
        arquivo << "O Produto: " << produtos[i].codigo << " pode gerar R$ " << lucro << " de lucro.\n\n";
    }

    arquivo.close();

    cout << "\nDados salvos no arquivo 'produtos_lucro.txt' com sucesso." << endl;

    return 0;
}
