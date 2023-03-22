<?xml version="1.0" encoding="UTF-8"?>
<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">
<xsl:template match="/">
<html>
<head><title>Task2</title></head>
<body bgcolor="white">
<table border="1">


<tr bgcolor="white">
    <th>Фамилия</th>
    <th>Имя</th>
    <th>Оценка</th>
</tr>

<xsl:for-each select="class/item">
<xsl:sort select="name"/>

<tr>
    <td><xsl:value-of select="name"/></td>
    <td><xsl:value-of select="secname"/></td>

    <xsl:choose>
    <xsl:when test="mark &gt;8">
        <td bgcolor="green">
        <xsl:value-of select="mark"/></td>
    </xsl:when>

    <xsl:when test="mark &lt;4">
        <td bgcolor="#ff0000">
        <xsl:value-of select="mark"/></td>
    </xsl:when>

    <xsl:otherwise>
        <td><xsl:value-of select="mark"/></td>
    </xsl:otherwise>
    </xsl:choose>

</tr>
</xsl:for-each>
</table>
</body>
</html>
</xsl:template>
</xsl:stylesheet>