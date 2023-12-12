package pjAula5;

public class UnidadeMedida {
	//Atributos
	private String descricao;
	private float fatorConversao;
	private String unidade;

	//Metodos Getters e Setters
	public String getDescricao() {
		return descricao;
	}
	public void setDescricao(String descricao) {
		this.descricao = descricao;
	}
	public float getFatorConversao() {
		return fatorConversao;
	}
	public void setFatorConversao(float fatorConversao) {
		this.fatorConversao = fatorConversao;
	}
	public String getUnidade() {
		return unidade;
	}
	public void setUnidade(String unidade) {
		this.unidade = unidade;
	}
	
	//Metodos Pollimorficos
	public float calcularUnitario(float qtdeEmbalagem,
								  float qtdeEntrada) {
		return qtdeEmbalagem * qtdeEntrada;
	}
	public float calcularUnitario(int qtdeEmbalagem,
								  int qtdEntrada) {
		return qtdeEmbalagem * qtdEntrada;
	}
	public float calcularUnitario(String qtdeEmbalagem,
								  String qtdeEntrada) {
		return Float.parseFloat(qtdeEntrada)*
				Float.parseFloat(qtdeEmbalagem);
	}
}
