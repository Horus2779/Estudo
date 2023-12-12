package pjAula6;

import javax.swing.JFrame;

/**
 * 
 * @author luciv
 *
 */

public class frnCadastro extends JFrame{
	JButton btnCadastrar, btnLimpar;
	
	public frnCadastro() {
		setTitle("Exemplo de Formulario");
		setSize(300, 100);
		
		setVisible(true);
	}
	public static void main(String[] args) {
		frmCadastro frm = new frmCadastro();
	}
}
