#include <iostream>
#include <iomanip>

int main()
{
	std::cout << "Top: Camera, Bottom: USB port\n\n";
	std::cout << std::left << std::setw(15) << "3V3" << " | " << "5V" << "\n";
	std::cout << std::left << std::setw(15) << "2(SDA)" << " | " << "5V" << "\n";
	std::cout << std::left << std::setw(15) << "3(SCL)" << " | " << "GND" << "\n";
	std::cout << std::left << std::setw(15) << "4(GPCLKO)" << " | " << "14(TXD)" << "\n";
	std::cout << std::left << std::setw(15) << "GND" << " | " << "15(RXD)" << "\n";
	std::cout << std::left << std::setw(15) << "17" << " | " << "18(PCM_CLK)" << "\n";
	std::cout << std::left << std::setw(15) << "27" << " | " << "GND" << "\n";
	std::cout << std::left << std::setw(15) << "22" << " | " << "23" << "\n";
	std::cout << std::left << std::setw(15) << "3V3" << " | " << "24" << "\n";
	std::cout << std::left << std::setw(15) << "10(MOSI)" << " | " << "GND" << "\n";
	std::cout << std::left << std::setw(15) << "9(MISO)" << " | " << "25" << "\n";
	std::cout << std::left << std::setw(15) << "11(SCLK)" << " | " << "8(CE0)" << "\n";
	std::cout << std::left << std::setw(15) << "GND" << " | " << "7(CE1)" << "\n";
	std::cout << std::left << std::setw(15) << "0(ID_SD)" << " | " << "1(ID_SC)" << "\n";
	std::cout << std::left << std::setw(15) << "5" << " | " << "12(PWM0)" << "\n";
	std::cout << std::left << std::setw(15) << "13(PWM1)" << " | " << "GND" << "\n";
	std::cout << std::left << std::setw(15) << "19(PCM_FS)" << " | " << "16" << "\n";
	std::cout << std::left << std::setw(15) << "26" << " | " << "20(PCM_DIN)" << "\n";
	std::cout << std::left << std::setw(15) << "GND" << " | " << "21(PCM_DOUT)" << "\n";
}
