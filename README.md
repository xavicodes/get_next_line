# get_next_line
get_next_line project from 42 curse.

The get_next_line function takes a file descriptor fd as its parameter. It first performs some input validation checks, ensuring that the file descriptor is valid, and the BUFFER_SIZE is within a reasonable range.

It then dynamically allocates memory for read_content, a buffer used to read content from the file descriptor. The size of the buffer is determined by BUFFER_SIZE. If memory allocation fails, the function returns NULL.

The function then enters a loop that continues until a newline character (‘\n’) is encountered in the read_buffer or the end of the file is reached (read_bytes becomes 0). Within the loop, it reads content from the file descriptor using the read function, appending the content to the read_buffer using the ft_strjoin function. The loop continues until a newline character is found in the read_buffer or the end of the file is reached.

If there is an error during the read operation, the function frees the memory allocated for read_content and read_buffer using the free_and_null function and returns NULL.

After the loop, the function frees the memory allocated for read_content since its purpose has been served. It then uses the read_line function to create a line from the read_buffer. The create_substring function is then used to update the read_buffer by removing the part of the string that has been processed.

Finally, the function returns the dynamically allocated line.
