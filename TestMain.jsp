<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta name="viewport" content="width=device-width, initial-scale=1.0">
<style type="text/css">

img.img1{
position:absolute;
left : 25%;
top : 15%;
}

img.img2{
position:absolute;
left : 70%;
top : 20%;
}

#BTN{
margin-top: 150px;
text-align: center;
color:#963de3;
padding: 5px;
}

#BTN1 button{
background-color: white; color: black; 
}
#BTN2 button{
background-color: black; color)
}
#button { 	
width:240px; height:100px; margin-top:40px;
border-top-left-radius: 15px; border-bottom-left-radius: 15px;
border-top-right-radius: 15px; border-bottom-right-radius: 15px; 
}



body {
  overflow-y:scroll; 
  overflow-x: scroll;

  background: black;
   
}

</style>

<script>
document.addEventListener('mousemove', function(e) {
	  let body = document.querySelector('body');
	  let circle = document.createElement('span');
	  let x = e.offsetX;
	  let y = e.offsetY;
	  circle.style.left = x + "px";
	  circle.style.top = y + "px";
	  let size = Math.random() * 100;
	  circle.style.width = 20 + size + "px";
	  circle.style.height = 20 + size + "px";
	  body.appendChild(circle);
	  setTimeout(function() {
	    circle.remove();
	  }, 1800);
	});
</script>


</head>
<title>AISOD TEST</title>
<body>
		<center><font size="6" color=white>AISOD TEST</font></center>
		<img src="hacker.png" class="img1" width="100" height="100">
		
		<img src="security.png" class="img2" width="150" height="150">
		<div id="BTN">
       <div id="BTN1">
			<button id="button"> <a href="#test" ></a>
			<font size="4" color=black> DEVELOPMENT?</font>
			</button>
   			</div><br><br><br>
   			
       <div id="BTN2">
			<button id="button"> <a href="#test" ></a>
			<font size="4" color=white> SECURITY?</font>
			</button>
   			</div><br><br><br>
   			</div>
   		<center><font size="5" color=white>1/12</font></center>
</body>
</html>
 	  