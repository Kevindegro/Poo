import java.util.Scanner;
public class punto_6 {
	public static void main(String[] args) {
	
		Scanner sc = new Scanner(System.in);
		System.out.println("Ingrese un numero");
		int num = sc.nextInt();
		
		if(num%2 == 0) {
			System.out.println("El numero "+(num)+" Es divisible por 2");
		}else {
			System.out.println("El numero "+(num)+"No es divisible por 2");
		}
		
	}
}
