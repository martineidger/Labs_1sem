<?xml version="1.0" encoding="UTF-8"?>
<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">
<xsl:template match="/">
<html>
<head><title>Task1</title>
</head>

<body bgcolor="white">
<h2>My timetable</h2>
<table border="1">
<tr bgcolor="white">
    <th>Author</th>
    <th>Book</th>
</tr>
<xsl:for-each select="books/book">
<xsl:sort select="author" order="descending"/>
<tr>
<td><xsl:value-of select="author"/></td>
<td><xsl:value-of select="name"/></td>
</tr>
</xsl:for-each>
</table>
</body>
</html>
</xsl:template>
</xsl:stylesheet>