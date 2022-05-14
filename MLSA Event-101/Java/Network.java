// import java.io.DataInputStream;
// import java.io.DataOutputStream;
// import java.io.IOException;
// import java.io.InputStream;
// import java.net.*;
// public class Network{
//     public static void main(String[] args) throws IOException {
//         // URl class


//         // URL u=new URL("http://www.google.com/index.html");
//         // System.out.println(u.getProtocol());
//         // System.out.println(u.getHost());
//         // System.out.println(u.getPort());
//         // System.out.println(u.getFile());
//         // System.out.println(u);

// // URLConnection class

//         // URLConnection uu=u.openConnection();
//         // InputStream is=uu.getInputStream();
//         // int i;
//         // while((i=is.read())!=(-1)){
//         //     System.out.print((char)(i));
//         // }


//         // Inet class


//         // try{
//         //     InetAddress ip=InetAddress.getByName("www.google.com");
//         //     System.out.println(ip.getHostName());
//         //     System.out.println(ip.getHostAddress());
//         // }catch(Exception e){
//         //     System.out.println(e);
//         // }


//         //socket programming
        
//         //1. server code
//             ServerSocket ss=new ServerSocket(666);
//             Socket s=ss.accept();
//             DataInputStream dis=new DataInputStream(s.getInputStream());
//             String str=(String)dis.readUTF();
//             System.out.println(str);
//             ss.close();

//             //2. Client code
//             Socket s1=new Socket("localhost",666);
//             DataOutputStream dos=new DataOutputStream(s1.getOutputStream());
//             dos.writeUTF("Hi");
//             dos.flush();
//             dos.close();

//     }
// }