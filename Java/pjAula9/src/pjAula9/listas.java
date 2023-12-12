package pjAula9;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class listas {
	public static void main(String[] args) {
		List<Integer> lista = new ArrayList<Integer>();
		
	/*	Scanner digito = new Scanner(System.in);
		Integer valor = digito,nextInt();
		do {
			lista.add(valor);
			valor = digito.nextInt();
		}while(valor != -1);
*/
		
		lista.add(100);
		lista.add(1);
		lista.add(-4);
		lista.add(22);
		
		System.out.println(lista);
		
		lista.remove(1);
		System.out.println(lista);
	}	
		
}
