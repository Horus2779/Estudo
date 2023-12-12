package pjAula9;

import java.util.HashSet;
import java.util.Set;
import java.util.TreeSet;

public class TesteHash {
	public static void main(String[] args) {
		Set valor = new TreeSet();
		
		valor.add("Paulo");
		valor.add("Luiza");
		valor.add("Juan");
		valor.add("César");
		valor.add("Luiza");
		valor.add("10");
		
			System.out.println(valor);
			
			valor.remove("César");
			
			System.out.println(valor);
		
			valor.forEach( i-> {
				System.out.println(i);
			});
	}
}
