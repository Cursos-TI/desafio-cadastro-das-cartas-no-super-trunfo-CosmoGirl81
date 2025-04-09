#include <iostream>
#include <string>
using namespace std;

struct Carta {
    string nomePais;
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadeDemografica;
};

void exibirCarta(const Carta& carta) {
    cout << "\nNome do país: " << carta.nomePais << endl;
    cout << "População: " << carta.populacao << endl;
    cout << "Área: " << carta.area << " km²" << endl;
    cout << "PIB: " << carta.pib << " trilhões" << endl;
    cout << "Pontos turísticos: " << carta.pontosTuristicos << endl;
    cout << "Densidade demográfica: " << carta.densidadeDemografica << " hab/km²" << endl;
}

void compararCartas(const Carta& c1, const Carta& c2, int opcao) {
    cout << "\nComparando " << c1.nomePais << " x " << c2.nomePais << endl;
    switch(opcao) {
        case 1:
            cout << "Atributo: População" << endl;
            cout << c1.nomePais << ": " << c1.populacao << " hab" << endl;
            cout << c2.nomePais << ": " << c2.populacao << " hab" << endl;
            if (c1.populacao > c2.populacao)
                cout << "Vencedor: " << c1.nomePais << endl;
            else if (c2.populacao > c1.populacao)
                cout << "Vencedor: " << c2.nomePais << endl;
            else
                cout << "Empate!" << endl;
            break;
        case 2:
            cout << "Atributo: Área" << endl;
            cout << c1.nomePais << ": " << c1.area << " km²" << endl;
            cout << c2.nomePais << ": " << c2.area << " km²" << endl;
            if (c1.area > c2.area)
                cout << "Vencedor: " << c1.nomePais << endl;
            else if (c2.area > c1.area)
                cout << "Vencedor: " << c2.nomePais << endl;
            else
                cout << "Empate!" << endl;
            break;
        case 3:
            cout << "Atributo: PIB" << endl;
            cout << c1.nomePais << ": R$ " << c1.pib << " trilhões" << endl;
            cout << c2.nomePais << ": R$ " << c2.pib << " trilhões" << endl;
            if (c1.pib > c2.pib)
                cout << "Vencedor: " << c1.nomePais << endl;
            else if (c2.pib > c1.pib)
                cout << "Vencedor: " << c2.nomePais << endl;
            else
                cout << "Empate!" << endl;
            break;
        case 4:
            cout << "Atributo: Pontos Turísticos" << endl;
            cout << c1.nomePais << ": " << c1.pontosTuristicos << endl;
            cout << c2.nomePais << ": " << c2.pontosTuristicos << endl;
            if (c1.pontosTuristicos > c2.pontosTuristicos)
                cout << "Vencedor: " << c1.nomePais << endl;
            else if (c2.pontosTuristicos > c1.pontosTuristicos)
                cout << "Vencedor: " << c2.nomePais << endl;
            else
                cout << "Empate!" << endl;
            break;
        case 5:
            cout << "Atributo: Densidade Demográfica" << endl;
            cout << c1.nomePais << ": " << c1.densidadeDemografica << " hab/km²" << endl;
            cout << c2.nomePais << ": " << c2.densidadeDemografica << " hab/km²" << endl;
            if (c1.densidadeDemografica < c2.densidadeDemografica)
                cout << "Vencedor: " << c1.nomePais << endl;
            else if (c2.densidadeDemografica < c1.densidadeDemografica)
                cout << "Vencedor: " << c2.nomePais << endl;
            else
                cout << "Empate!" << endl;
            break;
        default:
            cout << "Opção inválida. Tente novamente." << endl;
    }
}

int main() {
    Carta carta1 = {"Brasil", 211000000, 8515767.0, 2.055, 7, 24.8};
    Carta carta2 = {"Japão", 126300000, 377975.0, 5.081, 15, 334.2};

    int opcao;

    cout << "\n===== Menu de Comparação de Cartas =====" << endl;
    cout << "1. População" << endl;
    cout << "2. Área" << endl;
    cout << "3. PIB" << endl;
    cout << "4. Pontos Turísticos" << endl;
    cout << "5. Densidade Demográfica" << endl;
    cout << "Escolha um atributo para comparar (1-5): ";
    cin >> opcao;

    compararCartas(carta1, carta2, opcao);

    return 0;
}
