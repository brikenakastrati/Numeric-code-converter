
#include <iostream>
#include<string>


using namespace std;

string intToNBCD(int vlera) {
	string NBCD = "";
	for (int i = 3; i >= 0; i--) {
		NBCD += ((vlera >> i) & 1) ? "1" : "0";
	}
	return NBCD;
}
int NBCDToInt(string nbcd) {
	int vlera1 = 0;
	for (int i = 0; i < 4; i++) {
		vlera1 <<= 1;
		if (nbcd[i] == '1') {
			vlera1 |= 1;
		}
	}
	return vlera1;
}
int main()
{

	cout << "Ky program kodon dhe dekodon kode te ndryshme BCD me peshe (NBCD, 84-2-1, 5421).\n \n";
	cout << "Zgjedh nese doni te kodoni apo te dekodoni, shtyp 1 per te koduar kurse shtyp 2 per te dekoduar.\n\n";
	int a;
shtypja_numrit:
	cout << "Numri i shtypur eshte: ";
	cin >> a;
	if ((a > 2) || (a < 1)) {
		cout << "Numri i shtypur duhet te jete vetem brenda intervalit 1 dhe 2 \n\n";

		goto shtypja_numrit;
	}

	
	if (a == 1) {

		int kodi;
		cout << "Shtyp 1 per NBCD, shtyp 2 per 84-2-1, shtyp 3 per 5421.\n";
	shtypja_kodit:
		cout << "Numri i shtypur eshte: ";
		cin >> kodi;
		if ((kodi < 1) || (kodi > 3)) {
			cout << "Lejohen vetem vlerat ne intervalin 1 dhe 3!\n";
			goto shtypja_kodit;
		}

		if (kodi == 1) {

			int sh1, sh2, sh3, sh4;
			cout << "VEMENDJE:Nuk lejohen me shume se 4 shifra! \n\n";
			cout << "VEMENDJE: Shifrat e numrit shkruhen nje nga nje!\n\n";


			cout << "Shkruani numrin qe deshironi ta kodoni ne NBCD:\n";
			cin >> sh1;
			cin >> sh2;
			cin >> sh3;
			cin >> sh4;

			cout << "Numri i konvertuar eshte: " << intToNBCD(sh1) << " " << intToNBCD(sh2) << " " << intToNBCD(sh3) << " " << intToNBCD(sh4) << endl;
		}

		else if (kodi == 2) {
			int m;
			cout << "VEMENDJE!Programi punon vetem per numra 1 shifrore.\n";
			cout << "Shkruani vleren qe deshironi ta konvertoni ne kodin 84-2-1: ";
			cin >> m;
			switch (m) {
			case 0:
				cout << "Numri i koduar ne kodin 84-2-1 eshte 0000.";
				break;
			case 1:
				cout << "Numri i koduar ne kodin 84-2-1 eshte 0111.";
				break;
			case 2:
				cout << "Numri i koduar ne kodin 84-2-1 eshte 0110.";
				break;
			case 3:
				cout << "Numri i koduar ne kodin 84-2-1 eshte 0101.";
				break;
			case 4:
				cout << "Numri i koduar ne kodin 84-2-1 eshte 0100.";
				break;
			case 5:
				cout << "Numri i koduar ne kodin 84-2-1 eshte 1011.";
				break;
			case 6:
				cout << "Numri i koduar ne kodin 84-2-1 eshte 1010.";
				break;
			case 7:
				cout << "Numri i koduar ne kodin 84-2-1 eshte 1001.";
				break;
			case 8:
				cout << "Numri i koduar ne kodin 84-2-1 eshte 1000.";
				break;
			case 9:
				cout << "Numri i koduar ne kodin 84-2-1 eshte 1111.";
				break;
			default:
				cout << "Ju keni shtypur numer jo-valid.\n";
				return 0;

			}



		}
		else if (kodi == 3) {
			int h;
			cout << "VEMENDJE!Programi punon vetem per numra 1 shifrore.\n";
			cout << "Shkruani vleren qe deshironi ta konvertoni ne kodin 5421: ";
			cin >> h;
			switch (h) {
			case 0:
				cout << "Numri i koduar ne kodin 5421 eshte 0000.";
				break;
			case 1:
				cout << "Numri i koduar ne kodin 5421 eshte 0001.";
				break;
			case 2:
				cout << "Numri i koduar ne kodin 5421 eshte 0010.";
				break;
			case 3:
				cout << "Numri i koduar ne kodin 5421 eshte 0011.";
				break;
			case 4:
				cout << "Numri i koduar ne kodin 5421 eshte 0100.";
				break;
			case 5:
				cout << "Numri i koduar ne kodin 5421 eshte 1000.";
				break;
			case 6:
				cout << "Numri i koduar ne kodin 5421 eshte 1001.";
				break;
			case 7:
				cout << "Numri i koduar ne kodin 5421 eshte 1010.";
				break;
			case 8:
				cout << "Numri i koduar ne kodin 5421 eshte 1011.";
				break;
			case 9:
				cout << "Numri i koduar ne kodin 5421 eshte 1100.";
				break;
			default:
				cout << "Ju keni shtypur numer jo-valid.\n";
				return 0;

			}
		}
	}
	if (a == 2) {
		cout << "Shtypni 1 per te dekoduar kodin nga NBCD, shtypni 2 per te dekoduar kodin nga 84-2-1, shtyp 3 per te dekoduar kodin nga 5421:\n ";
	shtypja_kodit1:
		int c;
		cout << "Numri i zgjedhur eshte: ";
		cin >> c;
		if ((c < 1) || (c > 3)) {
			cout << "Lejohen vetem vlerat ne intervalin 1 deri 3!\n";
			goto shtypja_kodit1;
		}


		if (c == 1) {
			cout << "VEMENDJE!Shkruani vetem kater shifra, nese shkruani me shume programi iu ekzekuton vetem kater shifrat e para.\n";
			cout << "Jepni shifrat qe deshironi t'i dekodoni nga NBCD: \n";
			string nbcd;
			cin >> nbcd;

			int vlera1 = NBCDToInt(nbcd);
			cout << "Vlera ne decimale:" << vlera1 << endl;
		}
		else if (c == 2) {

			cout << "VEMENDJE:Shifrat e numrit shruhen me space ne mes!\n\n";

			cout << "Shkruani kodin qe deshironi ta dekodoni nga kodi 84-2-1: \n";
			int f, b, c, d;
			cin >> f;
			cin >> b;
			cin >> c;
			cin >> d;
			int rez;
			rez = ((8 * f) + (4 * b) + ((-2) * c) + ((-1) * d));
			cout << "Kodi i dekoduar nga kodi 84-2-1 eshte: " << rez;


		}
		else if (c == 3) {
			cout << "VEMENDJE: Shifrat e numrit shkruhen me space ne mes!\n\n";

			cout << "Shkruani numrin qe deshironi te dekodoni nga 5421: \n";
			int v1, v2, v3, v4;
			cin >> v1;
			cin >> v2;
			cin >> v3;
			cin >> v4;
			int k1 = (5 * v1) + (4 * v2) + (2 * v3) + (1 * v4);
			cout << "Numri i dekoduar nga kodi 5421 eshte: " << k1;

		}
	}

}