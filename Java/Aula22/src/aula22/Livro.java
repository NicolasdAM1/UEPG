package aula22;
public class Livro implements Publicacao {
    
    private String title;
    private String autor;
    private int totalPaginas;
    private int paginaAtual;
    private boolean aberto;
    private Pessoa leitor;

    public String detalhes() {
        return "Livro{" + "title=" + title + "\n, autor="
                + autor + "\n, totalPaginas=" + totalPaginas 
                + "\n, paginaAtual=" + paginaAtual + "\n, aberto=" 
                + aberto + "\n, leitor=" + leitor.getNome() 
                + "\n, idade=" + leitor.getIdade() 
                + "\n, sexo=" + leitor.getSexo() + '}';
    }

    
    
    
    public Livro(String title, String autor, int totalPaginas, Pessoa leitor) {
        this.title = title;
        this.autor = autor;
        this.totalPaginas = totalPaginas;
        this.leitor = leitor;
    }

    public String getTitle() {
        return title;
    }

    public void setTitle(String title) {
        this.title = title;
    }

    public String getAutor() {
        return autor;
    }

    public void setAutor(String autor) {
        this.autor = autor;
    }

    public int getTotalPaginas() {
        return totalPaginas;
    }

    public void setTotalPaginas(int totalPaginas) {
        this.totalPaginas = totalPaginas;
    }

    public int getPaginaAtual() {
        return paginaAtual;
    }

    public void setPaginaAtual(int paginaAtual) {
        this.paginaAtual = paginaAtual;
    }

    public boolean isAberto() {
        return aberto;
    }

    public void setAberto(boolean aberto) {
        this.aberto = aberto;
    }

    public Pessoa getLeitor() {
        return leitor;
    }

    public void setLeitor(Pessoa leitor) {
        this.leitor = leitor;
    }

    @Override
    public void abrir() {
        this.aberto = true;
    }

    @Override
    public void fechar() {
        this.aberto = false;
    }

    @Override
    public void folhear(int pag) {
        if (pag > totalPaginas){
            this.paginaAtual = 0;
        } else {
            this.paginaAtual = pag;
        }
    }

    @Override
    public void virarPag() {
        this.paginaAtual++;
    }

    @Override
    public void voltarPag() {
        this.paginaAtual--;
    }

    
    
    
}
