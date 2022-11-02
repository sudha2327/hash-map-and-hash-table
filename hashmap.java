import java.io.*;
import java.util.*;
public class hashmap{
	
	public static void main(String args[]){
		
		HashMap<Integer,String> ht=new HashMap<>();
		
		ht.put(1,"sudha");
		ht.put(2,"sudhagar");
		ht.put(3,"sudhaKutty");
		ht.put(4,"siddharth");
		ht.put(5,"sidhu");
		ht.put(6,"siddharth Sharma");
		ht.put(7,"siddharth2");
		System.out.println(ht);
		
		for(Map.Entry e:ht.entrySet()){
			System.out.println(e.getKey()+" "+e.getValue());
		}
		
	}
	
}