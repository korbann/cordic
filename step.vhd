----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    20:57:14 12/23/2019 
-- Design Name: 
-- Module Name:    step - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.std_logic_signed.all;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity step is
	port(
		y_in: in std_logic_vector (15 downto 0);
		x_in: in std_logic_vector (15 downto 0);
		angle: in std_logic_vector(15 downto 0);
		clk: in std_logic;
		
		y_out: out std_logic_vector (15 downto 0);
		x_out: out std_logic_vector (15 downto 0);
		z_out: out std_logic_vector (15 downto 0)
	);
end step;

architecture Behavioral of step is

type table is array (0 to 7) of std_logic_vector(15 downto 0);

constant table_d: table:=(x"2000", x"12e5", x"09fc", x"0512", x"028c", x"0146", x"00a4", x"0052");
constant table_r: table:=(x"6487", x"3b57", x"1f5c", x"0fec", x"07fd", x"03fe", x"020c", x"0106");
constant koef: std_logic_vector (16 downto 0):= "01001101101110100";

signal i: integer range 0 to 7;
begin

counter: process(clk)
begin
if(rising_edge(clk)) then
	if (i<7) then
		i<= i+1;
	else 
		i<= 0;
	end if;
end if;
end process;


iteration: process(clk)
	variable m: std_logic_vector (15 downto 0):= x"0000";
	variable x0: std_logic_vector (16 downto 0);
	variable y0: std_logic_vector (16 downto 0);
	variable x_t: std_logic_vector (16 downto 0);
	variable y_t: std_logic_vector (16 downto 0);
	variable x1: std_logic_vector (16 downto 0);
	variable y1: std_logic_vector (16 downto 0);
	variable signx: std_logic_vector (16 downto 0);
	variable signy: std_logic_vector (16 downto 0);
	variable temp34: std_logic_vector (33 downto 0);
	
begin
if(rising_edge(clk)) then

if (i = 0) then 
	x0:= x_in(15) & x_in;
	y0:= y_in(15) & y_in;
else 
	x0:= x1;
	y0:= y1;
end if;

signx := (others => x0(16));
x_t := signx((i-1) downto 0) & x0(16 downto i);

signy := (others => y0(16));
y_t := signy((i-1) downto 0) & y0(16 downto i);

 if( m > angle) then
	x1:= x0 + y_t;
	y1:= y0 - x_t;
	m:= m - table_d(i); 
 else	
	x1:= x0 - y_t;
	y1:= y0 + x_t;
	m:= m + table_d(i);
end if;

if(i=7) then
	temp34:= x1 * koef;
	x_out <= temp34(31 downto 16); -- if x_out -1 to 1
	
	temp34:= y1 * koef;
	y_out <= temp34(31 downto 16); 
	
	z_out <= angle - m;
	
end if;
end if;
end process;
end Behavioral;

