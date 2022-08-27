from Initialize import QuestionClass

question_to_ask = [
    "Which of this is not a programming language?\n(a) Javascript\n(b) Python\n(c) Cobra\n(d) Ruby\n\n> ",
    "Which of this is not a track in programing?\n(a) Frontend\n(b) Backend\n(c) Cloud\n(d) Middle-end\n\n> ",
    "Which of this frameworks is used for backend development?\n(a) Node.js\n(b) React.js\n(c) Vue.js\n(d) Angular.js\n\n> ",
    "AWS is related to which track?\n(a) Backend\n(b) Cloud\n(c) Frontend\n(d) UI/UX\n\n> ",
    "HTML is used in which track?\n(a) Cloud\n(b) Backend\n(c) Frontend\n(d) Cloud\n\n> "
]

questions = [
    QuestionClass(question_to_ask[0], "c"),
    QuestionClass(question_to_ask[1], "d"),
    QuestionClass(question_to_ask[2], "a"),
    QuestionClass(question_to_ask[3], "b"),
    QuestionClass(question_to_ask[4], "c"),
]


def run_quiz():
    score = 0 
    for question in questions:
        user_answer = input(question.ask)
        if user_answer == question.answer:
            score += 1

    print("You got " + str(score) + "/" + str(len(questions)) + " correctly")


run_quiz()
