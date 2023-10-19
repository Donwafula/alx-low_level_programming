#include "shell.h"
/**
 * is_cmd - Checks if a file at the given path is an executable command.
 * @info: Pointer to the info struct (not used in this function).
 * @path: Path to the file to check.
 *
 * This function determines whether a file, specified by its path, is a valid
 * executable command. It uses the "stat" system call to inspect the file's
 * properties, such as mode.
 *
 * @info: Pointer to the info struct (not used in this function).
 * @path: Path to the file to check.
 *
 * Return: 1 if the file is an executable command, 0 otherwise.
 */
int is_cmd(info_t *info, char *path)
{
	struct stat st;

	(void)info;
	if (!path || stat(path, &st))
		return (0);

	if (st.st_mode & S_IFREG)
	{
		return (1);
	}
	return (0);
}

/**
 * dup_chars -Duplicates a portion of characters from a string.
 * @pathstr: The source string.
 * @start: The starting index of characters to copy.
 * @stop: The stopping index (exclusive) of characters to copy.
 *
 * This function duplicates a specific portion of characters from the source
 * string "pathstr" into a new buffer and returns a pointer to that buffer.
 *
 * @pathstr: The source string.
 * @start: The starting index of characters to copy.
 * @stop: The stopping index (exclusive) of characters to copy.
 *
 * Return: A pointer to a new buffer containing the duplicated characters.
 */
char *dup_chars(char *pathstr, int start, int stop)
{
	static char buf[1024];
	int i = 0, k = 0;

	for (k = 0, i = start; i < stop; i++)
		if (pathstr[i] != ':')
			buf[k++] = pathstr[i];
	buf[k] = 0;
	return (buf);
}

/**
 * find_path -  Searches for the full path of a command in the PATH string.
 * @info: Pointer to the info struct (not used in this function).
 * @pathstr: The PATH string containing directory paths.
 * @cmd: The command to find.
 * Return: A pointer to the full path of the command if found, or NULL.
 */
char *find_path(info_t *info, char *pathstr, char *cmd)
{
	int i = 0, curr_pos = 0;
	char *path;

	if (!pathstr)
		return (NULL);
	if ((_strlen(cmd) > 2) && starts_with(cmd, "./"))
	{
		if (is_cmd(info, cmd))
			return (cmd);
	}
	while (1)
	{
		if (!pathstr[i] || pathstr[i] == ':')
		{
			path = dup_chars(pathstr, curr_pos, i);
			if (!*path)
				_strcat(path, cmd);
			else
			{
				_strcat(path, "/");
				_strcat(path, cmd);
			}
			if (is_cmd(info, path))
				return (path);
			if (!pathstr[i])
				break;
			curr_pos = i;
		}
		i++;
	}
	return (NULL);
}
