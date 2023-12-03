# UniqueLinesInFile
A shell program that outputs sentences/strings written in a file line by line. If a line with the same content exists more than once in the file, it is displayed only once.

For example, 
if file content is same as below:<br>
bcd<br>
abc<br>
This is sample sentence<br>
abc<br>
bcd<br>
<br>This is sample sentence<br>
This is sample sentence with/without whitespace after   <br>
This is sample sentence with/without whitespace after<br>
<br>
<br>
Then output will be:<br>
bcd<br>
abc<br>
This is sample sentence<br>
This is sample sentence with/without whitespace after   <br>
This is sample sentence with/without whitespace after<br>

(white space matter)<br>
