#include <iostream>
#ifdef _WIN32
#include <windows.h>
#else
#include <unistd.h>
#endif
using namespace std;

const double g = 9.8;
const double c = 3e8;

void clearScreen() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

bool askWhatNext() {
    int response;
    cout << "\n[1] Назад в меню | [2] Повторить задачу | [0] Выход: ";
    cin >> response;
    if (response == 2) return true;
    if (response == 1) return false;
    exit(0);
}

void force() {
    double m, a;
    do {
        clearScreen();
        cout << "Вы выбрали: Сила (F = m * a)" << endl;
        cout << "Введите массу (кг): ";
        cin >> m;
        cout << "Введите ускорение (м/с^2): ";
        cin >> a;
        cout << "Сила: " << m * a << " Н" << endl;
    } while (askWhatNext());
}

void energy() {
    double m;
    do {
        clearScreen();
        cout << "Вы выбрали: Энергия (E = m * c^2)" << endl;
        cout << "Введите массу (кг): ";
        cin >> m;
        cout << "Энергия: " << m * c * c << " Дж" << endl;
    } while (askWhatNext());
}

void ohmLaw() {
    double I, R;
    do {
        clearScreen();
        cout << "Вы выбрали: Закон Ома (U = I * R)" << endl;
        cout << "Введите силу тока (А): ";
        cin >> I;
        cout << "Введите сопротивление (Ом): ";
        cin >> R;
        cout << "Напряжение: " << I * R << " В" << endl;
    } while (askWhatNext());
}

void kinematics() {
    double v, t;
    do {
        clearScreen();
        cout << "Вы выбрали: Кинематика (s = v * t)" << endl;
        cout << "Введите скорость (м/с): ";
        cin >> v;
        cout << "Введите время (с): ";
        cin >> t;
        cout << "Путь: " << v * t << " м" << endl;
    } while (askWhatNext());
}

void potentialEnergy() {
    double m, h;
    do {
        clearScreen();
        cout << "Вы выбрали: Потенциальная энергия (Ep = m * g * h)" << endl;
        cout << "Введите массу (кг): ";
        cin >> m;
        cout << "Введите высоту (м): ";
        cin >> h;
        cout << "Потенциальная энергия: " << m * g * h << " Дж" << endl;
    } while (askWhatNext());
}

int main() {

    setlocale(LC_ALL, "Russian");


    int choice;

    bool running = true;
    
    
    while (running) {
        clearScreen();
        cout << "====== МЕНЮ ЗАДАЧ ПО ФИЗИКЕ ======" << endl;
        cout << "1. Сила (F = m * a)" << endl;
        cout << "2. Энергия (E = m * c^2)" << endl;
        cout << "3. Закон Ома (U = I * R)" << endl;
        cout << "4. Кинематика (s = v * t)" << endl;
        cout << "5. Потенциальная энергия (Ep = m * g * h)" << endl;
        cout << "0. Выход" << endl;
        cout << "Выберите действие: ";
        cin >> choice;

        switch (choice) {
        case 1: force(); break;
        case 2: energy(); break;
        case 3: ohmLaw(); break;
        case 4: kinematics(); break;
        case 5: potentialEnergy(); break;
        case 0: running = false; break;
        default:
            cout << "Неверный выбор." << endl;




#ifdef _WIN32
            Sleep(2000);
#else
            sleep(2);
#endif
            break;
        }
    }

    return 0;
}
