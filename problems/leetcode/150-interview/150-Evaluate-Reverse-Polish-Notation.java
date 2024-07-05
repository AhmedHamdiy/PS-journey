class Solution {

  public int evalRPN(String[] tokens) {
    Set<String> operands = Set.of(\/\, \+\, \-\, \*\);
    Stack<Integer> numbers = new Stack<>();
    for (int i = 0; i < tokens.length; i++) {
      String next = tokens[i];
      if (operands.contains(next)) {
        int second = numbers.pop();
        int first = numbers.pop();
        if (\/\.equals(next)) {
          numbers.push(first / second);
        } else if (\*\.equals(next)) {
          numbers.push(first * second);
        } else if (\+\.equals(next)) {
          numbers.push(first + second);
        } else {
          numbers.push(first - second);
        }
      } else {
        numbers.push(Integer.parseInt(next));
      }
    }
    return numbers.pop();
  }
}