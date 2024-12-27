# University Management System
This app works only when you download visual studios as well as MySql workbench.<br>
You need to connect your own sql server in every page of the software.<br>
<br>
<h2 style="color:green">Steps to connect your database: </h2>
<br>
1. Enter your SQL ID and Password with server in the line of<br>
sql::Connection* con = driver->connect("tcp://127.0.0.1:3306", "username", "password");<br>
<br>
2. Change databasename in line of<br>
con->setSchema("schemaname");
