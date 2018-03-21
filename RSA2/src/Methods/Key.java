package Methods;
import java.util.Random;


public class Key {
	private String name;
	private String name2 = "Martin";
	private String data;
	private String text = "";
	private char op;
	private int e;
	private int n;
	private int d;
	private int phi;
	private int prime1;
	private int prime2;
	
	
	public String getKey(String data, char op) {
		
		this.name = "arjun";
		this.data = data;
		this.op = op;
		
		if(name == name2) {
			Cryption();
			return text;
		}
		else {
			Generator gen = new Generator();
			int sum = gen.getNum(name);

			prime1 = sum;

			prime1 = gen.getPrime(prime1);

			int power = (int)((java.lang.Math.pow(10, ((prime1 > 0 ? (int)java.lang.Math.log10((double)(prime1)) + 1 : 1) - 1))));

			prime2 = ((prime1 % power) + (prime1 % 10) * 10);

			prime2 = gen.getPrime(prime2);

			n = prime1 * prime2;
			phi = (prime1 - 1) * (prime2 - 1);
			
			Random rnd = new Random();
			do {
				e = rnd.nextInt(32767) + 1 % phi;
			} while (gen.gcd(phi, e) != 1);


			do {

				d = rnd.nextInt(32767) + 1 % phi;

			} while (((d * e) % phi) != 1);
		}
		Cryption();
		return text;
	}
	
	
	private void Cryption() {
		
		Cryption crypt = new Cryption();
		switch(op) {
			case 'e':
				for (int i = 0; i < data.length(); i++)
					text = text + crypt.encrypt(data.charAt(i), n, e) + " ";
				break;
			case 'd':
				for (int i = 0; i < data.length(); i++)
					text = text + crypt.decrypt(data.charAt(i), n, d);
				break;
		}
	}
}
