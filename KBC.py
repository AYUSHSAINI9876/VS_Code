import random

# Sample questions and options
questions = [
    {
        "question": "What is the capital of France?",
        "options": ["A. London", "B. Paris", "C. Berlin", "D. Rome"],
        "correct_answer": "B"
    },
    {
        "question": "Which planet is known as the Red Planet?",
        "options": ["A. Mars", "B. Venus", "C. Jupiter", "D. Saturn"],
        "correct_answer": "A"
    },
    {
        "question": "Who is the author of 'To Kill a Mockingbird'?",
        "options": ["A. J.K. Rowling", "B. Harper Lee", "C. George Orwell", "D. Ernest Hemingway"],
        "correct_answer": "B"
    },
    # Add more questions as needed
]

# Lifelines
lifelines = ["50:50", "Phone a Friend", "Ask the Audience"]

def display_question(question):
    print(question["question"])
    for option in question["options"]:
        print(option)
    print()

def kbc_quiz():
    score = 0

    for i, question in enumerate(questions, 1):
        print(f"Question {i}:")
        display_question(question)

        # Simulate user input (you can replace this with actual input logic)
        user_answer = input("Your answer: ").upper()

        # Check if the answer is correct
        if user_answer == question["correct_answer"]:
            print("Correct!\n")
            score += 1
        else:
            print(f"Sorry, the correct answer is {question['correct_answer']}\n")

        # Display lifelines after the first two questions
        if i == 2:
            print("Lifelines:")
            for lifeline in lifelines:
                print(lifeline)

            # Simulate user choosing a lifeline (you can replace this with actual input logic)
            chosen_lifeline = input("Choose a lifeline (or enter to continue): ")
            if chosen_lifeline:
                print(f"You chose the lifeline: {chosen_lifeline}\n")

        # Display the final score
        if i == len(questions):
            print(f"Your final score: {score}/{len(questions)}")

if __name__ == "__main__":
    print("Welcome to KBC - Kaun Banega Crorepati!")
    print("Answer the following questions to win the quiz.\n")

    kbc_quiz()
