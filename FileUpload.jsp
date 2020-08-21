<%@ page import="java.io.File" %>
<%@ page import="java.util.Enumeration" %>
<%@ page import="com.oreilly.servlet.MultipartRequest" %>
<%@ page import="com.oreilly.servlet.multipart.DefaultFileRenamePolicy" %>
<%@ page language="java" contentType="text/html; charset=UTF-8"
	pageEncoding="UTF-8" %>

<!DOCTYPE html>
<html>
<head>
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
<title>FileUpload.jsp</title>
</head>
<body>
<%
String uploadPath=request.getRealPath("upload");
out.println("realPath :" +uploadPath);
	
int size = 10*1024*1024;
String name="";
String subject="";
String filename1="";
String filename2="";

MultipartRequest multi = null;
	
try{
    multi = new MultipartRequest(request,uploadPath,size,"UTF-8",
    		new DefaultFileRenamePolicy()
    		);
		
    name = multi.getParameter("name");
    subject = multi.getParameter("subject");
    Enumeration files = multi.getFileNames();
    String file1 = (String)files.nextElement();
    filename1 = multi.getFilesystemName(file1);
    String file2 = (String)files.nextElement();
    filename2 = multi.getFilesystemName(file2);

}catch(Exception e){
    e.printStackTrace();
}
%>

<form action="FileCheck.jsp" method="post" name="FileCheck" >
    <input type="hidden" value="<%=name%>" name="name" >
    <input type="hidden" value="<%=subject%>" name="subject" />
    <input type="hidden" value="<%=filename1%>" name="filename1" />
    <input type="hidden" value="<%=filename2%>" name="filename2" />
</form>
<a href="#" onclick="javascript:FileCheck.submit()"> 업로드 확인 및 다운로드 페이지이동 </a>
</body>
</html>