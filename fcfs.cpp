#include <iostream>
#include <vector>
using namespace std;
struct Process {
    int id;
    int arrivalTime;
    int burstTime;
};

void calculateWaitingTime(const vector<Process>& processes, vector<int>& waitingTime) {
    waitingTime[0] = 0; // The first process has a waiting time of 0

    for (int i = 1; i < processes.size(); i++) {
        waitingTime[i] = waitingTime[i - 1] + processes[i - 1].burstTime;
    }
}

void calculateTurnaroundTime(const vector<Process>& processes, const vector<int>& waitingTime, vector<int>& turnaroundTime) {
    for (int i = 0; i < processes.size(); i++) {
        turnaroundTime[i] = waitingTime[i] + processes[i].burstTime;
    }
}

void calculateAverageTimes(const vector<Process>& processes) {
    vector<int> waitingTime(processes.size());
    vector<int> turnaroundTime(processes.size());
    int totalWaitingTime = 0, totalTurnaroundTime = 0;

    calculateWaitingTime(processes, waitingTime);
    calculateTurnaroundTime(processes, waitingTime, turnaroundTime);

    cout << "Process\tArrival Time\tBurst Time\tWaiting Time\tTurnaround Time\n";

    for (int i = 0; i < processes.size(); i++) {
        totalWaitingTime += waitingTime[i];
        totalTurnaroundTime += turnaroundTime[i];

        cout << processes[i].id << "\t\t" << processes[i].arrivalTime << "\t\t"
            << processes[i].burstTime << "\t\t" << waitingTime[i] << "\t\t"
            << turnaroundTime[i] << "\n";
    }

    double avgWaitingTime = static_cast<double>(totalWaitingTime) / processes.size();
    double avgTurnaroundTime = static_cast<double>(totalTurnaroundTime) / processes.size();

    cout << "\nAverage Waiting Time: " << avgWaitingTime << "\n";
    cout << "Average Turnaround Time: " << avgTurnaroundTime << "\n";
}

int main() {
    int n;
    cout << "Enter the number of processes: ";
    cin >> n;

    vector<Process> processes(n);

    for (int i = 0; i < n; i++) {
        cout << "Process " << i + 1 << " Arrival Time: ";
        cin >> processes[i].arrivalTime;
        cout << "Process " << i + 1 << " Burst Time: ";
        cin >> processes[i].burstTime;
        processes[i].id = i + 1;
    }

    calculateAverageTimes(processes);

    return 0;
}
