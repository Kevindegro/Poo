//Escribir por consola los números de del 1 al 100 e informar si  el número es par, mostrar su valor

import java.util.Iterator;
import java.util.Scanner;

public class HolaMundo {
	
	public static void main(String args[]) {
		Scanner myObj = new Scanner(System.in);
		while(true) {
			int num = myObj.nextInt();
			if (num > 100 || num < 1) System.out.println("Odio Java");
			else {
				if(num % 2 == 0) System.out.println(num + " Es par");
				else			 System.out.println(num + " No es par");
			}
		}
		
	}
}
