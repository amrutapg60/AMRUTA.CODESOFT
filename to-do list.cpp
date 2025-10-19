#include <iostream>
#include <string>
using namespace std;

string tasks[50];   
bool status[50];    
int countTask = 0;  
void addTask() {
    cout << "Enter task: ";
    cin.ignore();
    getline(cin, tasks[countTask]);
    status[countTask] = false;   // By default, task is pending
    countTask++;
    cout << "Task added successfully!\n";
}

void viewTasks() {
    if (countTask == 0) {
        cout << "No tasks available!\n";
        return;
    }
    cout << "\n--- To-Do List ---\n";
    for (int i = 0; i < countTask; i++) {
        cout << i + 1 << ". " << tasks[i]
             << " [" << (status[i] ? "Completed" : "Pending") << "]\n";
    }
}

void markCompleted() {
    int n;
    cout << "Enter task number to mark as completed: ";
    cin >> n;
    if (n > 0 && n <= countTask) {
        status[n - 1] = true;
        cout << "Task marked as completed!\n";
    } else {
        cout << "Invalid task number!\n";
    }
}

void removeTask() {
    int n;
    cout << "Enter task number to remove: ";
    cin >> n;
    if (n > 0 && n <= countTask) {
        for (int i = n - 1; i < countTask - 1; i++) {
            tasks[i] = tasks[i + 1];
            status[i] = status[i + 1];
        }
        countTask--;
        cout << "Task removed successfully!\n";
    } else {
        cout << "Invalid task number!\n";
    }
}

int main() {
    int choice;
    do {
        cout << "\n===== TO-DO LIST MENU =====\n";
        cout << "1. Add Task\n";
        cout << "2. View Tasks\n";
        cout << "3. Mark Task as Completed\n";
        cout << "4. Remove Task\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: addTask(); break;
            case 2: viewTasks(); break;
            case 3: markCompleted(); break;
            case 4: removeTask(); break;
            case 5: cout << "Exiting program...\n"; break;
            default: cout << "Invalid choice! Try again.\n";
        }
    } while (choice != 5);

    return 0;
}
