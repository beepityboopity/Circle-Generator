#pragma once

class node {
	public:
		float data[9];
		node* child[2];

		node() {
			for (int i = 0; i < 9; i++) data[i] = 0.0f;
			child[0] = NULL;
			child[1] = NULL;
		}
};