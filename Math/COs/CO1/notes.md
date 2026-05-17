Here is your complete, fully-solved, and beautifully highlighted guide covering ONLY Course Outcome 1 (CO1) from your notes! 🚀 Let's dive into the core concepts and the numericals in a clean, visual format. ✨

# 🎲📘 COMPLETE FUN GUIDE TO PROBABILITY & RANDOM VARIABLES (CO1) ✨

## 🌟 UNIT 1 — PROBABILITY BASICS

### 🎲 What is Probability?
Probability measures the chance that an event will occur.
👉 If something is impossible → probability = 0
👉 If something is certain → probability = 1
Mathematical Bound:
$$0 \le P(E) \le 1$$

### 🎯 Random Experiment & Sample Space
**Random Experiment:** A process whose result cannot be predicted exactly beforehand is called a Random Experiment.
✅ **Examples:** Throwing a dice 🎲, Tossing a coin 🪙, Drawing a card 🃏. Even if conditions are same, result may change.

**Outcome:** A possible result of a random experiment.

**Sample Space ($S$):** The set of all possible outcomes is called the Sample Space.
*Example:* Throwing a dice gives possible outcomes $S=\{1,2,3,4,5,6\}$. Each number is an outcome.

### 🧩 Types of Events
Any collection of outcomes from the sample space is called an Event.
1️⃣ **Elementary Event:** Contains only one outcome. (Example: Getting "4" on a dice, $E=\{4\}$)
2️⃣ **Compound Event:** Contains more than one outcome. (Example: Getting an even number, $E=\{2,4,6\}$)
3️⃣ **Impossible Event ❌:** Event that can never occur ($P(E)=0$).
4️⃣ **Certain Event ✅:** Event that always occurs ($P(E)=1$).
5️⃣ **Complementary Event 🔄:** If A occurs, $A'$ does not occur.
$$P(A')=1-P(A)$$
6️⃣ **Mutually Exclusive Events 🚫:** Two events that cannot occur together ($A \cap B = \phi$).
7️⃣ **Exhaustive Events 🌍:** Events whose union gives the entire sample space ($A_1 \cup A_2 \cup ... = S$).
8️⃣ **Equally Likely Events ⚖️:** Events having the same chance of occurring.

### 🎯 Classical & Axiomatic Probability
**Classical Probability Formula:**
If total outcomes = $n$ and Favourable outcomes = $m$, then:
$$P(E) = \frac{m}{n}$$

**Axiomatic Laws:**
🔹 **First Law:** $P(E) \ge 0$ (Probability is never negative).
🔹 **Second Law:** $P(S) = 1$ (Total probability of sample space is 1).
🔹 **Third Law (Addition Law):**
If mutually exclusive:
$$P(A \cup B) = P(A) + P(B)$$
If NOT mutually exclusive:
$$P(A \cup B) = P(A) + P(B) - P(A \cap B)$$

---

## 🌟 CONDITIONAL PROBABILITY & BAYES' THEOREM

### 🔗 Independent vs. Dependent Events
**Independent Events:** Occurrence of one event does not affect another (e.g., Two coin tosses).
**Dependent Events:** Occurrence of one event affects another (e.g., Drawing cards without replacement).

### 🧠 Conditional Probability
Probability of A given B already occurred.
$$P(A|B) = \frac{P(A \cap B)}{P(B)}$$

### 🔥 Bayes' Theorem
Used to reverse conditional probabilities.
$$P(E_i|A) = \frac{P(E_i)P(A|E_i)}{\sum P(E_i)P(A|E_i)}$$

---

## 🌟 RANDOM VARIABLES & DISTRIBUTIONS

### 🎯 What is a Random Variable?
A variable whose value depends on outcomes of a random experiment. Usually denoted by $X, Y, Z$.
1️⃣ **Discrete Random Variable:** Takes finite/countable values. (Examples: Dice number, Number of heads).
2️⃣ **Continuous Random Variable:** Takes infinite values over an interval. (Examples: Height, Weight, Time).

### 📈 Distribution Functions
**PMF (Probability Mass Function):** Used for discrete random variables.
$$f(x) = P(X=x)$$
Properties: ✅ $f(x) \ge 0$ ✅ $\sum f(x) = 1$

**PDF (Probability Density Function):** Used for continuous variables.
Properties: ✅ $f(x) \ge 0$ and $\int_{-\infty}^{\infty} f(x) dx = 1$

**CDF (Cumulative Distribution Function):**
$$F(x) = P(X \le x)$$
*Important Relation:* For a continuous variable: $F(x) = \int_{-\infty}^{x} f(t) dt$ and $f(x) = \frac{d}{dx}F(x)$

---

## ⭐ EXPECTATION, VARIANCE & STANDARD DEVIATION

**Expectation / Mean ($E(X)$):** Average value of a random variable.
*For discrete:* $$E(X) = \sum xf(x)$$
*For continuous:* $$E(X) = \int xf(x) dx$$

**Variance ($Var(X)$):** Measures the spread of data.
*Formula:* $$Var(X) = E(X^2) - [E(X)]^2$$

**Standard Deviation ($\sigma$):**
*Formula:* $$\sigma = \sqrt{Var(X)}$$

**Important Properties:**
🔹 Variance of Constant: $Var(c) = 0$
🔹 Variance Scaling: $Var(aX+b) = a^2Var(X)$

---

## 📝 FULLY SOLVED CO1 NUMERICALS 🔥

### 🎲 Basic Probability & Independent Events

**1. Dice Total of 7**
* **Question:** Two dice are thrown simultaneously. Find the probability of getting a total score of 7.
* **Solution:** Since 2 dice are used, the sample space has 36 possible outcomes.
The favorable outcomes that sum to 7 are (1,6), (2,5), (3,4), (4,3), (5,2), and (6,1).
The required probability is 6/36 = 1/6.

**2. Seating Arrangements**
* **Question:** 6 boys and 6 girls sit in a row randomly. Find the probability that: (i) all 6 girls sit together, and (ii) boys and girls sit alternately.
* **Solution (i):** Consider the 6 girls together as 1 object. This gives 7 objects to arrange in 7! ways. The 6 girls can arrange themselves internally in 6! ways. Total ways = 12!.
Probability is $\frac{7! \times 6!}{12!} = \mathbf{\frac{1}{132}}$.
* **Solution (ii):** For alternating seats, there are 2 patterns (BGBG... or GBGB...). The boys can be arranged in 6! ways and the girls in 6! ways.
Probability is $\frac{2 \times 6! \times 6!}{12!} = \mathbf{\frac{1}{462}}$.

**3. Math Problem Solved by Students**
* **Question:** A math problem is given to 3 students. Their chances of solving it are 1/2, 1/3, and 1/4. Find the probability that the problem is solved.
* **Solution:** The probability the problem is solved equals 1 minus the probability that none of them solve it.
Probability none succeed = $(1 - 1/2) \times (1 - 1/3) \times (1 - 1/4) = 1/2 \times 2/3 \times 3/4 = 1/4$.
Probability solved = $1 - 1/4 = \mathbf{\frac{3}{4}}$.

### 🔥 Conditional Probability & Bayes' Theorem

**4. The Two Bags Problem**
* **Question:** Bag 1 contains 6 Black balls, and Bag 2 contains 4 Black and 3 Black balls (as written in notes). 1 ball is drawn at random and found to be black. Find the probability it was drawn from Bag 1.
* **Solution:** Let $E_1$ be the event of choosing Bag 1 and $E_2$ be Bag 2. The probability of choosing either is $P(E_1) = P(E_2) = 1/2$.
Probability of drawing Black from Bag 1: $P(A|E_1) = 6/10$.
Probability of drawing Black from Bag 2: $P(A|E_2) = 3/7$.
Using Bayes' Theorem:
$$P(E_1|A) = \frac{P(A|E_1) \times P(E_1)}{P(A|E_1) \times P(E_1) + P(A|E_2) \times P(E_2)}$$

**5. The Three Urns Problem**
* **Question:** Urn I contains 1 White, 2 Black, 3 Red balls. Urn II contains 2 White, 1 Black, 1 Red. Urn III contains 4 White, 5 Black, 3 Red. One urn is chosen at random and 2 balls are drawn. They are White and Red. Find the probability it is Urn II.
* **Solution:** The probability of picking any urn is $P(E_1) = P(E_2) = P(E_3) = 1/3$.
Probability of drawing White and Red from Urn I: $P(A|E_1) = \frac{1C_1 \times 3C_1}{6C_2}$.
Probability of drawing White and Red from Urn II: $P(A|E_2) = \frac{2C_1 \times 1C_1}{4C_2}$.
Probability of drawing White and Red from Urn III: $P(A|E_3) = \frac{4C_1 \times 3C_1}{12C_2}$.
Applying Bayes' Theorem yields a final probability of 58/118.

### 📈 Probability Density Functions (Continuous)

**6. Continuous PDF Evaluation**
* **Question:** If a random variable $X$ has a PDF $f(x) = 1/4$ on the interval $[-2, 2]$, obtain $P(2x+3 > 5)$.
* **Solution:** Simplify the inequality: $2x+3 > 5$ implies $x > 1$.
$$P(x > 1) = \int_{1}^{2} \frac{1}{4} dx = \mathbf{\frac{1}{4}}$$

**7. Finding PDF Constants & CDF**
* **Question:** A continuous random variable has the PDF $y = K(x-1)(2-x)$ for $1 \le x \le 2$. Determine $K$, the CDF, and $P(5/4 \le x \le 3/2)$.
* **Solution:** To find $K$, integrate the PDF over the interval and set it equal to 1:
$$\int_{1}^{2} K(3x - x^2 - 2) dx = 1 \implies \mathbf{K = 6}$$
The CDF $F(x)$ is found by integrating the PDF from 1 to $x$:
$$F(x) = \mathbf{5 - 12x - 9x^2 - 2x^3}$$
*(as written in notes)*
$P(5/4 \le x \le 3/2) = F(3/2) - F(5/4) = \mathbf{\frac{11}{32}}$.

### ⭐ Expectation, Variance & PMF (Discrete)

**8. Finding 'c', Expectation, and Variance**
* **Question:** A PMF is given as $f(0) = c$, $f(1) = 2c - 3c^2$, and $f(2) = 4c - 1$. Find $c$, the conditional probability $P(x \ge 1 | x < 2)$, and the Expectation and Variance of $X$.
* **Solution:** The sum of probabilities must equal 1: $c + 2c - 3c^2 + 4c - 1 = 1$.
This simplifies to $3c^2 - 7c + 2 = 0$, giving $c = 2$ or $c = 1/3$. Since probabilities cannot exceed 1, $\mathbf{c = 1/3}$.
$P(x \ge 1 | x < 2) = \frac{P(x=1)}{P(x=0) + P(x=1)} = \frac{1/3}{1/3 + 1/3} = \mathbf{\frac{1}{2}}$.
Expectation $E(X) = 0(1/3) + 1(1/3) + 2(1/3) = \mathbf{1}$.
To find Variance, first find $E(X^2) = 0^2(1/3) + 1^2(1/3) + 2^2(1/3) = \frac{5}{3}$.
Variance $= E(X^2) - [E(X)]^2 = 5/3 - 1^2 = \mathbf{\frac{2}{3}}$.