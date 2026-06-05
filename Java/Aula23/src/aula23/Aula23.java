package aula23;
public class Aula23 {
    public static void main(String[] args) {

        Pessoa p1 = new Pessoa();
        Aluno p2 = new Aluno();
        Professor p3 = new Professor();
        Funcionario p4 = new Funcionario();
        
        p1.setNome("Pessoa01");
        p2.setNome("Pessoa02");
        p3.setNome("Pessoa03");
        p4.setNome("Pessoa04");
        
        p1.setSexo("F");
        p2.setSexo("F");
        p3.setSexo("F");
        p4.setSexo("M");
        p2.setIdade(18);
        
        p2.setCurso("Medicina");
        p2.envelhecer();
        p3.setSalario(1000.5f);
        p4.setSetor("Estoque");
        p3.receberAumento(204.8f);
        p4.mudarTrabalho();
        p2.cancelarMatricula();
        
        System.out.println(p1.toString());
        System.out.println(p2.toString());
        System.out.println(p3.toString());
        System.out.println(p4.toString());
    }
}
