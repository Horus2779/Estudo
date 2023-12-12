package pjAula6;

/**
 * Exemplo de atributos de classes que comportam Wrapper
 * @author Lucivaldo
 *@data 28/03/2023
 */

public class TesteWrapper {
	//Atributos
	private int valorInt;
	private Integer valorInteger;
	private boolean valorBooleanNativo;
	private Boolean valorBooleanWrapper;
	
	//Metodos
	public int getValorInt() {
		return valorInt;
	}
	public void setValorInt(int valorInt) {
		this.valorInt = valorInt;
	}
	public Integer getValorInteger() {
		return valorInteger;
	}
	public void setValorInteger(Integer valorInteger) {
		this.valorInteger = valorInteger;
	}
	public boolean isValorBooleanNativo() {
		return valorBooleanNativo;
	}
	public void setValorBooleanNativo(boolean valorBooleanNativo) {
		this.valorBooleanNativo = valorBooleanNativo;
	}
	public Boolean getValorBooleanWrapper() {
		return valorBooleanWrapper;
	}
	public void setValorBooleanWrapper(Boolean valorBooleanWrapper) {
		this.valorBooleanWrapper = valorBooleanWrapper;
	}
	
}
