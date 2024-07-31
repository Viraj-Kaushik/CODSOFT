#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Task {
    string description;
    bool is_completed;
};

void add_task(vector<Task>& tasks) {
    string description;
    cout << "Enter the task description: ";
    cin.ignore(); 
    getline(cin, description);

    tasks.push_back({description, false});
    cout << "Task added successfully.\n";
}

void view_tasks(const vector<Task>& tasks) {
    if (tasks.empty()) {
        cout << "No tasks available.\n";
        return;
    }

    cout << "Task List:\n";
    for (size_t i = 0; i < tasks.size(); ++i) {
        cout << i + 1 << ". " << (tasks[i].is_completed ? "[Completed] " : "[Pending] ") << tasks[i].description << endl;
    }
}

void mark_as_completed(vector<Task>& tasks) {
    int index;
    cout << "Enter the task number to mark as completed: ";
    cin >> index;

    if (index > 0 && index <= tasks.size()) {
        tasks[index - 1].is_completed = true;
        cout << "Task marked as completed.\n";
    } else {
        cout << "Invalid task number.\n";
    }
}

void remove_task(vector<Task>& tasks) {
    int index;
    cout << "Enter the task number to remove: ";
    cin >> index;

    if (index > 0 && index <= tasks.size()) {
        tasks.erase(tasks.begin() + (index - 1));
        cout << "Task removed successfully.\n";
    } else {
        cout << "Invalid task number.\n";
    }
}

int main() {
    vector<Task> tasks;
    int choice;

    do {
        cout << "\nTo-Do List Manager\n";
        cout << "1. Add a task\n";
        cout << "2. View your tasks\n";
        cout << "3. Mark task as Completed\n";
        cout << "4. Remove task\n";
        cout << "5. Exit the programme\n";
        cout << "Enter your choice based on above options : ";
        cin >> choice;

        switch (choice) {
            case 1:
                add_task(tasks);
                break;
            case 2:
                view_tasks(tasks);
                break;
            case 3:
                mark_as_completed(tasks);
                break;
            case 4:
                remove_task(tasks);
                break;
            case 5:
                cout << "Exiting the program.\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 5);

    return 0;
}
