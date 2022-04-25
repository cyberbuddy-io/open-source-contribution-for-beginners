t# Scheduling Algorithms 

## Priority Scheduling


- Priority scheduling is a non-preemptive algorithm and one of the most common scheduling algorithms in batch systems.
- Each process is assigned first arrival time (less arrival time process first) if two processes have same arrival time, then compare to priorities (highest process first). Also, if two processes have same priority then compare to process number (less process number first). This process is repeated while all process get executed.

- For eg : 
<table align="center">
   <tr>
      <td>Process</td>
      <td>Arrival Time </td>
      <td>Burst Time</td>
      <td align="center">Priority</td>
    </tr>
    <tr>
    <td align="center">P1</td>
    <td align="center">0</td>
    <td align="center">11</td>
    <td align="center">2</td>
    </tr>
      <tr>
    <td align="center">P2</td>
    <td align="center">5</td>
    <td align="center">28</td>
    <td align="center">0</td>
    </tr>
      <tr>
    <td align="center">P3</td>
    <td align="center">12</td>
    <td align="center">2</td>
    <td align="center">3</td>
    </tr>
      <tr>
    <td align="center">P4</td>
    <td align="center">2</td>
    <td align="center">10</td>
    <td align="center">1</td>
    </tr>
      <tr>
    <td align="center">P5</td>
    <td align="center">9</td>
    <td align="center">16</td>
    <td align="center">4</td>
    </tr>

</table>
<br>

*Gantt Chart*

<table align="center">
 <tr>
 <td>     P1    </td>
 <td>     P2   </td>
 <td>     P4    </td>
 <td>     P3    </td>
 <td>     P5    </td>
</table>  

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;|
<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;11&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;39&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;49&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;51&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;67
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
 </tr>
 <tr align="center">
 <td>P1</td>
 <td>1</td>
 <td>3</td>
 <td>3</td>
 <td>3</td>
 <td>0</td>
 </tr>
 <tr align="center">
 <td>P2</td>
 <td>1</td>
 <td>6</td>
 <td>9</td>
 <td>8</td>
 <td>2</td>

 </tr>
 <tr align="center">
 <td>P3</td>
 <td>3</td>
 <td>1</td>
 <td>16</td>
 <td>13</td>
 <td>12</td>
 </tr>
 <tr align="center">
 <td>P4</td>
 <td>2</td>
 <td>2</td>
 <td>11</td>
 <td>9</td>
 <td>7</td>
 </tr>
 <tr align="center">
 <td>P5</td>
 <td>4</td>
 <td>4</td>
 <td>15</td>
 <td>11</td>
 <td>7</td>
 </tr>

</table>  

<br>

Average Waiting Time: (0+2+12+7+7) / 5 = 5.6 ms <br>
Average Turnaround Time : (3+8+13+9+11)/5
=8.8 ms

