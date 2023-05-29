package UI;

import modelo.Calculadora;

import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class JanelaPrincipal extends JFrame implements ActionListener {

    double total1 = 0.0;
    double total2 = 0.0;
    private double resultado = 0.0;
    char operador;
    int aux=0;
    Calculadora calculadora;
    JFrame frame;
    JLabel label = new JLabel();
    JTextField textField = new JTextField();
    JButton BZero = new JButton("0");
    JButton BUm = new JButton("1");
    JButton BDois = new JButton("2");
    JButton BTres = new JButton("3");
    JButton BQuatro = new JButton("4");
    JButton BCinco = new JButton("5");
    JButton BSeis = new JButton("6");
    JButton BSete = new JButton("7");
    JButton BOito = new JButton("8");
    JButton BNove = new JButton("9");
    JButton BPonto = new JButton(".");
    JButton BLimpar = new JButton("C");
    JButton BIgual = new JButton("=");
    JButton BMult = new JButton("X");
    JButton BDiv = new JButton("/");
    JButton BMais = new JButton("+");
    JButton BMenos = new JButton("-");
    public JanelaPrincipal() {
        frame = new JFrame();
        frame.setTitle("Calculadora Basica");
        frame.setSize(300, 450);
        frame.getContentPane().setLayout(null);
        frame.getContentPane().setBackground(Color.DARK_GRAY);
        frame.setResizable(false);
        frame.setLocationRelativeTo(null);
        frame.setVisible(true);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        montarOLayout();
        label.setBounds(250, 0, 50, 50);
        label.setForeground(Color.white);
        frame.add(label);

        calculadora = new Calculadora();
    }

    private void montarOLayout() {

        textField.setBounds(10, 40, 270, 40);
        textField.setFont(new Font("Arial", Font.BOLD, 20));
        textField.setEditable(false);
        textField.setHorizontalAlignment(SwingConstants.RIGHT);
        frame.add(textField);

        BUm.setBounds(10, 230, 60, 40);
        BUm.setFont(new Font("Arial", Font.BOLD, 20));
        frame.add(BUm);
        BUm.setActionCommand("BUm");
        BUm.addActionListener(this);

        BDois.setBounds(80, 230, 60, 40);
        BDois.setFont(new Font("Arial", Font.BOLD, 20));
        frame.add(BDois);
        BDois.setActionCommand("BDois");
        BDois.addActionListener(this);

        BTres.setBounds(150, 230, 60, 40);
        BTres.setFont(new Font("Arial", Font.BOLD, 20));
        frame.add(BTres);
        BTres.setActionCommand("BTres");
        BTres.addActionListener(this);

        BQuatro.setBounds(10, 170, 60, 40);
        BQuatro.setFont(new Font("Arial", Font.BOLD, 20));
        frame.add(BQuatro);
        BQuatro.setActionCommand("BQuatro");
        BQuatro.addActionListener(this);

        BCinco.setBounds(80, 170, 60, 40);
        BCinco.setFont(new Font("Arial", Font.BOLD, 20));
        frame.add(BCinco);
        BCinco.setActionCommand("BCinco");
        BCinco.addActionListener(this);

        BSeis.setBounds(150, 170, 60, 40);
        BSeis.setFont(new Font("Arial", Font.BOLD, 20));
        frame.add(BSeis);
        BSeis.setActionCommand("BSeis");
        BSeis.addActionListener(this);

        BSete.setBounds(10, 110, 60, 40);
        BSete.setFont(new Font("Arial", Font.BOLD, 20));
        frame.add(BSete);
        BSete.setActionCommand("BSete");
        BSete.addActionListener(this);

        BOito.setBounds(80, 110, 60, 40);
        BOito.setFont(new Font("Arial", Font.BOLD, 20));
        frame.add(BOito);
        BOito.setActionCommand("BOito");
        BOito.addActionListener(this);

        BNove.setBounds(150, 110, 60, 40);
        BNove.setFont(new Font("Arial", Font.BOLD, 20));
        frame.add(BNove);
        BNove.setActionCommand("BNove");
        BNove.addActionListener(this);

        BZero.setBounds(10, 290, 60, 40);
        BZero.setFont(new Font("Arial", Font.BOLD, 20));
        frame.add(BZero);
        BZero.setActionCommand("BZero");
        BZero.addActionListener(this);

        BPonto.setBounds(80, 290, 60, 40);
        BPonto.setFont(new Font("Arial", Font.BOLD, 20));
        frame.add(BPonto);
        BPonto.setActionCommand("BPonto");
        BPonto.addActionListener(this);

        BIgual.setBounds(10, 350, 270, 40);
        BIgual.setFont(new Font("Arial", Font.BOLD, 20));
        BIgual.setBackground(Color.red);
        BIgual.setForeground(Color.white);
        frame.add(BIgual);
        BIgual.setActionCommand("BIgual");
        BIgual.addActionListener(this);

        BDiv.setBounds(220, 110, 60, 40);
        BDiv.setFont(new Font("Arial", Font.BOLD, 20));
        BDiv.setBackground(new Color(239, 188, 2));
        frame.add(BDiv);
        BDiv.setActionCommand("BDiv");
        BDiv.addActionListener(this);

        BMult.setBounds(220, 230, 60, 40);
        BMult.setFont(new Font("Arial", Font.BOLD, 20));
        BMult.setBackground(new Color(239, 188, 2));
        frame.add(BMult);
        BMult.setActionCommand("BMult");
        BMult.addActionListener(this);

        BMenos.setBounds(220, 170, 60, 40);
        BMenos.setFont(new Font("Arial", Font.BOLD, 20));
        BMenos.setBackground(new Color(239, 188, 2));
        frame.add(BMenos);
        BMenos.setActionCommand("BMenos");
        BMenos.addActionListener(this);

        BMais.setBounds(220, 290, 60, 40);
        BMais.setFont(new Font("Arial", Font.BOLD, 20));
        BMais.setBackground(new Color(239, 188, 2));
        frame.add(BMais);
        BMais.setActionCommand("BMais");
        BMais.addActionListener(this);

        BLimpar.setBounds(150, 290, 60, 40);
        BLimpar.setFont(new Font("Arial", Font.BOLD, 12));
        BLimpar.setBackground(Color.red);
        BLimpar.setForeground(Color.white);
        frame.add(BLimpar);
        BLimpar.setActionCommand("BLimpar");
        BLimpar.addActionListener(this);

    }


    @Override
    public void actionPerformed(ActionEvent e) {

        String command = e.getActionCommand();
        String Texto = null;

        if(command.equalsIgnoreCase("BUm")){
            if(aux!=0){
                textField.setText("");
                aux=0;
            }
            String valorAtualUm = textField.getText() + BUm.getText();
            textField.setText(valorAtualUm);
        }

        if(command.equalsIgnoreCase("BDois")){
            if(aux!=0){
                textField.setText("");
                aux=0;
            }
            String valorAtualDois = textField.getText() + BDois.getText();
            textField.setText(valorAtualDois);
        }

        if(command.equalsIgnoreCase("BTres")){
            if(aux!=0){
                textField.setText("");
                aux=0;
            }
            String valorAtualTres = textField.getText() + BTres.getText();
            textField.setText(valorAtualTres);
        }

        if(command.equalsIgnoreCase("BQuatro")){
            if(aux!=0){
                textField.setText("");
                aux=0;
            }
            String valorAtualQuatro = textField.getText() + BQuatro.getText();
            textField.setText(valorAtualQuatro);
        }

        if(command.equalsIgnoreCase("BCinco")){
            if(aux!=0){
                textField.setText("");
                aux=0;
            }
            String valorAtualCinco = textField.getText() + BCinco.getText();
            textField.setText(valorAtualCinco);
        }

        if(command.equalsIgnoreCase("BSeis")){
            if(aux!=0){
                textField.setText("");
                aux=0;
            }
            String valorAtualSeis = textField.getText() + BSeis.getText();
            textField.setText(valorAtualSeis);
        }

        if(command.equalsIgnoreCase("BSete")){
            if(aux!=0){
                textField.setText("");
                aux=0;
            }
            String valorAtualSete = textField.getText() + BSete.getText();
            textField.setText(valorAtualSete);
        }

        if(command.equalsIgnoreCase("BOito")){
            if(aux!=0){
                textField.setText("");
                aux=0;
            }
            String valorAtualOito = textField.getText() + BOito.getText();
            textField.setText(valorAtualOito);
        }

        if(command.equalsIgnoreCase("BNove")){
            if(aux!=0){
                textField.setText("");
                aux=0;
            }
            String valorAtualNove = textField.getText() + BNove.getText();
            textField.setText(valorAtualNove);
        }

        if(command.equalsIgnoreCase("BZero")){
            if(aux!=0){
                textField.setText("");
                aux=0;
            }
            String valorAtualZero = textField.getText() + BZero.getText();
            textField.setText(valorAtualZero);
        }

        if(command.equalsIgnoreCase("BPonto")){
            if(textField.getText().equals("")){
                textField.setText("0.");
            }
            else if(textField.getText().contains(".")){
                BPonto.setEnabled(false);
            }
            else{
                String BPontoTexto = textField.getText() + BPonto.getText();
                textField.setText(BPontoTexto);
            }
            BPonto.setEnabled(true);
        }

        if(command.equalsIgnoreCase("BMais")){
            Texto = BMais.getText();
            getOperador(Texto);
        }

        if(command.equalsIgnoreCase("BMenos")){
            Texto = BMenos.getText();
            getOperador(Texto);
        }

        if(command.equalsIgnoreCase("BDiv")){
            Texto = BDiv.getText();
            getOperador(Texto);
        }

        if(command.equalsIgnoreCase("BMult")){
            Texto = BMult.getText();
            getOperador(Texto);
        }

        if(command.equalsIgnoreCase("BLimpar")){
            resultado=0;
            textField.setText("");
        }

        if(command.equalsIgnoreCase("BIgual")){
            total2=total2+Double.parseDouble((textField.getText()));
            calculadora.setOperador2(total2);
            resultado = calculadora.calcular();
            textField.setText(Double.toString(resultado));
            total1 = 0;
            total2 = 0;
            aux++;
        }
    }
    private void getOperador(String Texto){
        operador=Texto.charAt(0);
        calculadora.setOperacao(Texto);
        total1=total1+Double.parseDouble((textField.getText()));
        calculadora.setOperador1(total1);
        textField.setText("");
    }

}
