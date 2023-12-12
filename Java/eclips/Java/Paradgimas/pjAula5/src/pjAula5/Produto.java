package pjAula5;

/**
 * Classe de Modelagem Conceitual Produto
 * @author Lucivaldo
 *@date 21/03/2023
 */

public class Produto {
	//Atributos
	private int codigo;
	private String descrição;
	private UnidadeMedida um;
	private Localizacao localizacao;
	private double quantidadeMinima;
	private double quantidadeMaxima;
	private boolean status;
	
	//Metodos
	public void setCodigo(int codigo) {
		this.codigo = codigo;
	}
	public int getCodigo() {
		return codigo;
	}
	public String getDescrição() {
		return descrição;
	}
	public void setDescrição(String descrição) {
		this.descrição = descrição;
	}
	public UnidadeMedida getUm() {
		return um;
	}
	public void setUm(UnidadeMedida um) {
		this.um = um;
	}
	public Localizacao getLocalizacao() {
		return localizacao;
	}
	public void setLocalizacao(Localizacao localizacao) {
		this.localizacao = localizacao;
	}
	public double getQuantidadeMinima() {
		return quantidadeMinima;
	}
	public void setQuantidadeMinima(double quantidadeMinima) {
		this.quantidadeMinima = quantidadeMinima;
	}
	public double getQuantidadeMaxima() {
		return quantidadeMaxima;
	}
	public void setQuantidadeMaxima(double quantidadeMaxima) {
		this.quantidadeMaxima = quantidadeMaxima;
	}
	public boolean isStatus() {
		return status;
	}
	public void setStatus(boolean status) {
		this.status = status;
	}
	
}
