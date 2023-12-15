# Question and Answer

## 1. The following questions refer to the tree of the figure 1.

### (a) Which node is the root?
The root node of the tree structure depicted in Figure 1 is labeled as /user/rt/courses/.

### (b) What are the internal nodes
Based on the corrected structure provided, the internal nodes are:

- `/user/rt/courses/`
- `/user/rt/courses/cs016/`
- `/user/rt/courses/cs016/homeworks/`
- `/user/rt/courses/cs016/programs/`
- `/user/rt/courses/cs252/`
- `/user/rt/courses/cs252/projects/`
- `/user/rt/courses/cs252/projects/papers/`
- `/user/rt/courses/cs252/projects/demos/`

### (c) How many descendents does node cs016/ have?
The node `cs016/` has the following descendants:

- 1 `grades`
- 3 under `homeworks/` (which are `hw1`, `hw2`, `hw3`)
- 3 under `programs/` (which are `pr1`, `pr2`, `pr3`)

So, the `cs016/` node has a total of 7 descendants.

### (d) How many ancestors does node cs016/ have?
The node `cs016/` has 1 ancestor, which is `/user/rt/courses/`. It is also the only parent node that can be reached by `/user/rt/courses/`.

### (e) What are the siblings of node homeworks/?
The siblings of the node `homeworks/` are:

- `grades`
- `programs/`

### (f) Which nodes are in the subtree rooted at node projects/?
The nodes in the subtree rooted at the node `projects/` are:

- `papers/`
  - `buyLow`
  - `sellHigh`
- `demos/`
  - `market`

These nodes are part of the subtree because they are descendants of the `projects/` node.

### (g) What is the depth of node papers/?
For the node `papers/` in your tree structure, we can calculate its depth as follows:

- Start from the root node: `/user/rt/courses/` (depth 0)
- Move to `cs252/` (depth 1)
- Then to `projects/` (depth 2)
- Finally reach `papers/` (depth 3)

Therefore, the depth of the node `papers/` is 3.

### (h) What is the height of the tree?
The height of the tree is indeed 4. There are four edges connecting these nodes:

1. `/user/rt/courses/` (root) to `cs252/`
2. `cs252/` to `projects/`
3. `projects/` to `papers/`
4. `papers/` to `buyLow` or `sellHigh` (leaf nodes)

Since we count the edges and not the nodes themselves, the height of this tree is 4.

The height of the tree is 4.

### (i) Give the output of preorderPrint(T,T.root())
```/user/rt/courses/ cs016/ grades homeworks/ hw1 hw2 hw3 programs/ pr1 pr2 pr3 cs252/ grades projects/ papers/ buyLow sellHigh demos/ market demos/ market```

### (j) Give the output of postorderPrint(T,T.root())
```hw1 hw2 hw3 homeworks/ pr1 pr2 pr3 programs/ grades cs016/ buyLow sellHigh papers/ market demos/ projects/ market demos/ grades cs252/ /user/rt/courses/```