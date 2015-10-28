<!doctype html>
<html>
<head>
<meta charset="utf-8">
<link href="css/style.css" rel="stylesheet" type="text/css" media="screen and (max-width: 3840px)" />
<title>University Profile</title>
</head>

<body>

<header>

 <h1> <?php  include 'uniname.inc';?> </h1>
</header>
<!--  University Profile  -->
 <?php  include 'universityprof.inc';?> 

<!--  Study Details  -->
<?php  include 'studydetails.inc';?> 
<!--  Course Information  -->
<?php  include 'courseinfo.inc';?> 
<!--  Costs -->
<?php  include 'cost.inc';?> 
<!-- Addictional Information  -->

<?php  include 'addinfo.inc';?> 
<!--  Student Experience  -->
<?php  include 'studentexp.inc';?> 
<script src="js/index.js"></script>

</body>
</html>
