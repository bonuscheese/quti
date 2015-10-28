<!DOCTYPE HTML>
<html>
    <title>test</title>
  <meta name="robots" content="noindex, nofollow" />
    <head>

    </head>
    <body>


                        <?php
            //Establishing Connection with Server
                        $connection = mysql_connect("localhost", "root", "exchange");
            
            //Selecting Database
                        $db = mysql_select_db("quti", $connection);
            
            //MySQL Query to read data
                        $query = mysql_query("select * from profile", $connection);

                        while ($row = mysql_fetch_array($query)) {
                echo "<table style=\"font-family:arial;\">";    
                echo "<tr>
                <td style=\"border-style:solid;border-width:1px;border-color:#00027D;background:#ffffff;\">Name</td>
                 </tr>";             
                               echo "<tr><td style=\"border-style:solid;border-width:1px;border-color:#00027D;\">";                     
                            echo "<b><a href=\"index.php?id={$row['uID']}\">{$row['name']}</a></b>";

                echo "</td></tr>";  
                            echo "<br />";
                        }
                        ?>
                    </div>
                    <?php
                    if (isset($_GET['id'])) {
                        $id = $_GET['id'];
                        $query1 = mysql_query("select * from profile where uID=$id", $connection);
                        while ($row1 = mysql_fetch_array($query1)) {
                            ?>                    



                            <div class="form"> 
                                <h2>---Details---</h2>
                                <hr/>
                                <br><br>
                <!-- Displaying Data Read From Database -->
                                <span>Name:</span> <?php echo $row1['name']; ?>


                            </div>

        <?php
    }
}
?>
                  
    </body>
</html>
<?php
//Closing Connection with Server
mysql_close($connection);
?>