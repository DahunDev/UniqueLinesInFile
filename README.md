# UniqueLinesInFile
A  command-line tool that shows sentences/strings written in a file line by line. If a line with the same content exists more than once in the file, it is displayed only once.

For example, 
if file content is same as below:<br>
bcd<br>
abc<br>
This is sample sentence<br>
abc<br>
bcd<br>
This is sample sentence<br>
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

        uniqueLine : start shell, it will asked input file name and whether write or not.
        uniqueLine <input filename> : read <input filename> and print output to console, no write file" << std::endl;
        uniqueLine <input filename> <output filename>  : read <input filename> and write output file, no print" << std::endl;
        uniqueLine <input filename> <output filename> -pw : read <input filename> and write output file, with print output to console" << std::endl;
        uniqueLine <input filename> <output filename> -w : read <input filename> and write output file, no print" << std::endl;
       
	    Note: If the filename has space then it should be enclosed with ".;
