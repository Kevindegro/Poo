import java.util.Scanner;

public class punto_27 {

    public static void main(String[] args) {
       
       Scanner sn=new Scanner(System.in);
       int num=sn.nextInt();
       int contador=0;
      
       while(num!=-1){
           contador++;
           num=sn.nextInt();
       }
       System.out.println("Fin, se ha introducido "+contador+" numeros");
    }
}
