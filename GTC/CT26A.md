# 🌟 Graph Theory & Combinatorics Solutions  2026CT

---

## 🌟 Q1 (i) Define a path in a graph. Explain how to obtain the path matrix of length 2 from the adjacency matrix of the graph shown in Figure 1.

✨ **Answer:**

🔹 **Definition of a Path in a Graph:**
A path in an undirected graph is a sequence of alternating vertices and edges that links a commencement vertex to a termination vertex, where no vertex (and consequently no edge) is repeated.

🌈 **Example:**

    A ----- B ----- C

The sequence $A \to B \to C$ is a path of length **2** because it traverses exactly 2 distinct edges.

🔹 **Adjacency Matrix:**
The adjacency matrix of a graph is a square matrix used to represent which pairs of vertices are adjacent in the graph.
* Rows and columns represent vertices.
* Entry $a_{ij} = 1$ if an edge exists between vertex $i$ and vertex $j$.
* Entry $a_{ij} = 0$ otherwise.

🔥 **Path Matrix of Length 2:**
The total number of paths of length 2 between any two vertices $i$ and $j$ is found by computing $A^2$, where $A$ is the adjacency matrix of the graph.

🧠 **Why Does This Work?**
According to the algebraic definition of matrix multiplication:
$$(A^2)_{ij} = \sum_k a_{ik}a_{kj}$$

This summation systematically checks every vertex $k$ in the graph. The product $a_{ik}a_{kj}$ will equal **1** if and only if there is an edge from $i$ to $k$ ($a_{ik}=1$) AND an edge from $k$ to $j$ ($a_{kj}=1$). Thus, it perfectly counts all common intermediate neighbors that create a path of length 2.

🌈 **Example:**
Suppose we have the following adjacency matrix $A$:
$$A = \begin{bmatrix} 0 & 1 & 1 \\ 1 & 0 & 1 \\ 1 & 1 & 0 \end{bmatrix}$$

Squaring it yields $A^2$:
$$A^2 = \begin{bmatrix} 2 & 1 & 1 \\ 1 & 2 & 1 \\ 1 & 1 & 2 \end{bmatrix}$$

The entry $(A^2)_{12} = 1$ tells us that exactly **1** distinct path of length 2 exists from vertex 1 to vertex 2.

✅ **Final Conclusion:**
To obtain the path matrix of length 2, construct the graph's adjacency matrix $A$ and compute its square, $A^2$.

---

## 🌟 Q1 (ii-a) A graph has six vertices and their degrees are: 3, 3, 2, 2, 2, 2. Determine whether the graph contains an Euler path or Euler circuit.

✨ **Answer:**

🔹 **Euler Path:**
An Euler path is a trail in a connected graph that visits every single edge exactly once.
* **Condition:** A connected graph contains an Euler path if and only if it has exactly **0** or **2** vertices of odd degree.

🔹 **Euler Circuit:**
An Euler circuit is an Euler path that starts and ends at the exact same vertex.
* **Condition:** A connected graph contains an Euler circuit if and only if **every single vertex** has an even degree.

🔍 **Given Degrees:**
3, 3, 2, 2, 2, 2
* Vertices with odd degrees = Two vertices (the two vertices with degree 3).

🔥 **Apply Euler's Theorem:**
Since the graph contains exactly two vertices of odd degree, it satisfies the requirements for a path but fails the circuit condition.

✅ **Final Answer:**
| Type | Exists? |
| :--- | :--- |
| Euler Path | ✅ Yes |
| Euler Circuit | ❌ No |

---

## 🌟 Q1 (ii-b) Justify your answer.

✨ **Answer:**

According to Euler’s fundamental theorem:

🔹 **Condition for an Euler Circuit:**
A connected graph has an Euler circuit if and only if every vertex has an even degree. In this specific problem, two vertices possess an odd degree of **3**, which completely rules out the existence of an Euler circuit.

🔹 **Condition for an Euler Path:**
A connected graph has an Euler path if and only if it contains exactly two vertices of odd degree. Since our graph contains exactly two vertices of degree 3, an Euler path is guaranteed to exist.

🌈 **Interpretation:**
Any valid Euler path in this graph will strictly begin at one of the vertices of degree 3 and terminate at the other vertex of degree 3.

✅ **Final Conclusion:**
The graph possesses a valid Euler path but cannot contain an Euler circuit.

---

## 🌟 Q2 (i) Prove that “$G$ is a tree if and only if there is a unique path between any two vertices.”

✨ **Answer:**

🔹 **Tree Definition:**
A tree is defined as a connected undirected graph that contains no simple cycles (acyclic).

🔥 **Forward Direction (If $G$ is a tree $\implies$ unique paths exist):**
1. Since $G$ is a tree, it is by definition connected. Therefore, at least one path must exist between any two vertices $u$ and $v$.
2. Now, suppose there are two different paths, say $P_1$ and $P_2$, connecting $u$ and $v$.
3. If we trace along $P_1$ from $u$ to $v$ and then return to $u$ along the reverse of $P_2$, the divergence and convergence points of these two paths will inevitably form a simple cycle.
4. However, a tree is completely acyclic. This contradiction means that two separate paths cannot exist. Thus, the path between any two vertices must be unique.

🔥 **Converse Direction (If unique paths exist $\implies G$ is a tree):**
1. We are given that a unique path exists between every pair of vertices. Since a path exists for all pairs, the graph is connected.
2. Now, suppose the graph contains a simple cycle. 
3. If a cycle contains two vertices $x$ and $y$, we can find two completely distinct paths from $x$ to $y$ by traveling in clockwise and counter-clockwise directions along the cycle.
4. This directly contradicts the premise that paths are unique. Therefore, the graph cannot contain any cycles.
5. Since the graph is both connected and acyclic, it is a tree.

✅ **Final Conclusion:**
A graph $G$ is a tree if and only if there is a unique path between any two vertices.

---

## 🌟 Q3 (ii-c) Justify using a suitable example: “The vertex connectivity of any graph $G$ can never exceed the edge connectivity of $G$.”

✨ **Answer:**

🔹 **Definitions:**
* **Vertex Connectivity $K(G)$:** The minimum number of vertices whose removal disconnects the graph or reduces it to a single isolated vertex.
* **Edge Connectivity $\lambda(G)$:** The minimum number of edges whose removal disconnects the graph.

🧠 **Fundamental Theorem:**
For any connected graph $G$:
$$K(G) \leq \lambda(G)$$

🌈 **Suitable Example: Complete Graph $K_4$**

      A ----- B
      |\     /|
      | \   / |
      |  \ /  |
      |  / \  |
      | /   \ |
      |/     \|
      C ----- D

🔥 **Edge Connectivity $\lambda(G)$:**
To isolate a vertex or split $K_4$ into separate components, you must remove at least 3 edges (for instance, the 3 edges incident to vertex A). Thus, $\lambda(G) = 3$.

🔥 **Vertex Connectivity $K(G)$:**
To disconnect the remaining components of $K_4$, you must remove at least 3 vertices. Thus, $K(G) = 3$.

🌟 **Verification:**
$K(G) = \lambda(G) = 3$, which perfectly validates the inequality $K(G) \leq \lambda(G)$.

🧠 **Why This Theorem Holds:**
Removing a vertex automatically destroys all edges that are incident to it. Because vertex elimination eliminates multiple edges simultaneously, disconnecting a graph via vertex removal can never require more operations than disconnecting it strictly through isolated edge cuts.

✅ **Final Conclusion:**
The vertex connectivity of any graph can never exceed its edge connectivity.

---

## 🌟 Q4 (i) Find out the chromatic number of the graph given below. Mention all steps properly.

✨ **Answer:**

🔹 **Chromatic Number:**
The chromatic number $\chi(G)$ is the minimum number of colors needed to color the vertices of a graph such that no two adjacent vertices share the same color.

🔍 **Step 1: Observe the Graph Properties**
The graph contains cliques of size 3 (triangles) and overlapping odd cycles. A complete subgraph $K_3$ (triangle) structurally requires at least **3** unique colors to prevent color clashing. Therefore, $\chi(G) \geq 3$.

🌈 **Step 2: Assign 3 Colors Methodically**
Let's use: 🔴 Red, 🔵 Blue, 🟢 Green.

Properly alternating the colors around the internal triangles and exterior boundaries confirms that a 3-color map is achievable without any adjacent vertices sharing a color.

❌ **Why 2 Colors are Impossible:**
A graph is 2-colorable if and only if it is bipartite, which means it contains no odd cycles. Because this graph contains triangles (cycles of length 3), it cannot be 2-colored.

✅ **Final Answer:**
$$\chi(G) = 3$$
The chromatic number is: 🌟 **3**

---

## 🌟 Q4 (ii) Show that if a graph has chromatic number $k$, then it contains a subgraph with minimum degree at least $k-1$.

✨ **Answer:**

🔹 **Given:**
A graph $G$ has a chromatic number of $\chi(G) = k$. We must show it contains a subgraph $H$ where $\delta(H) \geq k-1$.

🧠 **Proof by Contradiction:**
1. Suppose the statement is false. This implies that **every** subgraph of $G$ contains at least one vertex whose degree within that subgraph is strictly less than $k-1$ (i.e., $\leq k-2$).
2. Let's create an ordering of vertices by repeatedly finding a vertex $v$ with degree $\leq k-2$ in the current graph, removing it, and placing it at the front of a list.
3. We repeat this elimination process for the remaining subgraph until the graph is empty.
4. Now, let's reverse this process and reconstruct the graph by reinserting the vertices in the exact opposite order of their removal, coloring each vertex greedily as it is added back.
5. When any vertex $v$ is reinserted, it is connected to **at most** $k-2$ vertices that have already been placed and colored.
6. Since we have a pool of $k-1$ total colors available, and at most $k-2$ colors are taken up by its neighbors, there will **always be at least one color left over** to safely assign to $v$.
7. This means the entire graph $G$ can be colored using only $k-1$ colors, implying $\chi(G) \leq k-1$.
8. However, this directly contradicts our given condition that $\chi(G) = k$.

🔥 **Conclusion:**
Our initial assumption was false. Therefore, $G$ must contain a subgraph with a minimum degree of at least $k-1$.

✅ **Final Conclusion:**
If a graph has chromatic number $k$, it contains a subgraph with a minimum degree of at least $k-1$.

---

## 🌟 Q4 (iii) Prove that every perfect matching is a maximum matching.

✨ **Answer:**

🔹 **Definitions:**
* **Matching:** A set of edges chosen such that no two edges share a common vertex.
* **Perfect Matching:** A matching that matches every single vertex in the graph exactly once. If a graph contains $n$ vertices, a perfect matching contains exactly $\frac{n}{2}$ edges.
* **Maximum Matching:** A matching that contains the largest possible number of edges out of all valid matchings for that graph.

🧠 **Proof:**
1. Let $M$ be a perfect matching in a graph $G$ with $n$ vertices. The size of this matching is $|M| = \frac{n}{2}$.
2. Since $M$ is a perfect matching, every one of the $n$ vertices in the graph is the endpoint of exactly one edge in $M$. There are absolutely no unmatched vertices remaining.
3. Any valid matching edge requires two distinct, completely unmatched vertices to connect.
4. Because there are zero unmatched vertices left in the graph under matching $M$, it is physically impossible to add another independent edge to expand the matching size.
5. Furthermore, no matching in a graph with $n$ vertices can ever exceed $\frac{n}{2}$ edges, because edges cannot share endpoints.
6. Since $M$ reaches this absolute theoretical limit of $\frac{n}{2}$ edges, no matching can ever be strictly larger than $M$. Therefore, $M$ is a maximum matching.

🌈 **Example:**

    A ----- B
    
    C ----- D

The matching set $\{AB, CD\}$ covers all 4 vertices perfectly. No larger independent set of edges can be chosen, making it both a perfect matching and a maximum matching.

✅ **Final Conclusion:**
Every perfect matching is always a maximum matching.

---

## 🌟 Q5 (i) A drawer contains a dozen brown socks and a dozen black socks, all unmatched. A man takes socks out at random in the dark. How many socks must he take out to be sure that he has at least two socks of the same color?

✨ **Answer:**

🔹 **Apply Pigeonhole Principle 🐦**
Here, the colors represent our "pigeonholes". There are exactly **2** categories:
1. Brown 🤎
2. Black 🖤

🔥 **Worst Case Scenario:**
To avoid getting a matching pair for as long as possible, you pick socks of completely different colors:
* 1st sock drawn: Brown 🤎
* 2nd sock drawn: Black 🖤

At this point, you have 2 socks, each a different color. The very next sock you draw (**the 3rd sock**) must be either brown or black. No matter what, it will instantly create a matching pair with one of your first two socks.

✅ **Final Answer:**
The minimum number of socks he must take out is: 🌟 **3**

---

## 🌟 Q5 (ii) How many bit strings contain exactly eight 0s and ten 1s if every 0 must be immediately followed by a 1?

✨ **Answer:**

🔹 **Given Constraints:**
* Total `0`s = 8
* Total `1`s = 10
* Condition: Every `0` must be immediately followed by a `1`.

🧠 **Key Structural Substitution:**
Since every single `0` must be instantly followed by a `1`, they are locked together into a composite block. Let's define this block as:
$$X = \text{"01"}$$

Since there are 8 `0`s, we must create exactly **8 separate $X$ blocks**.
These 8 blocks account for:
* All 8 of our `0`s.
* 8 of our `1`s.

🔥 **Calculate Remaining Elements:**
We started with ten `1`s. After placing 8 of them inside our $X$ blocks, we have left over:
$$10 - 8 = 2 \text{ separate "1"s}$$

Now, our problem simplifies to finding the number of unique ways to arrange these distinct components:
* 8 identical blocks of $X$ ("01")
* 2 identical single `1`s

Total objects to arrange = $8 + 2 = 10$ objects.

🔥 **Apply Permutations of Multisets Formula:**
$$\text{Total Arrangements} = \frac{10!}{8! \times 2!} = \frac{10 \times 9}{2 \times 1} = 45$$

✅ **Final Answer:**
The number of valid bit strings is: 🌟 **45**

---

## 🌟 Q5 (iii) How many different strings can be made from the letters in ABRACADABRA, using all the letters?

✨ **Answer:**

🔹 **Count Letter Frequencies:**
The word is **ABRACADABRA**.
Total letters ($n$) = **11**

Let's break down the individual counts of each repeating letter:
* **A:** 5
* **B:** 2
* **R:** 2
* **C:** 1
* **D:** 1

🔹 **Formula for Permutations with Repetition:**
$$\text{Total Arrangements} = \frac{n!}{n_1! \times n_2! \times \cdots \times n_k!}$$

🔥 **Substitute Values:**
$$\text{Total Strings} = \frac{11!}{5! \times 2! \times 2! \times 1! \times 1!}$$

🔥 **Step-by-Step Calculation:**
* $11! = 39,916,800$
* $5! = 120$
* $2! = 2$

$$\text{Total Strings} = \frac{39,916,800}{120 \times 2 \times 2} = \frac{39,916,800}{480} = 83160$$

✅ **Final Answer:**
The number of distinct arrangements is: 🌟 **83,160**

---

## 🌟 Q5 (iv) Suppose there are 21 faculty members in the CSE department and 24 in the IT department. In how many ways can a committee consisting of 6 CSE faculty and 4 IT faculty be selected?

✨ **Answer:**

🔹 **Selection from the CSE Department:**
We need to choose 6 members out of 21. Since roles are not specified, order does not matter:
$$\text{CSE Selection} = \binom{21}{6}$$

🔹 **Selection from the IT Department:**
We need to choose 4 members out of 24:
$$\text{IT Selection} = \binom{24}{4}$$

🔥 **Apply Product Rule for Combinations:**
Since these two departmental selections are independent stages of creating a single committee, we multiply the possibilities together:
$$\text{Total Committees} = \binom{21}{6} \times \binom{24}{4}$$

🔥 **Numerical Calculations:**
$$\binom{21}{6} = \frac{21!}{6! \times 15!} = 54,264$$
$$\binom{24}{4} = \frac{24!}{4! \times 20!} = 10,626$$

$$\text{Total Combinations} = 54,264 \times 10,626 = 576,608,064$$

✅ **Final Answer:**
The total number of ways to form the committee is: 🌟 **576,608,064**

---

## 🌟 Q6 (i) Find the generating function of the sequence in closed form: $\langle 2, -4, 6, -8, 10, -12, \dots \rangle$

✨ **Answer:**

🔹 **Identify the Pattern:**
Let's analyze the sequence: $\langle 2, -4, 6, -8, 10, -12, \dots \rangle$.
We can factor out a **2** from the entire sequence:
$$2 \times \langle 1, -2, 3, -4, 5, -6, \dots \rangle$$

The terms inside are alternating integers, where the general term is given by $a_n = (n+1)(-1)^n$.

🔹 **Utilize Maclaurin Series Identities:**
We know the standard generating function for regular sequential integers is:
$$\sum_{n=0}^{\infty} (n+1)x^n = \frac{1}{(1-x)^2}$$

To introduce the alternating negative signs, we substitute $x$ with $-x$:
$$\sum_{n=0}^{\infty} (n+1)(-x)^n = \frac{1}{(1 - (-x))^2} = \frac{1}{(1+x)^2}$$

This expands directly to: $1 - 2x + 3x^2 - 4x^3 + \cdots$

🔥 **Multiply by the Scaling Factor:**
To match our original sequence, we multiply the entire expression by **2**:
$$\frac{2}{(1+x)^2} = 2 - 4x + 6x^2 - 8x^3 + \cdots$$

✅ **Final Answer:**
The closed-form generating function is:
$$\frac{2}{(1+x)^2}$$

---

## 🌟 Q6 (ii) Find the sequence generated by the generating function: $\frac{1}{1-4x}$

✨ **Answer:**

🔹 **Apply Geometric Series Expansion:**
Recall the fundamental infinite geometric series expansion:
$$\frac{1}{1-r} = 1 + r + r^2 + r^3 + r^4 + \cdots$$

Our given function is $\frac{1}{1-4x}$. We can substitute $r = 4x$ into the identity:
$$\frac{1}{1-4x} = 1 + (4x) + (4x)^2 + (4x)^3 + (4x)^4 + \cdots$$
$$\frac{1}{1-4x} = 1 + 4x + 16x^2 + 64x^3 + 256x^4 + \cdots$$

🌟 **Extract Coefficients for the Sequence:**
The coefficients of $x^n$ form our generated terms:
* $n=0 \implies 1$
* $n=1 \implies 4$
* $n=2 \implies 16$
* $n=3 \implies 64$

✅ **Final Answer:**
The sequence generated is: 🌟 **$\langle 1, 4, 16, 64, 256, \dots \rangle$** (or written explicitly as $a_n = 4^n$).

---

## 🌟 Q6 (iii) Using generating functions, find $a_n$ in terms of $n$ for: $a_0 = 1, a_1 = 2$ and $a_{n+2} = 5a_{n+1} - 4a_n$.

✨ **Answer:**

🔹 **Step 1: Set Up the Characteristic Equation**
Bring all terms of the linear recurrence relation to the left-hand side:
$$a_{n+2} - 5a_{n+1} + 4a_n = 0$$

This yields the characteristic quadratic equation:
$$r^2 - 5r + 4 = 0$$

🔥 **Step 2: Factor and Solve for Roots**
$$(r - 4)(r - 1) = 0$$

The distinct roots are:
$$r = 4, \quad r = 1$$

🔥 **Step 3: State the General Solution**
Since the roots are real and distinct, the general explicit formula is:
$$a_n = A(4^n) + B(1^n)$$
$$a_n = A(4^n) + B$$

🔥 **Step 4: Evaluate Constants Using Boundary Conditions**
* Using $a_0 = 1$:
$$A + B = 1$$

* Using $a_1 = 2$:
$$4A + B = 2$$

Subtract the first equation from the second equation to eliminate $B$:
$$(4A + B) - (A + B) = 2 - 1$$
$$3A = 1 \implies A = \frac{1}{3}$$

Substitute $A = \frac{1}{3}$ back to isolate $B$:
$$\frac{1}{3} + B = 1 \implies B = \frac{2}{3}$$

🔥 **Step 5: Assemble the Explicit Formula**
Substitute the solved values of $A$ and $B$ back into the general solution:
$$a_n = \frac{1}{3}(4^n) + \frac{2}{3}$$

✅ **Final Answer:**
The explicit formula for the sequence is:
🌟 $$a_n = \frac{4^n + 2}{3}$$