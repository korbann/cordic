--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   23:21:46 12/23/2019
-- Design Name:   
-- Module Name:   C:/Users/Asus/Desktop/coord/cordic/test.vhd
-- Project Name:  cordic
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: step
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY test IS
END test;
 
ARCHITECTURE behavior OF test IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT step
    PORT(
         y_in : IN  std_logic_vector(15 downto 0);
         x_in : IN  std_logic_vector(15 downto 0);
         angle : IN  std_logic_vector(15 downto 0);
         clk : IN  std_logic;
         y_out : OUT  std_logic_vector(15 downto 0);
         x_out : OUT  std_logic_vector(15 downto 0);
         z_out : OUT  std_logic_vector(15 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal y_in : std_logic_vector(15 downto 0) := (others => '0');
   signal x_in : std_logic_vector(15 downto 0) := (others => '0');
   signal angle : std_logic_vector(15 downto 0) := (others => '0');
   signal clk : std_logic := '0';

 	--Outputs
   signal y_out : std_logic_vector(15 downto 0);
   signal x_out : std_logic_vector(15 downto 0);
   signal z_out : std_logic_vector(15 downto 0);

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: step PORT MAP (
          y_in => y_in,
          x_in => x_in,
          angle => angle,
          clk => clk,
          y_out => y_out,
          x_out => x_out,
          z_out => z_out
        );

   -- Clock process definitions
   clk_process :process
   begin
		clk <= '0';
		wait for clk_period/2;
		clk <= '1';
		wait for clk_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	

      wait for clk_period*10;
		x_in <= x"7fff";
		y_in <= x"0000";
		angle <= x"271c"; -- 55 degree
		
      -- insert stimulus here 

      wait;
   end process;

END;
