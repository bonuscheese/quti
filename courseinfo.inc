<div class="container">
  <ul>
    <li class="dropdown">
    <a href="#" data-toggle="dropdown">
    <h1 class="menu-title">
    <img src="image/icons/books40.png" width="34" height="31" alt=""/> &nbsp;Course Information</h1>

     <i class="icon-arrow">
    </i>
    </a>
      <ul class="dropdown-menu">
        <table>
          <tbody>
            <tr>
              <td width="24" height="66">&nbsp;</td>
              <td width="251">List available areas of study:

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
                               <?php echo $row1['areasStudy']; ?>
                            </div>

        <?php
    }
}
?>
              </td>
              </tr>
            <tr>
              <td height="70">&nbsp;</td>
              <td>Links to course catalogues:

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
                               <?php echo "<b><a href=\"{$row1['website']}\">{$row1['website']}</a></b>";?>
                            </div>

        <?php
    }
}
?>
</td>
            </tr>
            <tr>
              <td height="70">&nbsp;</td>
              <td>List of courses in English (if applicable):

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
                 <?php echo "<b><a href=\"{$row1['engCourses']}\">{$row1['engCourses']}</a></b>";?>
                            </div>

        <?php
    }
}
?></td>
              </tr>
            </tbody>
</table>
      </ul>
