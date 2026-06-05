package aula22;
public class Aula22 {
    public static void main(String[] args) {

        Pessoa p[] = new Pessoa[2];
        Livro l[] = new Livro[3];
        
        p[0] = new Pessoa("Pessoa01", 18, "F");
        p[1] = new Pessoa("Pessoa02", 20, "F");
        
        l[0] = new Livro("Título", "Autor", 200, p[0]);
        l[1] = new Livro("Outro Título", "Outro Autor", 300, p[1]);
        
        l[0].abrir();
        l[0].folhear(199);
        l[1].abrir();
        l[1].folhear(4);
        
        System.out.println(l[0].detalhes());
        System.out.println(l[1].detalhes());
        
    }
    
}
