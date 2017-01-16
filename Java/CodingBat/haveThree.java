// http://codingbat.com/prob/p109783

public boolean haveThree(int[] nums) {
  if (nums.length < 5) { // We need at least 5 elements to have 3 seperate 3's.
    return false;
  }
  
  int threeCount = (nums[0] == 3) ? 1 : 0;
  
  for (int i = 1; i < nums.length; ++i) {
    if (nums[i] == 3) {
      if (nums[i-1] == 3) {
        return false;
      }
      threeCount++;
    }
  }
  
  return (threeCount == 3);
}
