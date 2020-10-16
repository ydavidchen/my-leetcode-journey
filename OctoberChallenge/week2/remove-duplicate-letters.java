class Solution {
    public String removeDuplicateLetters(String s) {
        int[] count = new int[26];
        boolean[] mask = new boolean[26];
        
        Stack<Character> ss = new Stack<>();
        char[] c = s.toCharArray();
        
        for (char i : c) {
            count[i-'a']++;
        }
        
        for (char i:c){
            int idx = i-'a';
            count[idx]--;
            if(mask[idx]) continue;
            while (! ss.isEmpty() && i < ss.peek() && count[ss.peek()-'a'] != 0){
                mask[ss.pop()-'a']=false;
            }
            
            ss.push(i);
            mask[idx] = true;
        }
        StringBuilder sb = new StringBuilder();
        while (! ss.isEmpty()) {
            sb.insert(0, ss.pop());
        }
        
        return sb.toString();
    }
}
