package aula28;
public class Aula28 {
    public static void main(String[] args) {
        Video v[] = new Video[5];
        Gafanhoto g[] = new Gafanhoto[2];
        Visualizacao vs[] = new Visualizacao[2];
        
        
        v[0] = new Video("Primeiro Vídeo do Canal");
        v[1] = new Video("Vlog #001");
        v[2] = new Video("Gameplay #001");
        
        g[0] = new Gafanhoto("Nome", 18, "M", "Username");
        g[1] = new Gafanhoto("Nome2", 35, "F", "Username2");
        
        vs[0] = new Visualizacao(g[0], v[0]);
        vs[0].avaliar(2);
        System.out.println(vs[0].toString());
        vs[1] = new Visualizacao(g[1], v[2]);
        vs[1].avaliar(93.0f);
        System.out.println(vs[1].toString());
        
        System.out.println("\nVÍDEOS\n----------------------");
        System.out.println(v[0].toString());
        System.out.println(v[1].toString());
        System.out.println("\nINSCRITOS\n---------------------");
        System.out.println(g[0].toString());
        System.out.println(g[1].toString());
      
    }
    
}
