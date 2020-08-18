<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<% 
	//세션 값 가져오기
	String session_userid = (String)session.getAttribute("userid");
	//세션값 없으면 로그인창으로 이동
	if(session_userid == null){
		response.sendRedirect("loginform.jsp");
		return;
	}
%>