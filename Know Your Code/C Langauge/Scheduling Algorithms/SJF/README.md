# Scheduling Algorithms 

## Shortest Job first (SJF) Scheduling

Shortest job first (SJF) or shortest job next, is a scheduling policy that selects the waiting process with the smallest execution time to execute next. SJN, also known as Shortest Job Next (SJN), is a non-preemptive algorithm. 
 

- Shortest Job first has the advantage of having a minimum average waiting time among all scheduling algorithms.
- It is a Greedy Algorithm.
- It may cause starvation if shorter processes keep coming. This problem can be solved using the concept of ageing.
- It is practically infeasible as Operating System may not know burst time and therefore may not sort them. While it is not possible to predict execution time, several methods can be used to estimate the execution time for a job, such as a weighted average of previous execution times. SJF can be used in specialized environments where accurate estimates of running time are available.
- For eg : 
<table align="center">
   <tr>
      <td>Process</td>
      <td>Arrival Time </td>
      <td>Burst Time</td>
    </tr>
    <tr>
    <td align="center">P1</td>
    <td align="center">1</td>
    <td align="center">3</td>
    </tr>
      <tr>
    <td align="center">P2</td>
    <td align="center">2</td>
    <td align="center">4</td>
    </tr>
      <tr>
    <td align="center">P3</td>
    <td align="center">1</td>
    <td align="center">2</td>
    </tr>
      <tr>
    <td align="center">P4</td>
    <td align="center">4</td>
    <td align="center">4</td>
    </tr>

</table>
<br>

*Gantt Chart*

<table align="center">
 <tr>
 <td>   idle        </td>
 <td>     P3   </td>
 <td>     P1    </td>
 <td>     P2    </td>
 <td>     P4    </td>
</table>  

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;|
<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;1&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;3&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;6&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;10&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;14
<br>
Wait time of each process is as follows −
<br>
<table align="center">
 <tr>
 <td>Process</td>
 <td>Arrival Time</td>
 <td>Burst Time</td>
 <td>Completion Time</td>
 <td>Turn Around Time</td>
 <td>Waiting Time</td>
 <td>Repsponse Time</td>
 </tr>
 <tr align="center">
 <td>P1</td>
 <td>1</td>
 <td>3</td>
 <td>6</td>
 <td>5</td>
 <td>2</td>
 <td>2</td>
 </tr>
 <tr align="center">
 <td>P2</td>
 <td>2</td>
 <td>4</td>
 <td>10</td>
 <td>8</td>
 <td>4</td>
 <td>4</td>

 </tr>
 <tr align="center">
 <td>P3</td>
 <td>1</td>
 <td>2</td>
 <td>3</td>
 <td>2</td>
 <td>0</td>
 <td>0</td>
 </tr>
 <tr align="center">
 <td>P4</td>
 <td>4</td>
 <td>4</td>
 <td>14</td>
 <td>10</td>
 <td>6</td>
 <td>6</td>

 </tr>
</table>  

<br>

Average Waiting Time: (2+4+0+6) / 4 = 4 ms <br>
Average Turnaround Time : (5+8+2+10)/4
=6.25 ms
