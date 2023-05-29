package modelo;

public class Calculadora {
    private double operador1;
    private double operador2;
    private String operacao;

    public Calculadora() {
        operador2 = 0.0;
        operador1 = 0.0;
    }

    public void setOperacao(String operacao) {
        this.operacao = operacao;
    }

    public void setOperador1(double operador1) {
        this.operador1 = operador1;
    }

    public void setOperador2(double operador2) {
        this.operador2 = operador2;
    }

    public double calcular() {
        double resposta = 0.0;
        switch(this.operacao) {
            case "+":
                resposta = operador1+operador2;
                break;
            case "-":
                resposta = operador1-operador2;
                break;
            case "X":
                resposta = operador1*operador2;
                break;
            case "/":
                resposta = operador1/operador2;
                break;
        }
        return resposta;
    }
}
