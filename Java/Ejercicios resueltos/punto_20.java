import java.util.Scanner;

public class punto_20 {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        System.out.println("Introduce un numero");
        int numero = sc.nextInt();

        if (numero <= 1) {
            System.out.println("El numero " + numero + " no es primo");
        } else {

            int raiz = (int) Math.sqrt(numero);
            int contador = 0;

            for (int i = raiz; i > 1; i--) {
                if (numero % i == 0) {
                    contador++;
                }
            }

            System.out.println(">>" + contador);

            if (contador < 1) {
                System.out.println("El numero " + numero + " es primo");
            } else {
                System.out.println("El numero " + numero + " no es primo");
            }

        }
    }
}
