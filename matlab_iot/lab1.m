% Create a column vector named "colVec" with elements 1 to 5.
colVec = [1;2;3;4;5]
% Create a row vector named "rowVec" with elements 10 to 15 using two different methods.
rowVec=[10 11 12 13 14 15 ]
rowVec = 10:1:15
% Generate a vector "genVec" with elements from 1 to 20 with a step of 2.
genVec=1:2:20
% Access and display the 3rd element of "genVec".
genVec(3)
% Access and display elements from the 5th to the 8th position in "genVec".
genVec(5:1:8)
% Modify the 7th element of "genVec" to 99.
genVec(7)=99
% Create a 3x3 matrix named "matA" with elements from 1 to 9.
matA=[1 2 3;4 5 6;7 8 9]
% Access and display the element in the 2nd row and 3rd column of "matA".
matA(2,3)
% Access and display the entire 1st column of "matA".
matA(:,1)
% Create another 3x3 matrix named "matB" with any elements of your choice.
matB=[5 3 8;2 4 9;1 0 7]
% Add matrices "matA" and "matB" and store the result in "matSum".
matSum=matA+matB
% Subtract "matB" from "matA" and store the result in "matDiff".
matDiff=matA-matB
% Perform element-wise multiplication of "matA" and "matB" and store the result in "matElemMult".
matElemMult=matA.*matB
% Perform matrix multiplication of "matA" and "matB" and store the result in "matMult".
matMult=matA*matB
% Create a 4x4 identity matrix named "idenMat".
idenMat=eye(4)
% Write an if-else statement to check if the sum of elements in "colVec" is greater than 10.
if sum(colVec,"all") < 10
    a="true"
else
    b="false"
end
% Write a for loop to display each element of "rowVec".
for i= 1:1:6
    rowVec(i)
end
% Write a for loop to calculate the square of each element in "rowVec" and store the results in a new vector "squaredVec".
for i= 1:1:6
   squaredVec(i)= rowVec(i)^2
end
% Create a new matrix "matC" by appending a row vector [10, 11, 12] to "matA".
matC=[matA;[10, 11, 12]]
% Create a vector "condVec" containing only the elements of "genVec" that are greater than 5.
condVec = genVec(genVec > 5)
% Transpose the matrix "matA" and store the result in "transMatA".
transMatA=matA.'
% Access and display the elements in the 1st row and 2nd column of "transMatA".
transMatA(1,2)
% Create a 5x1 column vector "colVec2" with elements from 5 to 1.
colVec2 = (5:-1:1)'
% Concatenate "colVec" and "colVec2" into a new matrix "concatMat".
concatMat=[colVec,colVec2]
% Create a new row vector "linVec" with elements from 0 to 2*pi in steps of 0.5.
linVec= 0:0.5:2*pi
% Replace all elements in "genVec" that are less than 10 with -1.
genVec(genVec  <10)=-1
% Access the last 3 elements of "genVec" and store them in "lastElements".
lastElements=genVec(end-2:1:end)
% generate random numbers between 1 and 60 
 randi([1, 60], 1, 10)
% generate a matrix with dimensions 4x4 with all zero elements
zeros(4)
