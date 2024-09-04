import javax.swing.JOptionPane;
public class punto_5 {

	public static void main(String[] args) {

		String texto=JOptionPane.showInputDialog("Introduce un radio");
		double radio=Double.parseDouble(texto);
		double area=Math.PI*Math.pow(radio, 2);
		System.out.println("El area del circulo es "+area);
    
	}
}
