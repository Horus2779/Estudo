package pjAula6;

public class Teste {
	public static void main(String[] args) {
		/*TesteWrapper teste = new TesteWrapper();
		
			System.out.println("int: " + teste.getValorInt());
			System.out.println("Integer : " + teste.getValorInteger());
			System.out.println("boolean: " + teste.isValorBooleanNativo());
			System.out.println("Boolean: " + teste.getValorBooleanWrapper());
	
			String nome;	
	}*/
		NotaFiscal nota1 = new NotaFiscal();
		NotaFiscal nota2 = new NotaFiscal();
		NotaFiscal nota3 = new NotaFiscal();
		NotaFiscal nota4 = new NotaFiscal();
		NotaFiscal nota5 = new NotaFiscal();
		
		nota1.razapSocial = "UNISAL";
		nota2.razaoSocial = "Google";
		nota3.razaoSocial = "Lenovo";
		
		System.out.println("Nota 1 " + nota1.numero);
		System.out.println("Nota 2 " + nota2.numero);
		System.out.println("Nota 3 " + nota3.numero);
		System.out.println("Nota 4 " + nota4.numero);
		System.out.println("Nota 5 " + nota5.numero);
		
		System.out.println(nota1.sequecial);
		System.out.println(nota2.sequecial);
		System.out.println(nota3.sequecial);
}
