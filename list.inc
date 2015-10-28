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

$sql = "SELECT city  FROM profile";
$result = $conn->query($sql);

if ($result->num_rows > 0) {
     // output data of each row
     while($row = $result->fetch_assoc()) {
         echo "". $row["city"]. "  <br>";
     }
} else {
     echo "0 results";
}
$conn->close();
?> 
 </td>
              <td width="369">Website:
                
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

$sql = "SELECT website  FROM profile";
$result = $conn->query($sql);

if ($result->num_rows > 0) {
     // output data of each row
     while($row = $result->fetch_assoc()) {
         echo "". $row["website"]. " ";
     }
} else {
     echo "0 results";
}
$conn->close();
?> 