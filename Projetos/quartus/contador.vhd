ENTITY contador IS
PORT(IN_CLK: IN BIT;
Md, Mu, Sd, Su: OUT BIT_VECTOR(13 TO 0));
END contador;

ARCHITECTURE one OF contador IS
SIGNAL C: INTEGER RANGE 0 TO 10:=0;
SIGNAL Y: INTEGER RANGE 0 TO 4999999:=0;
BEGIN
PROCESS(IN_CLK)
BEGIN
IF (IN_CLK 'EVENT) AND (IN_CLK = '1') THEN
	IF Y = 4999999 THEN
	Y <= 0;
	C <= C + 1;
	
	ELSE
	Y <= Y + 1;
	END IF;
	IF  C = 0 THEN
	Md <= "0000001";
	Mu <= "0000001";
	Sd <= "0000001";
	Su <= "0000001";
	END IF;
	IF  C = 1 THEN
	Md <= "0000001";
	Mu <= "0000001";
	Sd <= "0000001";
	Su <= "1001111";
	END IF;
	IF  C = 2 THEN
	Md <= "0000001";
	Mu <= "0000001";
	Sd <= "0000001";
	Su <= "0010010";
	END IF;
	IF  C = 3 THEN
	Md <= "0000001";
	Mu <= "0000001";
	Sd <= "0000001";
	Su <= "0000110";
	END IF;
	IF  C = 4 THEN
	Md <= "0000001";
	Mu <= "0000001";
	Sd <= "0000001";
	Su <= "1001100";
	END IF;
	IF  C = 5 THEN
	Md <= "0000001";
	Mu <= "0000001";
	Sd <= "0000001";
	Su <= "0100100";
	END IF;
	IF  C = 6 THEN
	Md <= "0000001";
	Mu <= "0000001";
	Sd <= "0000001";
	Su <= "0100000";
	END IF;
	IF  C = 7 THEN
	Md <= "0000001";
	Mu <= "0000001";
	Sd <= "0000001";
	Su <= "0001111";
	END IF;
	IF  C = 8 THEN
	Md <= "0000001";
	Mu <= "0000001";
	Sd <= "0000001";
	Su <= "0000000";
	END IF;
	IF  C = 9 THEN
	Md <= "0000001";
	Mu <= "0000001";
	Sd <= "0000001";
	Su <= "0000100";
	END IF;
	IF  C = 10 THEN
	Md <= "0000001";
	Mu <= "0000001";
	Sd <= "1001111";
	Su <= "0000001";
	C <= 0;
	END IF;
	
END IF;
END PROCESS;
END one;
