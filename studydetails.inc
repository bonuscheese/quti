<div class="container">
  <ul>
    <li class="dropdown">
    <a href="#" data-toggle="dropdown">
    <h1 class="menu-title">
    <img src="image/icons/graduation43.png" width="34" height="31" alt=""/> &nbsp; Study Details </h1>
    <i class="icon-arrow">
    </i>
    </a>
      <ul class="dropdown-menu">
        <table width="1000" height="144" >
          <tbody>
            <tr>
              <td width="75" height="66">&nbsp;</td>
              <td width="364">Dates: 

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
                               <?php echo $row1['dates']; ?>
                            </div>

        <?php
    }
}
?></td>

              <td width="369">Restrictions

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
                               <?php echo $row1['restrictions']; ?>
                            </div>

        <?php
    }
}
?>
</td>
              </tr>
            <tr>
              <td height="70">&nbsp;</td>
              <td>Credits

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
                               <?php echo $row1['credit']; ?>
                            </div>

        <?php
    }
}
?>
</td>
              <td>&nbsp;</td>
              </tr>
            </tbody></table>
      </ul>
