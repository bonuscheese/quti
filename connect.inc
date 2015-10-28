                        <?php
            //Establishing Connection with Server
                        $connection = mysql_connect("localhost", "root", "");
            //Selecting Database
                        $db = mysql_select_db("quti", $connection);
            //MySQL Query to read data
                        $query = mysql_query("select * from profile", $connection);
                        ?>