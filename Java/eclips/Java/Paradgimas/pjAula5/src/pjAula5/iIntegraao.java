package pjAula5;

import java.security.Timestamp;

public interface iIntegraao {
	public void servicoConexao (String user, String psw);
	public void fecharConexao();
	public void abrirSessao(long serial);
	public void invalidarsessao (Timestamp time);
}
