<?php
// define variables and set to empty values
$nameErr = $emailErr = $senhaErr = $genderErr = $websiteErr = "";
$name = $email = $senha = $gender = $comment = $website = "";

if ($_SERVER["REQUEST_METHOD"] == "POST") {
  if (empty($_POST["name"])) {
    $nameErr = "Name is required";
  } else {
    $name = test_input($_POST["name"]);
    // check if name only contains letters and whitespace
    if (!preg_match("/^[a-zA-Z-' ]*$/",$name)) {
      $nameErr = "Only letters and white space allowed";
    }
  }
  
  if (empty($_POST["email"])) {
    $emailErr = "Email is required";
  } else {
    $email = test_input($_POST["email"]);
    // check if e-mail address is well-formed
    if (!filter_var($email, FILTER_VALIDATE_EMAIL)) {
      $emailErr = "Invalid email format";
    }
  }

  if (empty($_POST["senha"])) {
    $senhaErr = "Senha is required";
  } else {
    $senha = test_input($_POST["senha"]);
    // check if password is well-formed
    if (preg_match('/[^\w\s]|[\d]|[A-Z]|[a-z]/', $senha) === 0) {
        $senhaErr = "Formato inválido. A senha deve conter símbolos, números, letras maiúsculas e minúsculas.";
    }
    if (strlen($senha) < 8) {
        $senhaErr = "A senha deve possuir pelo menos 8 caracteres";
    }
}

  
  // Ler arquivo de usuários existente ou criar um novo se não existir
  $arquivo = "usuarios.txt";
  if (!file_exists($arquivo)) {
      file_put_contents($arquivo, "");
  }
  
  // Verificar se o formulário foi submetido
  if ($_SERVER["REQUEST_METHOD"] == "POST") {
      // Obter os dados do formulário
      $email = $_POST["email"];
      $senha = $_POST["senha"];
  
      // Verificar se o usuário já existe no arquivo
      $usuarios = file_get_contents($arquivo);
      $usuarioEncontrado = false;
      $linhas = explode("\n", $usuarios);
      foreach ($linhas as $linha) {
          $dados = explode(":", $linha);
          $hashSenha = $dados[1]; // Obter a senha criptografada
          if ($dados[0] === $email && password_verify($senha, $hashSenha)) {
              $usuarioEncontrado = true;
              break;
          }
      }
      
      if ($usuarioEncontrado) {
          echo "Usuário autenticado com sucesso!";
      } else {
          // Adicionar o usuário ao arquivo
          $hashSenha = password_hash($senha, PASSWORD_DEFAULT); // Criptografar a senha
          file_put_contents($arquivo, "$email:$hashSenha\n", FILE_APPEND);
          echo "Usuário não cadastrado. Criado novo login automaticamente";
      }
  }


  if (empty($_POST["comment"])) {
    $comment = "";
  } else {
    $comment = test_input($_POST["comment"]);
  }

  if (empty($_POST["gender"])) {
    $genderErr = "Gender is required";
  } else {
    $gender = test_input($_POST["gender"]);
  }
}

function test_input($data) {
  $data = trim($data);
  $data = stripslashes($data);
  $data = htmlspecialchars($data);
  return $data;
}
?>

<h2>PHP Form Validation Example</h2>
<p><span class="error">* required field</span></p>
<form method="post" action="<?php echo htmlspecialchars($_SERVER["PHP_SELF"]);?>">  
  Name: <input type="text" name="name" value="<?php echo $name;?>">
  <span class="error">* <?php echo $nameErr;?></span>
  <br><br>
  E-mail: <input type="email" name="email" value="<?php echo $email;?>">
  <span class="error">* <?php echo $emailErr;?></span>
  <br><br>
  Senha: <input type="password" name="senha" value="<?php echo $senha;?>">
  <span class="error">* <?php echo $senhaErr;?></span>
  <br><br>
  Comment: <textarea name="comment" rows="5" cols="40"><?php echo $comment;?></textarea>
  <br><br>
  Gender:
  <input type="radio" name="gender" <?php if (isset($gender) && $gender=="female") echo "checked";?> value="female">Female
  <input type="radio" name="gender" <?php if (isset($gender) && $gender=="male") echo "checked";?> value="male">Male
  <input type="radio" name="gender" <?php if (isset($gender) && $gender=="other") echo "checked";?> value="other">Other  
  <span class="error">* <?php echo $genderErr;?></span>
  <br><br>
  <input type="submit" name="submit" value="Submit" >  
</form>

<?php
echo "<h2>Your Input:</h2>";
echo $name;
echo "<br>";
echo $email;
echo "<br>";
echo $senha;
echo "<br>";
echo $website;
echo "<br>";
echo $comment;
echo "<br>";
echo $gender;
?>

</body>
</html>
