ENTITY portas_with IS
PORT(A, B, C: IN BIT;
Xa, Xb, Xc, Xd, XE, Xf, Xg, Ya, Yb, Yc, Yd, Ye, Yf, Yg: OUT BIT);
END portas_with;

ARCHITECTURE one OF portas_with IS
SIGNAL X: BIT_VECTOR(2 DOWNTO 0);
BEGIN

X<= A & B & C;

WITH X SELECT
	Ya<= '1' WHEN "110",
		  '1' WHEN "111",
		  '0' WHEN OTHERS;
	
	Yb<= '0';
	Yc<= '0';
	
WITH X SELECT
	YD<= '1' WHEN "110",
		  '1' WHEN "111",
		  '0' WHEN OTHERS;
		  
WITH X SELECT
	Ye<= '1' WHEN "110",
		  '1' WHEN "111",
		  '0' WHEN OTHERS;
		  
WITH X SELECT
	Yf<= '1' WHEN "110",
		  '1' WHEN "111",
		  '0' WHEN OTHERS;
		  
	Yg<= '1';
	
WITH X SELECT
	Xa<= '0' WHEN "000",
		  '0' WHEN "100",
		  '1' WHEN OTHERS;
		  
	Xb<= '0';
	Xc<= '0';
	
WITH X SELECT
	Xd<= '0' WHEN "000",
		  '0' WHEN "100",
		  '1' WHEN OTHERS;
		  
WITH X SELECT
	Xe<= '0' WHEN "000",
		  '0' WHEN "100",
		  '1' WHEN OTHERS;
		  
WITH X SELECT
	Xf<= '0' WHEN "000",
		  '0' WHEN "100",
		  '1' WHEN OTHERS;
		  
	Xg<= '1';

END one; 

