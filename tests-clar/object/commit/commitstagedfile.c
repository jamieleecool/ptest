	repo = NULL;

	const git_index_entry *entry;
	char buffer[128];
	cl_git_pass(git_index_add_bypath(index, "test.txt"));
	entry = git_index_get_byindex(index, 0);
	cl_git_pass(git_index_write_tree(&tree_oid, index));

	cl_assert_equal_i(16, git_message_prettify(buffer, 128, "Initial commit", 0));

		buffer,