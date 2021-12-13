<?xml version="1.0" encoding="UTF-8"?>
<html xsl:version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">
<body style="font-family:Pacifico;font-size:12pt;background-color:#C0D6DF">
<xsl:for-each select="main_menu/heading">
  <div style="background-color:#4A6FA5;color:#DBE9EE;padding:4px;text-align:center;font-size:50px">
    <span style="font-weight:bold;border-radius:10px"><xsl:value-of select="header"/></span>
    </div>
  <div style="text-align:center;font-size:20px">
    <p>
    <xsl:value-of select="choice"/>
    <span style="font-style:italic"> </span>
    </p>
  </div>
  <div style="margin-right:-200px" >
    <span style="background-color:#4A6FA5;color:#DBE9EE;font-weight:bold;border-radius:10px;padding:10px;margin-top:30px"><xsl:value-of select="practice"/></span>   
</div>
<div style="margin-top:-32px;margin-left:60em;">
    <span style="background-color:#4A6FA5;color:#DBE9EE;font-weight:bold;border-radius:10px;padding:10px;margin-bottom:-50px"><xsl:value-of select="quiz"/></span>
</div>
<div >
  <xsl:value-of select="Button"/>
  <xsl:value-of select="android:id" />
</div>
    
</xsl:for-each>
</body>
</html>