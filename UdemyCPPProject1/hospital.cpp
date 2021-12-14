#include <iostream>
#include <string>
using namespace std;

const int CAPACITY = 5;
string nonUrgentQueue[20][CAPACITY]{};
string urgentQueue[20][CAPACITY]{};
int indexMap[40]{};

void getNextPatient() {
    int specialization;
    cout << "\nEnter specialization: " << endl;
    cin >> specialization;
    int nonUrgentIndex = indexMap[2 * specialization];
    int urgentIndex = indexMap[2 * specialization + 1];
    if (!(nonUrgentIndex || urgentIndex)) {
        cout << "\nNo patients at the moment" << endl;
        return;
    }
    if (urgentIndex) {
        cout << urgentQueue[specialization][urgentIndex - 1] << ", please go with the doctor." << endl;
        --indexMap[2 * specialization + 1];
    } else if (nonUrgentIndex) {
        cout << nonUrgentQueue[specialization][0] << ", please go with the doctor." << endl;
        // shift all patients up by 1 position in the queue
        int i{ 0 };
        for (; i < nonUrgentIndex - 1; ++i)
            nonUrgentQueue[specialization][i] = nonUrgentQueue[specialization][i + 1];
        // clear last position in queue of stale data just for sanity's sake. No real need.
        nonUrgentQueue[specialization][i] = "";
        --indexMap[2 * specialization];
    }
}

void printAllPatients() {
    int total{ 0 };
    for (int i = 0; i < 20; ++i) {
        int nonUrgentIndex = indexMap[2 * i];
        int urgentIndex = indexMap[2 * i + 1];
        if (!(nonUrgentIndex || urgentIndex))
            continue;
        cout << "\nThere are " << nonUrgentIndex + urgentIndex << " patients in specialization " << i << endl;
        total += nonUrgentIndex + urgentIndex;
        for (int j = urgentIndex - 1; j >= 0; --j)
            cout << urgentQueue[i][j] << " urgent" << endl;
        for (int j = 0; j < nonUrgentIndex; ++j)
            cout << nonUrgentQueue[i][j] << " regular" << endl;
    }
    if (!total)
        cout << "There are currently no patients.\n" << endl;
}

void addNewPatient() {
    int specialization;
    string name;
    int status;
    cout << "\nEnter specialization, name, and status: " << endl;
    cin >> specialization;
    //cin.ignore();
    //getline(cin, name);
    cin >> name;
    cin >> status;
    
    if (indexMap[2 * specialization] + indexMap[2 * specialization + 1] == CAPACITY) {
        cout << "\nSorry, cannot accept more patients into speciality " << specialization << endl;
        return;
    }

    if (status == 0 || status == 1) {
        if (status) {
            urgentQueue[specialization][indexMap[2 * specialization + 1]++] = name;
        }
        else {
            nonUrgentQueue[specialization][indexMap[2 * specialization]++] = name;
        }
    }
    else {
        cout << "\nInvalid status. Returning to menu." << endl;
    }
}

int getMenuChoice() {
    int choice = -1;
    while (choice == -1) {
        cout << "\nEnter your choice: " << endl;
        cout << "1) Add new patient\n";
        cout << "2) Print all patients\n";
        cout << "3) Get next patient\n";
        cout << "4) Exit\n" << endl;
        cin >> choice;

        if (!(1 <= choice && choice <= 4)) {
            cout << "Invalid choice" << endl;
            choice = -1;
            // cin.ignore();
        }
    }
    return choice;
}

void hospital() {
    while (true) {
        int choice = getMenuChoice();
        if (choice == 1) {
            addNewPatient();
        }
        else if (choice == 2) {
            printAllPatients();
        }
        else if (choice == 3) {
            getNextPatient();
        } else {
            cout << "Thanks for the using the hospital system. Goodbye!" << endl;
            break;
        }

    }
}

int main()
{
    hospital();
}
