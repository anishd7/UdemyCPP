#include <iostream>
#include <string>
using namespace std;

struct fixed_size_int_queue {
    int q[100]{};
    int len;
    int capacity;
    fixed_size_int_queue(int _capacity = 1000) {
        len = 0;
        capacity = _capacity;
    }

    bool add_end(int value) {
        if (len == capacity)
            return 0;
        q[len++] = value;
        return 1;
    }

    bool add_front(int value) {
        if (len == capacity)
            return 0;
        for (int j = len; j > 0; --j)
            q[j] = q[j - 1];
        q[0] = value;
        ++len;
        return 1;
    }

    int remove_front() {
        int temp = q[0];
        for (int j = 0; j < len; ++j)
            q[j] = q[j + 1];
        if (len > 0)
            --len;
        return temp;
    }

    int get_value_at(int& i) {
        if (i >= len)
            return NULL;
        return q[i];
    }

    void print() {
        for (int i = 0; i < len; ++i)
            cout << q[i] << " ";
        cout << endl;
    }

    int length() {
        return len;
    }
};

struct fixed_size_string_queue {
    string q[100]{};
    int len;
    int capacity;
    fixed_size_string_queue(int _capacity = 1000) {
        len = 0;
        capacity = _capacity;
    }

    bool add_end(string& value) {
        if (len == capacity)
            return 0;
        q[len++] = value;
        return 1;
    }

    bool add_front(string& value) {
        if (len == capacity)
            return 0;
        for (int j = len; j > 0; --j)
            q[j] = q[j - 1];
        q[0] = value;
        ++len;
        return 1;
    }

    string get_value_at(int& i) {
        if (i >= len)
            return "";
        return q[i];
    }

    string remove_front() {
        string result = q[0];
        for (int j = 0; j < len; ++j)
            q[j] = q[j + 1];
        if (len > 0)
            --len;
        return result;
    }

    void print() {
        for (int i = 0; i < len; ++i)
            cout << q[i] << " ";
        cout << endl;
    }

    int length() {
        return len;
    }
};

struct hospital {
    const int CAPACITY = 5;
    fixed_size_string_queue specializations[20];
    fixed_size_int_queue statuses[20];
    int totalPatients;

    hospital() {
        totalPatients = 0;
        for (int i = 0; i < 20; ++i) {
            specializations[i] = fixed_size_string_queue(CAPACITY);
            statuses[i] = fixed_size_int_queue(CAPACITY);
        }
    }

    bool isValidSpecialization(int& specialization) {
        return (0 <= specialization && specialization < 20);
    }

    void addNewPatient() {
        int specialization, status;
        string name;
        cout << "\nEnter specialization, name, and status: " << endl;
        cin >> specialization >> name >> status;

        if (!(status == 0 || status == 1)) {
            cout << "\nInvalid status. Returning to menu." << endl;
        }

        int result = 0;
        if (status) {
            result = specializations[specialization].add_front(name);
            if (result)
                statuses[specialization].add_front(status);
        }
        else {
            result = specializations[specialization].add_end(name);
            if (result)
                statuses[specialization].add_end(status);
        }
        if (result == 0) {
            cout << "Sorry, could not add " << name << " to specialization " << specialization << " due to capacity." << endl;
            return;
        }
        ++totalPatients;
    }

    void getNextPatient() {
        int specialization;
        cout << "\nEnter specialization: " << endl;
        cin >> specialization;
        
        if (!specializations[specialization].length()) {
            cout << "\nNo patients at the moment" << endl;
            return;
        }
        string patient = specializations[specialization].remove_front();
        cout << patient << ", please go with the doctor." << endl;
        statuses[specialization].remove_front();
        --totalPatients;
    }

    string statusMap(int &status) {
        if (status)
            return "urgent";
        return "regular";
    }

    void printAllPatients() {
        cout << "\nThere are currently " << totalPatients << " total patients." << endl;
        for (int i = 0; i < 20; ++i) {
            int specializationLength = specializations[i].length();
            if (!specializationLength)
                continue;
            cout << "\nThere are " << specializationLength << " patients in specialization " << i << endl;
            for (int j = 0; j < specializationLength; ++j) {
                string patientName = specializations[i].get_value_at(j);
                int patientStatus = statuses[i].get_value_at(j);
                cout << patientName << " " << statusMap(patientStatus) << endl;
            }
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
            }
        }
        return choice;
    }
};

void hospital_runner() {
    hospital h;
    while (true) {
        int choice = h.getMenuChoice();
        if (choice == 1) {
            h.addNewPatient();
        }
        else if (choice == 2) {
            h.printAllPatients();
        }
        else if (choice == 3) {
            h.getNextPatient();
        }
        else {
            cout << "Thanks for the using the hospital system. Goodbye!" << endl;
            break;
        }

    }
}

int main()
{
    hospital_runner();
    return 0;
}
