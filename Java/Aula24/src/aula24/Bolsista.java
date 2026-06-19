package aula24;
public class Bolsista extends Aluno {
 
    private float bolsa;
    
    public void renovarBolsa(){
        System.out.println("Renovando bolsa do aluno: " + this.nome);
    }
    
    @Override
    public void pagarMensalidade(){
        System.out.println("Mensalidade do bolsista " + this.nome + (" paga."));
    }

    public float getBolsa() {
        return bolsa;
    }

    public void setBolsa(float bolsa) {
        this.bolsa = bolsa;
    }
    
    
}
