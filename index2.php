<?php
$servername = "localhost";
$username = "root";
$password = "";
$dbname = "quti";

// Create connection
$conn = new mysqli($servername, $username, $password, $dbname);

//Get ID from request
$id = isset($_GET['uID']) ? (int)$_GET['uID'] : 0;

//Check id is valid
if($id > 0)
{
    //Query the DB
    $resource = mysql_query("SELECT city FROM profile WHERE uID = " . $id);
    if($resource === false)
    {
        die("Database Error");
    }

    if(mysql_num_rows($resource) == 0)
    {
        die("No User Exists");
    }

    $result = mysql_fetch_assoc($resource);

    echo "Hello User, your number is" .  $result['city'];
}
?> 