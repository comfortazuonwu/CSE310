import java.io. * ;
import java.util.Scanner;


public class Main {
    public static void main(String[] args) throws Exception {
        System.out.println("Welcome to College quest. For students wanting to study in Nigeria, enter a JAMB* cutoff mark and see the schools that can accept that score.");
        CSVReader.displayFile() ;
        
    }
}

class CSVReader {
    public static void displayFile() throws Exception {
      Scanner sc = new Scanner(new File("nigerianschool.csv"));
      //parsing a CSV file into the constructor of Scanner class 
      sc.useDelimiter(",");
      //setting comma as delimiter pattern
      while (sc.hasNext()) {
      System.out.print(sc.next());
      }
      sc.close();
      //closes the scanner  
      //String cutoff;
  
      //System.outprint.ln("Enter cutoffmark"); 
      //cutoff = sc.nextLine();   
          
    }
}

class Input {
    public static void inputcutoff() {
        Scanner myObj = new Scanner(System.in);
        String input;
    
    // Enter username and press Enter
        System.out.println("Enter Cutoffmark"); 
        input = myObj.nextLine();
        
        
    
       
    }
}

