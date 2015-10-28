<div class="container">
  <ul>
    <li class="dropdown">
    <a href="#" data-toggle="dropdown">
    <h1 class="menu-title">
    <img src="image/icons/currency10.png" width="34" height="31" alt=""/> Costs</h1>

     <i class="icon-arrow">
    </i>
    </a>
      <ul class="dropdown-menu">
        <table>
          <tbody>
            <tr>
              <td width="75" height="66"></td>
              <td width="364">Approx cost of living:
                
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
                               <?php echo $row1['cost']; ?>
                            </div>

        <?php
    }
}
?>
</td>
              </tr>
            <tr>
              <td height="70"></td>
              <td><p>Any proof of funding requirements for the university/visa to be added here  </p>
                <p></p></td>
              </tr>
            <tr>
              <td height="70"></td>
              <td><p>Currency:</p></td>
              </tr>
            </tbody>
</table>
      </ul>
