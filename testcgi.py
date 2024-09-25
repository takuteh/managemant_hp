#!/usr/bin/env python3

import cgi

print("Content-Type: text/html")
print()  # 空行でHTTPヘッダーとボディを区切る

print("<html>")
print("<head><title>Hello CGI</title></head>")
print("<body>")
print("<h1>Hello from CGI!</h1>")
print("</body>")
print("</html>")
