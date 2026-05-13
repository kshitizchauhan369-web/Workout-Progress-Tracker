#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Workout
{
public:
    string name;
    int duration;
    int calories;

    void addWorkout()
    {
        ofstream file("workout.txt", ios::app);

        cout << "Enter Workout Name: ";
        cin >> name;

        cout << "Enter Duration (minutes): ";
        cin >> duration;

        cout << "Enter Calories Burned: ";
        cin >> calories;

        file << name << " " << duration << " " << calories << endl;

        file.close();

        cout << "\nWorkout Added Successfully!\n";
    }

    void viewWorkouts()
    {
        ifstream file("workout.txt");

        string name;
        int duration, calories;

        cout << "\nWorkout Records:\n";

        while (file >> name >> duration >> calories)
        {
            cout << "Exercise: " << name << endl;
            cout << "Duration: " << duration << " minutes" << endl;
            cout << "Calories: " << calories << endl;
            cout << "-------------------------\n";
        }

        file.close();
    }

    void totalStats()
    {
        ifstream file("workout.txt");

        string name;
        int duration, calories;

        int totalDuration = 0;
        int totalCalories = 0;

        while (file >> name >> duration >> calories)
        {
            totalDuration += duration;
            totalCalories += calories;
        }

        cout << "\nTotal Workout Time: " << totalDuration << " minutes\n";
        cout << "Total Calories Burned: " << totalCalories << endl;

        file.close();
    }
};

int main()
{
    Workout w;
    int choice;

    do
    {
        cout << "\n==== Workout Progress Tracker ====\n";
        cout << "1. Add Workout\n";
        cout << "2. View Workouts\n";
        cout << "3. Show Total Progress\n";
        cout << "4. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            w.addWorkout();
            break;

        case 2:
            w.viewWorkouts();
            break;

        case 3:
            w.totalStats();
            break;

        case 4:
            cout << "Exiting Program...\n";
            break;

        default:
            cout << "Invalid Choice!\n";
        }

    } while (choice != 4);

    return 0;
}
