<?php

//Establishing Connection with Server
$connection = mysql_connect("localhost", "root", "exchange");
//Selecting Database
$db = mysql_select_db("quti", $connection);
//MySQL Query to read data
$query = mysql_query("SELECT * FROM `profile` WHERE uid = 4", $connection);

while ($row = mysql_fetch_array($query)) {
	echo $row['city']; 
};

?>