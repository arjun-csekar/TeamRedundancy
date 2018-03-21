package Methods;

public class RSA {
	
	public String convert(String data, char op) {
		
		String data2 = User(data, op);
		return data2;
	}
	
	private String User(String data, char op) {
		
		Key text = new Key();
		
		String text2 = text.getKey(data, op);
		return text2;
	}
}
