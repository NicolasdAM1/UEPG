package aula18;

public class Aula18 {
    public static void main(String[] args) {
        
        ContaBanco c1 = new ContaBanco();
        c1.setNumConta(01);
        c1.setDono("Nicolas de Antoni Mendes");
        c1.abrirConta("CC");
        c1.depositar(5f);
        c1.estadoAtual();
        c1.fecharConta();
        c1.sacar(156f);
        c1.sacar(155f);
        c1.estadoAtual();
        c1.fecharConta();
        c1.depositar(25f);
        c1.sacar(15f);
        c1.estadoAtual();
        
        ContaBanco c2 = new ContaBanco(64615258, "", "Nicolas", 12f, true);
        c2.estadoAtual();
        c2.abrirConta("CP");
        c2.fecharConta();
        c2.depositar(25f);
        c2.sacar(200f);
        c2.sacar(50f);
        c2.pagarMensalidade();
        c2.fecharConta();
        c2.sacar(105f);
        c2.pagarMensalidade();
        c2.fecharConta();
        c2.sacar(100f);
        c2.depositar(25f);
        c2.estadoAtual();
    }
    
}
