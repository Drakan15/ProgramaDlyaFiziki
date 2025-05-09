#include <iostream>
#include <cmath>
using namespace std;

const double SPEED_OF_LIGHT = 3e8; // м/с
const double GRAVITY = 9.81;       // м/с²

void calcForce() {
    double m, a;
    cout << "Введите массу (кг): ";
    cin >> m;
    cout << "Введите ускорение (м/с^2): ";
    cin >> a;
    cout << "Сила: " << m * a << " Н" << endl;
}

void calcEnergy() {
    double m;
    cout << "Введите массу (кг): ";
    cin >> m;
    cout << "Энергия: " << m * pow(SPEED_OF_LIGHT, 2) << " Дж" << endl;
}

void calcOhmLaw() {
    double I, R;
    cout << "Введите ток (А): ";
    cin >> I;
    cout << "Введите сопротивление (Ом): ";
    cin >> R;
    cout << "Напряжение: " << I * R << " В" << endl;
}

void calcKinematics() {
    double v, t;
    cout << "Введите скорость (м/с): ";
    cin >> v;
    cout << "Введите время (с): ";
    cin >> t;
    cout << "Пройденное расстояние: " << v * t << " м" << endl;
}

void calcPotentialEnergy() {
    double m, h;
    cout << "Введите массу (кг): ";
    cin >> m;
    cout << "Введите высоту (м): ";
    cin >> h;
    cout << "Потенциальная энергия: " << m * GRAVITY * h << " Дж" << endl;
}

bool askReturnToMenu() {
    int response;
    cout << "\nВернуться в меню? (1 — Да / 0 — Нет): ";
    cin >> response;
    return response == 1;
}

int main() {

    setlocale(LC_ALL, "Russian");

    int choice;
    bool keepRunning = true;

    while (keepRunning) {
        cout << "\n====== МЕНЮ ЗАДАЧ ПО ФИЗИКЕ ======\n";
        cout << "1. Сила (F = m * a)\n";
        cout << "2. Энергия (E = m * c^2)\n";
        cout << "3. Закон Ома (U = I * R)\n";
        cout << "4. Кинематика (s = v * t)\n";
        cout << "5. Потенциальная энергия (Ep = m * g * h)\n";
        cout << "0. Выход\n";
        cout << "Выберите действие: ";
        cin >> choice;

        switch (choice) {
        case 1: calcForce(); keepRunning = askReturnToMenu(); break;
        case 2: calcEnergy(); keepRunning = askReturnToMenu(); break;
        case 3: calcOhmLaw(); keepRunning = askReturnToMenu(); break;
        case 4: calcKinematics(); keepRunning = askReturnToMenu(); break;
        case 5: calcPotentialEnergy(); keepRunning = askReturnToMenu(); break;
        case 0: keepRunning = false; break;
        default: cout << "Неверный выбор. Попробуйте снова.\n";
        }
    }

    cout << "Программа завершена.\n";
    return 0;
}

