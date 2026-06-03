package aula21;
public class Lutador {
   
    private String nome;
    private String nacionalidade;
    private int idade;
    private float altura;
    private float peso;
    private String categoria;
    private int vitorias;
    private int empates;
    private int derrotas;

    public void apresentar(){
        System.out.println("====== APRESENTAÇÃO DE LUTADOR ======");
        System.out.println("AND HIS NAME IS: " + this.getNome());
        System.out.println(this.getNacionalidade());
        System.out.println(this.getIdade() + " anos");
        System.out.println("Medindo: " + this.getAltura() + "m");
        System.out.println("Pesando: " + this.getPeso() + "Kg");
        System.out.println("Ganhou " + this.getVitorias() + " lutas");
        System.out.println("=====================================");
    }
    
    public void status(){
        System.out.println("<<< Status do Lutador >>>");
        System.out.println(this.getNome());
        System.out.println("Categoria Peso " + this.getCategoria());
        if (this.getVitorias() <= 1){
            System.out.println("Venceu: " + this.getVitorias() + " vez.");
        } else {
            System.out.println("Venceu: " + this.getVitorias() + " vezes.");
        }
        System.out.println("Empates: " + this.getEmpates());
        if (this.getDerrotas() <= 1){
            System.out.println("Perdeu: " + this.getDerrotas() + " vez.");
        } else {
            System.out.println("Perdeu: " + this.getDerrotas());
        }
        System.out.println("-------------------------");
    }
    
    public void ganharLuta(){
        this.setVitorias(this.getVitorias() + 1);
    }
    
    public void perderLuta(){
        this.setDerrotas(this.getDerrotas() + 1);
    }
    
    public void empatarLuta(){
        this.setEmpates(this.getEmpates() + 1);
    }

    public Lutador(String nome, String nacionalidade, int idade, float altura, float peso, int vitorias, int empates, int derrotas) {
        this.nome = nome;
        this.nacionalidade = nacionalidade;
        this.idade = idade;
        this.altura = altura;
        this.setPeso(peso);
        this.vitorias = vitorias;
        this.empates = empates;
        this.derrotas = derrotas;
    }
    
    
    
    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public String getNacionalidade() {
        return nacionalidade;
    }

    public void setNacionalidade(String nacionalidade) {
        this.nacionalidade = nacionalidade;
    }

    public int getIdade() {
        return idade;
    }

    public void setIdade(int idade) {
        this.idade = idade;
    }

    public float getAltura() {
        return altura;
    }

    public void setAltura(float altura) {
        this.altura = altura;
    }

    public float getPeso() {
        return peso;
    }

    public void setPeso(float peso) {
        this.peso = peso;
        this.setCategoria();
    }

    public String getCategoria() {
        return categoria;
    }

    private void setCategoria() {
        if (this.peso < 55.2){
            this.categoria = "Inválido.";
        } else if (this.peso <= 70.3){
            this.categoria = "Leve";
        } else if (this.peso <= 83.9){
            this.categoria = "Médio";
        } else if (this.peso <= 120.2){
            this.categoria = "Pesado";
        } else {
            this.categoria = "Inválido.";
        }
    }

    public int getVitorias() {
        return vitorias;
    }

    public void setVitorias(int vitorias) {
        this.vitorias = vitorias;
    }

    public int getEmpates() {
        return empates;
    }

    public void setEmpates(int empates) {
        this.empates = empates;
    }

    public int getDerrotas() {
        return derrotas;
    }

    public void setDerrotas(int derrotas) {
        this.derrotas = derrotas;
    }

    
    
}
