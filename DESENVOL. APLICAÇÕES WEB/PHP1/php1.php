<!DOCTYPE html>
<html>
<body>

  <?php
    date_default_timezone_set('America/Sao_Paulo'); 
    $dataHoraAtual = date('d/m/Y \à\s H:i\h'); 
    echo 'Hoje é '.$dataHoraAtual;
  ?>


  <?php
    function obterPrimeirosNomes($nomesCompletos) {
      $primeirosNomes = array_map(function($nomeCompleto) {
        $nomes = explode(' ', $nomeCompleto);
        return $nomes[0];
      }, $nomesCompletos);
      
      return $primeirosNomes;
    }
    
    // Exemplo de uso da função
    $nomes = array('João Silva', 'Maria Santos', 'Pedro Rocha');
    $primeirosNomes = obterPrimeirosNomes($nomes);
    print_r($primeirosNomes);
  ?>

  <?php
    $contadorFile = 'contador.txt';
    if (file_exists($contadorFile)) {
      $contador = (int) file_get_contents($contadorFile);
    } else {
      $contador = 0;
    }
    $contador++;
    file_put_contents($contadorFile, $contador);
    echo 'Esta página foi visitada '.$contador.' vezes.';
  ?>

  <?php
      session_start();
      $nome = 'Gustavo';
      $_SESSION['nomeUsuario'] = $nome;
      if (isset($_SESSION['nomeUsuario'])) {
        echo 'Bem-vindo, '.$_SESSION['nomeUsuario'].'!';
      } else {
        echo 'Olá, visitante!';
      }
  ?>


</body>
</html>