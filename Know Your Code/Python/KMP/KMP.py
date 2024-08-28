def _create_lps_array(pattern):
	"""
	Creates the Longest Prefix Suffix (LPS) array for the given pattern.

	The LPS array is used to hold the longest prefix which is also a suffix
	for the pattern. This array helps in efficiently skipping characters
	while matching the pattern with the text in the KMP algorithm.

	Args:
	    pattern (str): The pattern for which the LPS array is to be created.

	Returns:
	    list: A list containing the LPS values for the pattern.
	"""
	length = len(pattern)
	lps = [0] * length
	i, j = 1, 0

	while i < length:
		if pattern[i] == pattern[j]:
			j += 1
			lps[i] = j
			i += 1
		else:
			if j != 0:
				j = lps[j - 1]
			else:
				lps[i] = 0
				i += 1

	return lps


def kmp_search(text, pattern):
	"""
	Performs the Knuth-Morris-Pratt (KMP) algorithm to search for occurrences
	of a pattern within a given text.

	The KMP algorithm uses the LPS array to avoid unnecessary comparisons
	in the input text, thus improving the overall search efficiency.

	Args:
	    text (str): The text in which to search for the pattern.
	    pattern (str): The pattern to search for in the text.

	Returns:
	    list: A list of starting indices where the pattern is found in the text.
	"""
	n, m = len(text), len(pattern)
	lps = _create_lps_array(pattern)

	i, j = 0, 0
	occurrences = []
	while i < n:
		if pattern[j] == text[i]:
			i += 1
			j += 1

		if j == m:
			occurrences.append(i - j)
			j = lps[j - 1]
		elif i < n and pattern[j] != text[i]:
			if j != 0:
				j = lps[j - 1]
			else:
				i += 1

	return occurrences


if __name__ == "__main__":
	text = "aabbbbabbbbbbbbbbbbbbbbbb"
	pattern = "abbb"
	occurrences = kmp_search(text, pattern)
	print(f"Pattern found at indices: {occurrences}")
