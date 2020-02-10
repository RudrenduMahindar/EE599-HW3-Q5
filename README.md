# EE599-HW3-Q5
Write a class that stores a student’s academic record. The academic record should hold marks for the following subjects: 1. Maths. 2. Computers. 3. Physics. Requirements: ● Implement the default constructor that initializes grades to 0. ● Implement a constructor that takes the initial grades as three parameters. ● Implement the copy constructor. ● The class should support “++” and “--” operators (both postfix and prefix) ○ A “++” call should increase all marks of each subject by 10. ○ A “--” call should decrease all marks of each subject by 20. ● The class should support “+=” and “-=”, which affect all grades of the object. ● The class should support “==” for comparison. ● After any operation, marks for any subject should stay within the range of 0 and 100: ○ If after any operation, marks for any subject are exceeding 100 then your code should simply set the marks of that particular subject as 100. ○ Similarly, if after any operation the mark of any subject below is 0 then your code should just set the marks of that particular subject to 0.  ● Print(), which returns a string that contains all marks and can later be used to print the marks.
