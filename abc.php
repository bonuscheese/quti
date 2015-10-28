<!doctype html>
<html>
<head>
<meta charset="utf-8">
<link href="css/style.css" rel="stylesheet" type="text/css" media="screen and (max-width: 3840px)" />
<title>University Profile</title>
</head>

<body>

<header>
    <h1>University </h1>
    <h2>University</h2>
</header>

<!--  University Profile  -->
<div class="container">

<?php

$servername = "localhost";
$username = "root";
$password = "";
$dbname = "quti";

// Create connection
$conn = new mysqli($servername, $username, $password, $dbname);
// Check connection
if ($conn->connect_error) {
    die("Connection failed: " . $conn->connect_error);
}
	$sql = "select * from profile	
";
$result = $conn->query($sql);

       if ($result->num_rows > 0) {

     // output data of each row

} else {
     echo "0 results";
}


$conn->close();
?>

<script src="js/index.js"></script>

</body>
</html>
