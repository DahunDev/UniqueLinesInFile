# UniqueLinesInFile
A shell program that outputs sentences/strings written in a file line by line. If a line with the same content exists more than once in the file, it is displayed only once.

For example, 
if file content is same as below:

bcd
abc
This is sample sentence
abc
bcd
This is sample sentence
This is sample sentence with/without whitespace after   
This is sample sentence with/without whitespace after


Then output will be:
bcd
abc
This is sample sentence
This is sample sentence with/without whitespace after   
This is sample sentence with/without whitespace after

(white space matter)
