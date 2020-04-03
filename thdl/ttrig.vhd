----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    02:31:39 04/03/2020 
-- Design Name: 
-- Module Name:    ttrig - Behavioral 
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

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity ttrig is
    Port ( CLK : in  STD_LOGIC;
           Tt : out  STD_LOGIC);
end ttrig;

architecture Behavioral of ttrig is
	signal Tt_out: STD_LOGIC := '0';

begin
	Tt <= Tt_out;
	process(CLK)
	begin
		if (CLK'event and CLK='1') then
			Tt_out <= not (Tt_out);
		end if;
	end process;

end Behavioral;

