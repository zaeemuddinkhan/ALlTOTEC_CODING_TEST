/*Question 3 - Program to find the occurrences of repeated words from a sentence in JAVA */

import java.util.Scanner;

public class Question3 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        
        System.out.println("Enter a sentence:");
        String sentence = scanner.nextLine();

        
        String[] words = sentence.toLowerCase().split(" ");

        
        boolean[] visited = new boolean[words.length];

        

        
        for (int i = 0; i < words.length; i++) {
            if (!visited[i]) { 
                int count = 1; 

                
                for (int j = i + 1; j < words.length; j++) {
                    if (words[i].equals(words[j])) {
                        count++;
                        visited[j] = true; 
                    }
                }

                
                if (count > 1) {
                    
                    System.out.println("Repeated word: " + words[i] + " and its occurrences: " + count);

                }
            }
        }

        scanner.close();
    }
}
