#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> tasks;
vector<bool> status;

void addTask() {
    string task;
    cout << "Enter task: ";
    cin.ignore();
    getline(cin, task);
    tasks.push_back(task);
    status.push_back(false);
    cout << "Task added.\n";
}

void viewTasks() {
    if (tasks.size() == 0) {
        cout << "No tasks available.\n";
        return;
    }

    cout << "Tasks:\n";
    for (int i = 0; i < tasks.size(); i++) {
        cout << i + 1 << ". " << tasks[i];
        if (status[i]) {
            cout << " [Completed]";
        } else {
            cout << " [Pending]";
        }
        cout << "\n";
    }
}

void markAsCompleted() {
    int num;
    cout << "Enter task number to mark as completed: ";
    cin >> num;

    if (num > 0 && num <= tasks.size()) {
        status[num - 1] = true;
        cout << "Task marked completed.\n";
    } else {
        cout << "Invalid task number.\n";
    }
}

void removeTask() {
    int num;
    cout << "Enter task number to remove: ";
    cin >> num;

    if (num > 0 && num <= tasks.size()) {
        tasks.erase(tasks.begin() + num - 1);
        status.erase(status.begin() + num - 1);
        cout << "Task removed.\n";
    } else {
        cout << "Invalid task number.\n";
    }
}

int main() {
    int choice;

    while (true) {
        cout << "\nTo-Do List Menu\n";
        cout << "1. Add Task\n";
        cout << "2. View Tasks\n";
        cout << "3. Mark Task as Completed\n";
        cout << "4. Remove Task\n";
        cout << "5. Exit\n";
        cout << "Choose: ";
        cin >> choice;

        if (choice == 1) {
            addTask();
        } else if (choice == 2) {
            viewTasks();
        } else if (choice == 3) {
            markAsCompleted();
        } else if (choice == 4) {
            removeTask();
        } else if (choice == 5) {
            cout << "Bye!\n";
            break;
        } else {
            cout << "Invalid choice.\n";
        }
    }

    return 0;
}
