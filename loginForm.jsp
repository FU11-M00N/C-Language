<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta name="viewport" content="width=device-width, initial-scale=1.0">

<style >
.transition, form button, form .question label, form .question input[type="text"] {
  -moz-transition: all 0.25s cubic-bezier(0.53, 0.01, 0.35, 1.5);
  -o-transition: all 0.25s cubic-bezier(0.53, 0.01, 0.35, 1.5);
  -webkit-transition: all 0.25s cubic-bezier(0.53, 0.01, 0.35, 1.5);
  transition: all 0.25s cubic-bezier(0.53, 0.01, 0.35, 1.5);
}

body{
margin : 0px;
}
html {
  background-color: #7B68EE;
}

* {
  font-family: Helvetica, sans-serif;
  font-weight: light;
  -webkit-font-smoothing: antialiased;
}
form {
  position: relative;
  display: inline-block;
  max-width: 700px;
  min-width: 500px;
  box-sizing: border-box;
  padding: 30px 25px;
  background-color: white;
  border-radius: 40px;
  margin: 40px 0;
  left: 50%;
  -moz-transform: translate(-50%, 0);
  -ms-transform: translate(-50%, 0);
  -webkit-transform: translate(-50%, 0);
  transform: translate(-50%, 0);
}
form h1 {
  color: #8C8CFF;
  font-weight: 100;
  letter-spacing: 0.01em;
  margin-left: 15px;
  margin-bottom: 35px;
  text-transform: uppercase;
  
}
form button {
  margin-top: 35px;
  background-color: white;
  border: 2px solid #8C8CFF;
  line-height: 0;
  font-size: 17px;
  display: inline-block;
  box-sizing: border-box;
  padding: 20px 15px;
  border-radius: 60px;
  color: #8C8CFF;
  font-weight: 100;
  letter-spacing: 0.01em;
  position: relative;
  z-index: 1;
}
form button:hover, form button:focus {
  color: white;
  background-color: #8C8CFF;
}
form .question {
  position: relative;
  padding: 10px 0;
}
form .question:first-of-type {
  padding-top: 0;
}
form .question:last-of-type {
  padding-bottom: 0;
}
form .question label {
  transform-origin: left center;
  color: #8C8CFF;
  font-weight: 100;
  letter-spacing: 0.01em;
  font-size: 17px;
  box-sizing: border-box;
  padding: 10px 15px;
  display: block;
  position: absolute;
  margin-top: -40px;
  z-index: 2;
  pointer-events: none;
}
form .question input[type="text"] {
  appearance: none;
  background-color: none;
  border: 1px solid #8C8CFF;
  line-height: 0;
  font-size: 17px;
  width: 100%;
  display: block;
  box-sizing: border-box;
  padding: 10px 15px;
  border-radius: 60px;
  color: #ff4a56;
  font-weight: 100;
  letter-spacing: 0.01em;
  position: relative;
  z-index: 1;
}
form .question input[type="text"]:focus {
  outline: none;
  background: #ff4a56;
  color: white;
  margin-top: 30px;
}
form .question input[type="text"]:valid {
  margin-top: 30px;
}
form .question input[type="text"]:focus ~ label {
  -moz-transform: translate(0, -35px);
  -ms-transform: translate(0, -35px);
  -webkit-transform: translate(0, -35px);
  transform: translate(0, -35px);
}
form .question input[type="text"]:valid ~ label {
  text-transform: uppercase;
  font-style: italic;
  -moz-transform: translate(5px, -35px) scale(0.6);
  -ms-transform: translate(5px, -35px) scale(0.6);
  -webkit-transform: translate(5px, -35px) scale(0.6);
  transform: translate(5px, -35px) scale(0.6);
}
form .question input[type="password"] {
  appearance: none;
  background-color: none;
  border: 1px solid #8C8CFF;
  line-height: 0;
  font-size: 17px;
  width: 100%;
  display: block;
  box-sizing: border-box;
  padding: 10px 15px;
  border-radius: 60px;
  color: #ff4a56;
  font-weight: 100;
  letter-spacing: 0.01em;
  position: relative;
  z-index: 1;
}
form .question input[type="password"]:focus {
  outline: none;
  background: #ff4a56;
  color: white;
  margin-top: 30px;
}
form .question input[type="password"]:valid {
  margin-top: 30px;
}
form .question input[type="password"]:focus ~ label {
  -moz-transform: translate(0, -35px);
  -ms-transform: translate(0, -35px);
  -webkit-transform: translate(0, -35px);
  transform: translate(0, -35px);
}
form .question input[type="password"]:valid ~ label {
  text-transform: uppercase;
  font-style: italic;
  -moz-transform: translate(5px, -35px) scale(0.6);
  -ms-transform: translate(5px, -35px) scale(0.6);
  -webkit-transform: translate(5px, -35px) scale(0.6);
  transform: translate(5px, -35px) scale(0.6);
}
.img{

display: flex;
heghit: 100vh;
justify-content:center; /* 가로에서 가운데로 요소(자식요소)를 배치하겠다*/
align-items:center; /* 세로에서 가운데로 요소(자식요소)를 배치하겠다*/
margin-top:50px;



}
.subLogin_wrapper{

display: flex;
heghit: 100vh;
justify-content:center; /* 가로에서 가운데로 요소(자식요소)를 배치하겠다*/
align-items:center; /* 세로에서 가운데로 요소(자식요소)를 배치하겠다*/
margin-top:50px;
}
.facebook{
margin: 15px;

}
.google{
margin: 15px;
}
.twitter{
margin: 15px;
}
.instagram{
margin: 15px;
}
.sublogin{
     width: 200px;
        border: 1px solid #b8064d;
        background-color: #f8e1eb;
        position: static;
        top: 100px;
        right: 100px;
        color:#b8064d;
        padding-left:10px
}
#loginer
{
  padding: 20px;
  margin-bottom: 20px;
  border: 1px solid #bcbcbc;
  text-align: center;
}
#form
{
  font-size: 1.3em;
  width: 50%;
  display: inline-block;
}
::placeholder
{
  font-size: 1.3em;
  font-family: 'Nanum Brush Script', cursive;
}
button
{
  border: 0px;
  background-color: white;
}
#signupimg
{
  font-size: 1em !important;
}
 


a{
font-size:25px;
color:white;
font-weight:bold;
text-decoration:none;
font-family: arial;
}

.right{
float:right;
}

#main{
margin-top:1%;
margin-left:7.1%;
font-size:300%;
float:left;
font-weight : bolder;
display:inline-block;
}

ul{
    list-style-type: none;
    margin: 0;
    padding: 0;
    background-color: #F0F0F0;
    font-size : 30px;
    text-align: center ;
    
}
ul:after{
  
      content:'';
    display: block;
    clear:both;
}
li {

    float: left;
    width:10.5%;
    
}

li a {
   
    color: white;
    text-align: center;
    text-decoration: none;
    color: black;
    display: flex;
   	heghit: 100vh;
   	justify-content:center; /* 가로에서 가운데로 요소(자식요소)를 배치하겠다*/
   	align-items:center; /* 세로에서 가운데로 요소(자식요소)를 배치하겠다*/
   	font-size: 20px;
}


.active a{   
   margin-top:20%;
   font-size:2vw;
   font-weight: bold;
}
.login a{   
margin-top:20%;
   font-size:2vw;
    font-weight: bold;
}
.title{
   position:relative;
   margin-left:60%;
   font-size:4vw;
}   
.login{
   float:right;
}    


</style>
 
<body>

<div id="menu">
 <ul>
      <li class="active"><a href="http://localhost:8080/JSP_Project/main.jsp">Main</a></li>
      <li class="active"><a href="#Test">Test</a></li>
      <li class="active"><a  href="#Community">Community   </a></li>
      <li class="active"><a href="#File" id="file">File</a></li>
      <li><a class="title" href="http://localhost:8080/JSP_Project/main.jsp"><strong>AISOD</strong></a></li>
   <%
   if(session.getAttribute("userid") == null){
%>
             <li  class="login"><a  href="loginForm.jsp">Login</a></li>
               <li  class="login"><a href="http://localhost:8080/JSP_Project/regiForm.jsp">Join</a></li>
<% 
   }
   else{
	   
      out.print(session.getAttribute("userid") + "님 환영합니다.");
%>
            <li class="login"><a href="Logout.jsp">Logout</a></li>
<%
   }
%>
   
      
      
      
      
      
    </ul>
	</div>

<!-- 링크 색상 없애기 -->
    <style type="text/css">
     a:link { color: black; text-decoration: none;}
     a:visited { color: black; text-decoration: none;}
     a:hover { color: black; text-decoration: underline;}
    </style>
	

    <form action ="loginProc.jsp" method="POST"> 
  <h1>로그인</h1>
  <div class="question">
    <input type="text" name ="userid" required/>
    <label>닉네임</label>
  </div>
  <div class="question">
    <input type="password" name ="pwd" required/>
    <label>비밀번호</label>
  </div>
 
  
 <center><button>Submit</button></center>
  
</form>
 

    <div class="subLogin_wrapper" >
    <a href=#findID> 아이디 찾기| </a>
    <a href=#findPwd> 비밀번호 찾기| </a>
    <a href=#regi> 회원가입</a>
     </div>
    <center> <strong>Sign up for AISOD</strong></center>
    <div class="img">
  <a href="https://nevertrustbrutus.tistory.com/"><img src="facebook.png" width="50" class="facebook"></a>
   <a href="https://nevertrustbrutus.tistory.com/"> <img src="google.png" width="50" class="google">  </a>
   <a href="https://nevertrustbrutus.tistory.com/"> <img src="instagram.png" width="50" class="instagram"></a>
  <a href="https://nevertrustbrutus.tistory.com/">  <img src="twitter.png" width="50" class="twitter"> </a>
    </div>
    
<body>
</html>