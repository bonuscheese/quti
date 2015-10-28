
                            <!--connect to datbase-->
                <?php  include 'connect.inc';?> 
                    </div>
                    <?php
                    if (isset($_GET['id'])) {
                        $id = $_GET['id'];
                        $query1 = mysql_query("select * from profile where uID=$id", $connection);
                        while ($row1 = mysql_fetch_array($query1)) {
                            ?>                    
                            <div class="form"> 

                <!-- Displaying Data Read From Database -->
                               <?php echo $row1['name']; ?>
                            </div>

        <?php
    }
}
?>