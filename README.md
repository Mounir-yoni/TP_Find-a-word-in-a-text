# Word Search in Text

This C program searches for a specific word within a given text. It checks whether the word appears as an independent word (not part of another word) in the provided text and returns whether the word was found or not.

## Features
- Reads a line of text from the user.
- Reads a specific word to search for in the text.
- Checks if the word appears as a standalone word, ensuring it is not part of a longer word.
- Outputs whether the word was found or not.

## How It Works
1. The program asks the user to input a line of text using `fgets`.
2. It then asks the user to input a word to search for using `scanf`.
3. The program then checks if the word is present in the text, ensuring it is not part of another word (for example, searching for "is" will not match "this").
4. If the word is found, it outputs "the word was found", otherwise it outputs "the word was not found".

## Functions
### `bool findword(char text[], char word[])`
- **Parameters**:
  - `text[]`: The text in which to search.
  - `word[]`: The word to search for.
- **Returns**: `true` if the word is found as an independent word in the text, `false` otherwise.
  
The function works by:
- Looping through each character in the text.
- Comparing substrings of the text with the word.
- Ensuring the word is not part of a longer word by checking the characters before and after the word.

## Example Usage
```bash
$ ./word_search
Enter the text:
This is a simple text example.
Enter the word: simple
The word was found
