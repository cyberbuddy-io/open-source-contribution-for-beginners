import java.util.Scanner;

class Process {
    int pid; // process ID
    int at;  // arrival time
    int bt;  // burst time
    int et;  // execution time
}

public class FCFS {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // read in data
        System.out.println("Give number of processes: ");
        int n = scanner.nextInt();
        Process[] arr = new Process[n];
        for (int i = 0; i < n; ++i) {
            arr[i] = new Process();
            System.out.println("Give ID of process "+i+1);
            arr[i].pid = scanner.nextInt();
            System.out.println("Give arrival time of process "+i+1);
            arr[i].at = scanner.nextInt();
            System.out.println("Give burst time of process "+i+1);
            arr[i].bt = scanner.nextInt();
        }

        int time = 0; // total of time units
        int max;

        // calculating time
        for (int i = 0; i < n; i++) {
            time += arr[i].bt;
        }

        // if the first process doesn't arrive at 0, we have more units of time
        if (arr[0].at != 0) {
            time += arr[0].at;
        }

        // for the first process, executing time equals to arrival time
        arr[0].et = arr[0].at;
        // every process (except the first) executes when the previous burst time ends
        for (int i = 1; i < n; i++) {
            arr[i].et = arr[i - 1].bt + arr[i - 1].et;
        }

        // finding and printing the last executing process at every unit of time
        // if the first process doesn't arrive at 0, we print only \n until it arrives
        if (arr[0].at != 0) {
            for (int i = 0; i < arr[0].at; i++) {
                System.out.println("Time: "+i+ " Executed Process ID: ");
            }
        }
        for (int i = arr[0].at; i < time; i++) {
            max = 0;
            for (int j = 0; j < n; j++) {
                if (arr[j].et <= i) {
                    max = j;
                }
            }
            System.out.println("Time: "+i+ " Executed Process ID: "+arr[max].pid+ "\n");
        }
    }
}
