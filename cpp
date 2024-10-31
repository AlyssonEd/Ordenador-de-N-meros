#include <iostream>
#include <vector>

using namespace std;

// Função para insertion Sort
// Basicamente, vamos pegando um elemento por vez e tentando encontrar em qual posição ele estará correto
void insertionSort(vector<double>& arr) {
    int n = arr.size();
    for (int i = 1; i < n; i++) {
        double key = arr[i];
        int j = i - 1;
// Empurra os elementos maiores para frente, até achar o lugar correto
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

//Função Bubble Sort
// Neste a gente vai comparando o elemento com elementos vizinhos e meio que subindo até achar o lugar correto
void bubbleSort(vector<double>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]); //Troca se o da esquerda for maior do que o da direita
            }
        }
    }
}
// Função Selection Sort
// Neste vamos verificando o vetor e procurando o menor elemento para colocar na posição correta
void selectionSort(vector<double>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        int minIdx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIdx]) { // Acha o menor elemento
                minIdx = j;
            }
        }
        swap(arr[i], arr[minIdx]);
    }
}

// Função DisplayArray
// Aqui imprime os elementos um a um, tudo na mesma linha.

void displayArray(const vector<double>& arr) {
    for (double val : arr) {
        cout << val << " ";
    }
    cout << endl;
}

int main() {
    int n;

// Pergunta quantos elementos o usuario deseja colocar
    cout << "Digite o número de elementos (positivo): ";
    cin >> n;
// Valida se o numero é positivo
    while (n < 1) {
        cout << "Valor incorreto. Digite um número positivo: ";
        cin >> n;
    }

    vector<double> data(n);
// Pede ao usuario para colocar cada valor do vetor

    cout << "Insira os " << n << " valores:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> data[i];
        while (data[i] < 0) {
            cout << "Valor negativo. Insira um valor positivo: ";
            cin >> data[i];
        }
    }

// Mostra a lista original
    cout << "Lista original: ";
    displayArray(data);

// Escolhe o algoritmo dependendo do numero de elementos
    if (n <= 20) {
        insertionSort(data);
        cout << "Algoritmo utilizado: Insertion Sort" << endl; // Para até 20 elementos é escolhido o Insertion Sort
    } else if (n <= 30) {
        bubbleSort(data);
        cout << "Algoritmo utilizado: Bubble Sort" << endl; // De 21 ate 30 elementos é escolhido Bubble Sort
    } else {
        selectionSort(data);
        cout << "Algoritmo utilizado: Selection Sort" << endl; // Mais de 30 elementos é escolhido Selection Sort
    }

// Exibe a Lista ordenada
    cout << "Lista ordenada: ";
    displayArray(data);

    return 0;
}