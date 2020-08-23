<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<%@ page import="java.sql.*" %>
<%
	request.setCharacterEncoding("utf-8");
	String userid = request.getParameter("userid");
	String pwd = request.getParameter("pwd");
	
	String jdbcUrl = "jdbc:mysql://localhost/testjsp";
	String dbId = "jspid";
	String dbPass = "jsppass";
	
	Connection conn = null;
	PreparedStatement pstmt = null;
	
	try{
		Class.forName("com.mysql.jdbc.Driver");
		conn=DriverManager.getConnection(jdbcUrl, dbId, dbPass);
		String sql = "delete from member where userid=? and pwd=?";
		pstmt = conn.prepareStatement(sql);
		pstmt.setString(1, userid);
		pstmt.setString(2, pwd);
		pstmt.executeUpdate();
		response.sendRedirect("List.jsp");
	}
	catch(Exception e)
	{
		out.println("Exception : " + e.getMessage());
	}
	finally
	{
		if(pstmt != null)
		{
			try
			{
				pstmt.close();
			}
			catch(SQLException e)
			{
				out.println("SQLException : " + e.getMessage());
			}
		}
		if(conn != null)
		{
			try
			{
				conn.close();
			}
			catch(SQLException e)
			{
				out.println("SQLException : " + e.getMessage());
			}
		}
		System.out.println("finally block is called");
	}
%>