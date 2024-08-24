#!/bin/bash

make
input_files=("input_files/big_file" "input_files/single_long_line" "input_files/small_file")
word_to_replace=cat
replacement=dog

for file in "${input_files[@]}"; do
	output_file="${file}.replace"
	./sed_is_for_losers "$file" "$word_to_replace" "$replacement"
	# Count the number of occurrences of the word-to-replace in the output file
	count=$(grep -o "$word_to_replace" "$output_file" | wc -l)
	# Check if the count is 0 and print an error message if it isn't
	if [[ $count -ne 0 ]]; then
		echo "Error: Word '$word_to_replace' appears $count times in $output_file"
	fi
done

# Test 1: Read from a file with no read permission
no_read_permission_file="input_files/incorrect_permissions_file"
touch "$no_read_permission_file"
chmod -r "$no_read_permission_file"
./sed_is_for_losers "$no_read_permission_file" "Hello" "Hi"
exit_code=$?
if [[ $exit_code -ne 1 ]]; then
	echo "Error: sed_is_for_losers did not return exit code 1 for file with no read permission"
fi

# Test 2: Read from a non-existent file
non_existent_file="non_existent.txt"
./sed_is_for_losers "$non_existent_file" "Hello" "Hi"
exit_code=$?
if [[ $exit_code -ne 1 ]]; then
	echo "Error: sed_is_for_losers did not return exit code 1 for non-existent file"
fi

# Test 3: Write to a file with no write permission
no_write_permission_file="input_files/no_write_permission"
touch "$no_write_permission_file"
chmod -w "$no_write_permission_file"
./sed_is_for_losers $no_write_permission_file "Hello" "hi"
exit_code=$?
if [[ $exit_code -ne 1 ]]; then
	echo "Error: sed_is_for_losers did not return exit code 1 for file with no write permission"
fi

# Test 4: Read from a empty file
empty_file="input_files/empty_file"
./sed_is_for_losers "$empty_file" "Hello" "Hi"
exit_code=$?
if [[ $exit_code -ne 0 ]]; then
	echo "Error: sed_is_for_losers did not return exit code 0 for empty file"
fi