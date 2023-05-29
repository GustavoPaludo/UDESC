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
    //JTextField edtVisor;
    JFrame frame;
    //Creating objects of Components
    JLabel label = new JLabel();
    JTextField textField = new JTextField();
    JButton buttonZero = new JButton("0");
    JButton buttonOne = new JButton("1");
    JButton buttonTwo = new JButton("2");
    JButton buttonThree = new JButton("3");
    JButton buttonFour = new JButton("4");
    JButton buttonFive = new JButton("5");
    JButton buttonSix = new JButton("6");
    JButton buttonSeven = new JButton("7");
    JButton buttonEight = new JButton("8");
    JButton buttonNine = new JButton("9");
    JButton buttonDot = new JButton(".");
    JButton buttonClear = new JButton("C");
    JButton buttonEqual = new JButton("=");
    JButton buttonMul = new JButton("X");
    JButton buttonDiv = new JButton("/");
    JButton buttonPlus = new JButton("+");
    JButton buttonMinus = new JButton("-");
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

        //Setting property of button 7
        buttonSeven.setBounds(10, 110, 60, 40);
        buttonSeven.setFont(new Font("Arial", Font.BOLD, 20));
        frame.add(buttonSeven);
        buttonSeven.setActionCommand("buttonSeven");
        buttonSeven.addActionListener(this);

        // Setting property of button 8
        buttonEight.setBounds(80, 110, 60, 40);
        buttonEight.setFont(new Font("Arial", Font.BOLD, 20));
        frame.add(buttonEight);
        buttonEight.setActionCommand("buttonEight");
        buttonEight.addActionListener(this);

        //Setting property of button 9
        buttonNine.setBounds(150, 110, 60, 40);
        buttonNine.setFont(new Font("Arial", Font.BOLD, 20));
        frame.add(buttonNine);
        buttonNine.setActionCommand("buttonNine");
        buttonNine.addActionListener(this);

        //Setting property of button 4
        buttonFour.setBounds(10, 170, 60, 40);
        buttonFour.setFont(new Font("Arial", Font.BOLD, 20));
        frame.add(buttonFour);
        buttonFour.setActionCommand("buttonFour");
        buttonFour.addActionListener(this);

        //Setting property of button 5
        buttonFive.setBounds(80, 170, 60, 40);
        buttonFive.setFont(new Font("Arial", Font.BOLD, 20));
        frame.add(buttonFive);
        buttonFive.setActionCommand("buttonFive");
        buttonFive.addActionListener(this);

        //Setting property of button 6
        buttonSix.setBounds(150, 170, 60, 40);
        buttonSix.setFont(new Font("Arial", Font.BOLD, 20));
        frame.add(buttonSix);
        buttonSix.setActionCommand("buttonSix");
        buttonSix.addActionListener(this);

        //Setting property of button 1
        buttonOne.setBounds(10, 230, 60, 40);
        buttonOne.setFont(new Font("Arial", Font.BOLD, 20));
        frame.add(buttonOne);
        buttonOne.setActionCommand("buttonOne");
        buttonOne.addActionListener(this);

        //Setting property of button 2
        buttonTwo.setBounds(80, 230, 60, 40);
        buttonTwo.setFont(new Font("Arial", Font.BOLD, 20));
        frame.add(buttonTwo);
        buttonTwo.setActionCommand("buttonTwo");
        buttonTwo.addActionListener(this);

        //Setting property of button 3
        buttonThree.setBounds(150, 230, 60, 40);
        buttonThree.setFont(new Font("Arial", Font.BOLD, 20));
        frame.add(buttonThree);
        buttonThree.setActionCommand("buttonThree");
        buttonThree.addActionListener(this);

        //Setting property of dot button
        buttonDot.setBounds(80, 290, 60, 40);
        buttonDot.setFont(new Font("Arial", Font.BOLD, 20));
        frame.add(buttonDot);
        buttonDot.setActionCommand("buttonDot");
        buttonDot.addActionListener(this);

        //Setting property of button 0
        buttonZero.setBounds(10, 290, 60, 40);
        buttonZero.setFont(new Font("Arial", Font.BOLD, 20));
        frame.add(buttonZero);
        buttonZero.setActionCommand("buttonZero");
        buttonZero.addActionListener(this);

        //Setting property of button =
        buttonEqual.setBounds(10, 350, 270, 40);
        buttonEqual.setFont(new Font("Arial", Font.BOLD, 20));
        buttonEqual.setBackground(Color.red);
        buttonEqual.setForeground(Color.white);
        frame.add(buttonEqual);
        buttonEqual.setActionCommand("buttonEqual");
        buttonEqual.addActionListener(this);

        //Setting property of button /
        buttonDiv.setBounds(220, 110, 60, 40);
        buttonDiv.setFont(new Font("Arial", Font.BOLD, 20));
        buttonDiv.setBackground(new Color(239, 188, 2));
        frame.add(buttonDiv);
        buttonDiv.setActionCommand("buttonDiv");
        buttonDiv.addActionListener(this);

        //Setting property of button X
        buttonMul.setBounds(220, 230, 60, 40);
        buttonMul.setFont(new Font("Arial", Font.BOLD, 20));
        buttonMul.setBackground(new Color(239, 188, 2));
        frame.add(buttonMul);
        buttonMul.setActionCommand("buttonMul");
        buttonMul.addActionListener(this);

        //Setting property of button -
        buttonMinus.setBounds(220, 170, 60, 40);
        buttonMinus.setFont(new Font("Arial", Font.BOLD, 20));
        buttonMinus.setBackground(new Color(239, 188, 2));
        frame.add(buttonMinus);
        buttonMinus.setActionCommand("buttonMinus");
        buttonMinus.addActionListener(this);

        //Setting property of button +
        buttonPlus.setBounds(220, 290, 60, 40);
        buttonPlus.setFont(new Font("Arial", Font.BOLD, 20));
        buttonPlus.setBackground(new Color(239, 188, 2));
        frame.add(buttonPlus);
        buttonPlus.setActionCommand("buttonPlus");
        buttonPlus.addActionListener(this);

        //Setting property of clear button
        buttonClear.setBounds(150, 290, 60, 40);
        buttonClear.setFont(new Font("Arial", Font.BOLD, 12));
        buttonClear.setBackground(Color.red);
        buttonClear.setForeground(Color.white);
        frame.add(buttonClear);
        buttonClear.setActionCommand("buttonClear");
        buttonClear.addActionListener(this);

    }


    @Override
    public void actionPerformed(ActionEvent e) {

        String command = e.getActionCommand();
        String Texto = null;

        if(command.equalsIgnoreCase("buttonOne")){
            if(aux!=0){
                textField.setText("");
                aux=0;
            }
            String valorAtualOne = textField.getText() + buttonOne.getText();
            textField.setText(valorAtualOne);
        }

        if(command.equalsIgnoreCase("buttonTwo")){
            if(aux!=0){
                textField.setText("");
                aux=0;
            }
            String valorAtualTwo = textField.getText() + buttonTwo.getText();
            textField.setText(valorAtualTwo);
        }

        if(command.equalsIgnoreCase("buttonThree")){
            if(aux!=0){
                textField.setText("");
                aux=0;
            }
            String valorAtualThree = textField.getText() + buttonThree.getText();
            textField.setText(valorAtualThree);
        }

        if(command.equalsIgnoreCase("buttonFour")){
            if(aux!=0){
                textField.setText("");
                aux=0;
            }
            String valorAtualFour = textField.getText() + buttonFour.getText();
            textField.setText(valorAtualFour);
        }

        if(command.equalsIgnoreCase("buttonFive")){
            if(aux!=0){
                textField.setText("");
                aux=0;
            }
            String valorAtualFive = textField.getText() + buttonFive.getText();
            textField.setText(valorAtualFive);
        }

        if(command.equalsIgnoreCase("buttonSix")){
            if(aux!=0){
                textField.setText("");
                aux=0;
            }
            String valorAtualSix = textField.getText() + buttonSix.getText();
            textField.setText(valorAtualSix);
        }

        if(command.equalsIgnoreCase("buttonSeven")){
            if(aux!=0){
                textField.setText("");
                aux=0;
            }
            String valorAtualSeven = textField.getText() + buttonSeven.getText();
            textField.setText(valorAtualSeven);
        }

        if(command.equalsIgnoreCase("buttonEight")){
            if(aux!=0){
                textField.setText("");
                aux=0;
            }
            String valorAtualEight = textField.getText() + buttonEight.getText();
            textField.setText(valorAtualEight);
        }

        if(command.equalsIgnoreCase("buttonNine")){
            if(aux!=0){
                textField.setText("");
                aux=0;
            }
            String valorAtualNine = textField.getText() + buttonNine.getText();
            textField.setText(valorAtualNine);
        }

        if(command.equalsIgnoreCase("buttonZero")){
            if(aux!=0){
                textField.setText("");
                aux=0;
            }
            String valorAtualZero = textField.getText() + buttonZero.getText();
            textField.setText(valorAtualZero);
        }

        if(command.equalsIgnoreCase("buttonDot")){
            if(textField.getText().equals("")){
                textField.setText("0.");
            }
            else if(textField.getText().contains(".")){
                buttonDot.setEnabled(false);
            }
            else{
                String buttonDotTexto = textField.getText() + buttonDot.getText();
                textField.setText(buttonDotTexto);
            }
            buttonDot.setEnabled(true);
        }

        if(command.equalsIgnoreCase("buttonPlus")){
            Texto = buttonPlus.getText();
            getOperador(Texto);
        }

        if(command.equalsIgnoreCase("buttonMinus")){
            Texto = buttonMinus.getText();
            getOperador(Texto);
        }

        if(command.equalsIgnoreCase("buttonDiv")){
            Texto = buttonDiv.getText();
            getOperador(Texto);
        }

        if(command.equalsIgnoreCase("buttonMul")){
            Texto = buttonMul.getText();
            getOperador(Texto);
        }

        if(command.equalsIgnoreCase("buttonClear")){
            resultado=0;
            textField.setText("");
        }

        if(command.equalsIgnoreCase("buttonEqual")){
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
