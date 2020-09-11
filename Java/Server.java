import java.net.*;
import java.io.*;
import java.util.*;

class Server
{
public static void main(String args[]) throws Exception
{
		ServerSocket ss= new ServerSocket(7777);
		System.out.println("Sever Working...\nWaiting for Client...\n");
		Socket s= ss.accept();
		DataInputStream din= new DataInputStream(s.getInputStream());
		DataOutputStream dout=new DataOutputStream(s.getOutputStream());
		BufferedReader br =new BufferedReader(new InputStreamReader(System.in));
		String str1=" ",str2=" ";
		while(!str1.equals("stop"))
		{
			str1=din.readUTF();
			System.out.println("CLIENT	:	"+str1);
			str2=br.readLine();
			dout.writeUTF(str2);
			dout.flush();
		}
		din.close();
		s.close();
		ss.close();
}
}