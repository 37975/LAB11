void checkWinner(int p, int y){
	// Write condition for cout in this function
	cout << "\n---------------------------------\n";
	if (p == y){
		cout <<   "|             Draw!!!           |"; // when p is equal to y
	}else if (p > y)
	{
		cout <<   "|         Player wins!!!        |"; // when p is greater than y
	}else{
		cout <<   "|          Yugi wins!!!         |"; // when p is less than y
	}
	cout << "\n---------------------------------\n";
}