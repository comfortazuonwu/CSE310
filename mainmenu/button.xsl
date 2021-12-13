<?xml version="1.0" encoding="UTF-8"?>
<html xsl:version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">
<body style="font-family:Arial;font-size:12pt;background-color:#EEEEEE">
<xsl:for-each select="Button">
  <div style="background-color:white;color:blue;padding:4px;text-align:center;font-size:50px">
    <span style="font-weight:bold"></span>
    <xsl:value-of select="android:id"/>
    </div>
</xsl:for-each>
</body>
</html>