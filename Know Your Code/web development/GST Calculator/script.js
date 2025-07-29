function gstCalc(){
    var pn=document.getElementById("pn").value;
    var pp=document.getElementById("pp").value;
    var pr=document.getElementById("rate").value;
    var pq=document.getElementById("pq").value;
    var ps=document.getElementById("ps").value;
    var total=pp*pq;
    if(ps==0){
        var SGST = pr/2;
        var CGST=pr/2;
        var pay=total+(total*SGST/100)+(total*CGST/100);
        document.getElementById("tr1").innerHTML="<td>"+pn+"</td><td>Rs "
        +pp+"</td>"+"</td><td>"
        +pq+"</td>"+"</td><td>Rs "
        +total+"</td>";
        document.getElementById("tr2").innerHTML="<td>SGTS "+SGST+" %</td><td></td>"+"</td><td></td>"+"</td><td>Rs "
        +total*SGST/100+"</td>";
       
        document.getElementById("tr3").innerHTML="<td>CGST "+CGST+" %</td><td></td>"+"</td><td></td>"+"</td><td>Rs "
        +total*CGST/100+"</td>";
        document.getElementById("tr4").innerHTML="<td>Total</td><td></td>"+"</td><td></td>"+"</td><td>Rs "
        +pay+"</td>";
    }else{
        var IGST = pr;
      
        var pay=total+(total*IGST/100);
        document.getElementById("tr1").innerHTML="<td>"+pn+"</td><td>Rs "
        +pp+"</td>"+"</td><td>"
        +pq+"</td>"+"</td><td> Rs"
        +total+"</td>";
       
        document.getElementById("tr2").innerHTML="";
        document.getElementById("tr3").innerHTML="<td>IGST "+IGST+" %</td><td></td>"+"</td><td></td>"+"</td><td>Rs "
        +total*IGST/100+"</td>";
        document.getElementById("tr4").innerHTML="<td>Total</td><td></td>"+"</td><td></td>"+"</td><td>Rs "
        +pay+"</td>";
        
    }
}