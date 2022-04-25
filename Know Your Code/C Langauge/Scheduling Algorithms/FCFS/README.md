# Scheduling Algorithms 

## First-come , First-served (FCFS) Scheduling

- Jobs are executed on first come, first serve basis.
- It is a non-preemptive, pre-emptive scheduling algorithm.
- Easy to understand and implement.
- Its implementation is based on FIFO queue.
- Poor in performance as average wait time is high.

For eg : 
<table align="center">
   <tr>
      <td>Process</td>
      <td>Arrival Time </td>
      <td>Burst Time</td>
      <td>Service Time</td>
    </tr>
    <tr>
    <td align="center">P0</td>
    <td align="center">0</td>
    <td align="center">5</td>
    <td align="center">0</td>
    </tr>
      <tr>
    <td align="center">P1</td>
    <td align="center">1</td>
    <td align="center">3</td>
    <td align="center">5</td>
    </tr>
      <tr>
    <td align="center">P2</td>
    <td align="center">2</td>
    <td align="center">8</td>
    <td align="center">8</td>
    </tr>
      <tr>
    <td align="center">P3</td>
    <td align="center">3</td>
    <td align="center">6</td>
    <td align="center">16</td>
    </tr>

</table>
<br>

*Gantt Chart*

<table align="center">
 <tr>
 <td>     P0    </td>
 <td>     P1    </td>
 <td>     P2    </td>
 <td>     P3    </td>
</table>  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;                | &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; |&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;|<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;5&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;8&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;16&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;22

<br>
Wait time of each process is as follows −
<br>
<table align="center">
 <tr>
 <td>Process</td>
 <td>Waitning Time = Service Time - Arrival Time</td>
 </tr>
 <tr align="center">
 <td>P0</td>
 <td>0</td>
 </tr>
 <tr align="center">
 <td>P1</td>
 <td>4</td>
 </tr>
 <tr align="center">
 <td>P2</td>
 <td>6</td>
 </tr>
 <tr align="center">
 <td>P3</td>
 <td>13</td>
 </tr>
</table>  

<br>

Average Wait Time: (0+4+6+13) / 4 = 5.75
