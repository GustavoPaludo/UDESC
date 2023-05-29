package Main;

//import UI.GerenciadorDeJanelas;
import UI.JanelaPrincipal;
import java.util.Arrays;

public class Main {
    public static void main(String[] args) {
        //new GerenciadorDeJanelas();
        JanelaPrincipal janelaPrincipal = null;
        new JanelaPrincipal();
        janelaPrincipal.setVisible(true);
        for(int i = 0; i < 10000; i++) {
            System.out.println("...main...");
        }
        System.out.println("O main acabou!!");
    }
}