public class Main {
    public static void main(String[] args){
        Inversor inversor = new Inversor();
        String palavraTeste = "ROMA";
        palavraTeste = inversor.inverterString(palavraTeste);
        System.out.println(" "+palavraTeste);
    }

}
