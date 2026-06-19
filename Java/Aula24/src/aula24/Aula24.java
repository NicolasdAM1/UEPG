package aula24;
public class Aula24 {
    public static void main(String[] args) {
        
        /*Visitante v1 = new Visitante();
        v1.setNome("Visitante01");
        v1.setIdade(30);
        v1.setSexo("F");
        */
        
        Aluno a1 = new Aluno();
        a1.setNome("Aluno01");
        a1.setMatricula(260000001);
        a1.setIdade(18);
        a1.setSexo("M");
        a1.setCurso("Curso01");
        a1.pagarMensalidade();
        
        Bolsista b1 = new Bolsista();
        b1.setMatricula(260000002);
        b1.setNome("Aluno02");
        b1.setBolsa(152.58f);
        b1.pagarMensalidade();
        
    }
    
}
