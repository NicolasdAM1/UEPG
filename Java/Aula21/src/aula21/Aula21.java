package aula21;
public class Aula21 {
    public static void main(String[] args) {
        Lutador l[] = new Lutador[4]; 
                
        l[0] = new Lutador("John Cena", "EUA", 49, 1.85f, 114f, 7, 0, 0);

        l[1] = new Lutador("Liu Kang", "China", 37, 1.84f, 89f, 9, 1, 1);

        
        Luta UFC01 = new Luta();
        
        UFC01.marcarLuta(l[0], l[1]);
        UFC01.lutar();
        
        
        l[0].status();
        l[1].status(); 
    }
    
}
