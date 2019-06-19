#include<iostream>
using namespace std;
void findWaitingTime(int processes[], int n,int burstTime[], int waitingTime[], int quantum)
{
    int remTime[n];
    for (int i = 0 ; i < n ; i++)
        remTime[i] =  burstTime[i];
    int t = 0;
    while (1)
    {
        bool done = true;
        for (int i = 0 ; i < n; i++)
        {
            if (remTime[i] > 0)
            {
                done = false;

                if (remTime[i] > quantum)
                {
                    t += quantum;
                    remTime[i] -= quantum;
                }
                else
                {
                    t = t + remTime[i];
                    waitingTime[i] = t - burstTime[i];
                    remTime[i] = 0;
                }
            }
        }
        if (done == true)
          break;
    }
}
void findTurnAroundTime(int processes[], int n,int burstTime[], int waitingTime[], int turnAroundTime[])
{
    for (int i = 0; i < n ; i++)
        turnAroundTime[i] = burstTime[i] + waitingTime[i];
}
void findavgTime(int processes[], int n, int burstTime[],int quantum)
{
    int waitingTime[n], turnAroundTime[n], total_waitingTime = 0, total_turnAroundTime = 0;
    findWaitingTime(processes, n, burstTime, waitingTime, quantum);
    findTurnAroundTime(processes, n, burstTime, waitingTime, turnAroundTime);
    cout << "Processes "<< " Burst time "
         << " Waiting time " << " Turn around time\n";
    for (int i=0; i<n; i++)
    {
        total_waitingTime = total_waitingTime + waitingTime[i];
        total_turnAroundTime = total_turnAroundTime + turnAroundTime[i];
        cout << " " << i+1 << "\t\t" << burstTime[i] <<"\t "
             << waitingTime[i] <<"\t\t " << turnAroundTime[i] <<endl;
    }

    cout << "Average waiting time = "
         << (float)total_waitingTime / (float)n;
    cout << "\nAverage turn around time = "
         << (float)total_turnAroundTime / (float)n;
}
int main()
{
    int noOfProcesses;
    cout<<"Enter the no of processes";
    cin>>noOfProcesses;
    int processes[noOfProcesses];
    int n=noOfProcesses;
    for(int i=0;i<n;i++)
    {
        processes[i]=i+1;
    }
    int burst_time[n];
    int arrival_time[n];
    cout<<"Enter the arrival and burst times";
    for(int i=0;i<n;i++)
    {
        int burstTime,arrivalTime;
        cin>>arrivalTime>>burstTime;
        burst_time[i]=burstTime;
        arrival_time[i]=arrivalTime;
    }
    cout<<"Enter the quantum value";
    int quantum;
    cin>>quantum;
    findavgTime(processes, n, burst_time, quantum);
    return 0;
}
