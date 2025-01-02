clear
clc
%% General Notes

% 1- MATLAB uses interpreter not compiler
% 2- No primitive data types : not int , char , float. all variables are double
% 3- Workspace contains all variables from the previous run
% 4- to clear variables from workspace : clear in command window

y=10;

%% vector creation
% row vector
rowVector = [1,2,3,4,5];
rowVector1 = [1 2 3 4 5];
% column vector 
colVector = [1;2;3;4;5];

%vector generation
%format : name = start:step:end
vector1=1:1:10;
vector2=1:2:10;

%% vector accessing 
% for (int i =0 : i<10 ; i++){
%     vector1(i);
%     }
vector1(4);
% vector2(6)% error

% access more than one element
%format name( start:step:end  )
subVector=vector1(2:1:6  );
vector1(1:2:7);
vector1(10:-2:5);
% access by condition
c=vector1( vector1>5 )*2;
vector1( vector1==1   );
vector1( vector1==0   );
vector1( vector1>3 & vector1<8  );
vector1( vector1~=6  )

%% matrices
% same as 2-D array in C

% format :   name = [ ,,, ; ,,,  ]

%% matrix creation
Matrix1=[ 1,2,3 ; 4,5,6 ];
Matrix1=[1,2,3
                4,5,6];
Matrix1=[1 2 3
                4 5 6];
% rule 
% Matrix2=[1 2 3
%                 4 5  ]  will give error

%% matrix accessing
% format : name(   start:step:end  , start:step:end   )
Matrix1(  1  , 1:1:2  );
Matrix1(2,3:-1:2);
% extract a row
Matrix1( 1 , : );
% extract a col
Matrix1( : , 2);

%% matrix operations

A = [5,6
        1,3]

B = [4,9
       2,8]

%addition
C=A+B

% subtraction
C=A-B

% multiplication
% rule : number of cols of 1st matrix =number of rows of 2nd matrix
D=A*B

% element-wise multiplication
A.*B

% element-wise division
A./B

% element-wise power
%syntax   ^ :  X^2
A.^3

% matrix concatenation
% V=[1,2,3]
% row concatenation
[A , B];
% col concatenation
[A ; B];

%  transpose
tVector=rowVector.'
matrixx=[1,2,3;4,5,6  ]

 tMatrix=matrixx.'

%%% notes
vector2=[1;2;3;4;5;6];
vector3=[2,3];
vector2+vector3;


%% conditional statments
% if 
M=1.5;
if M==2 | M==3
vector_a=[1;2]
elseif M>4
vector_a=[1,2]
else
vector_a=[2,2]
end

% switch
switch M
    case 1.5
        vector_b=[1,2,3]
    case 20
        vector_b=[1;2;3]
    otherwise
end
% For loop
for iterator = 1:2:10
v=vector1(iterator)*10;
end


%%%%%%%%%%%DEBUGGER%%%%%%%%%%%%%
%% built-in functions

%size 
size(A)
size(vector1)
%length
length(vector2)
% sum
sum(vector2)
sum(B,"all") % sum across all dimensions
sum(B,1) %coulmn sum
sum(B,2) %row sum
%max 
max(vector2);
%min
min(vector2);
%random generation
randi( [0 100] , 1,10 )
randn(3,5);
%create zero vector or matrix
zeros( 2,5);
zeros(5);
zeros(1,6);
% create ones vector
oneVector=ones(1,10 );
% create identity matrix
eye(4)
% logarithm
log10(10)%--->log base 10 (10)
log(10) %---> means ln
%exponential
exp(10)
%square-root
sqrt(4)
% reshape
reshape(oneVector , 2,5 );
reshape(oneVector , [] ,2 ); % means reshape into 2 cols , doesn't matter the number of rows
reshape(tMatrix, 3,2   ).';