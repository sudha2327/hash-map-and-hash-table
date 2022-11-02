import java.io.*;
import java.util.*;
public class basicinsertion{
	public static void main(String args[]){
		
		Hashtable<Integer,String> ht=new Hashtable<Integer,String>(4);
		
		ht.put(1,"sudha");
		ht.put(2,"sudhagar");
		ht.put(3,"sudhaKutty");
		ht.put(4,"siddharth");
		ht.put(5,"sidhu");
		ht.put(6,"siddharth Sharma");
		ht.put(7,"siddharth2");
		
		// ht.put(7,"siddharth Sharma");
		// ht.put(9,"siddharth Sharma");
		// ht.put(10,"siddharth Sharma");
		// ht.put(11,"siddharth Sharma");
		// ht.put(12,"siddharth Sharma");
		// ht.put(13,"siddharth Sharma");
		// ht.put(14,"siddharth Sharma");
		// ht.put(15,"siddharth Sharma");
		// ht.put(16,"siddharth Sharma");
		// ht.put(17,"siddharth Sharma");
		
		System.out.println("Display the hashtable");
		System.out.println(ht);
		System.out.println(ht.size());
		//System.out.println("now get the values of 5th key ");
          
		// if(ht.containsKey(1)){
			// String k=ht.get(1);
			// System.out.println("key values"+"\"first key values\" is"  +k);
			
			
		// }

  
// System.out.println("finding the containsValeus");
		// if(ht.containsValue("siddharth)){
			// String k=ht.get("si);
			// System.out.println("key values"+"\"first key values\" is"  +k);
			
			
		// }
		
		
		//update operations
		// ht.put(7,"hiisudha");
		// System.out.println("updated Hashtable is"+ht);
		
		// removal of an item from the hashtable is just include "remove()"
		
		// ht.remove(7);
		// System.out.println("after removed an item"+"\"7th\" element"+ht);
		
		
		//traversal by using for loop
		
		// for(Map.Entry<Integer,String> e:ht.entrySet()){
			
			// System.out.println(e.getKey()+" "+e.getValue());
			
			
		// }
		
		
	}
	
}