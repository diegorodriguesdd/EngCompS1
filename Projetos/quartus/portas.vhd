ENTITY portas IS 
PORT(a, b, c: IN BIT;
a_x, b_x, c_x, d_x, e_x, f_x, g_x, a_y, b_y, c_y, d_y, e_y, f_y, g_y: OUT BIT);
END portas;

ARCHITECTURE one OF portas IS
BEGIN
a_x <= a AND b;
b_x <= '0';
c_x <= '0';
d_x <= a AND b;
e_x <= a AND b;
f_x <= a AND b;
g_x <= '1';
a_y <= b or c;
b_y <= '0';
c_y <= '0';
d_y <= b or c;
e_y <= b or c;
f_y <= b or c;
g_y <= '1';
END one;

