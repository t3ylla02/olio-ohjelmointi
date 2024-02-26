#include <QApplication>
#include <QWidget>
#include <QGridLayout>
#include <QLineEdit>
#include <QPushButton>
#include <QLabel>

class Calculator : public QWidget {
    Q_OBJECT

public:
    Calculator(QWidget *parent = 0) : QWidget(parent) {
        // Luo käyttöliittymän komponentit
        num1 = new QLineEdit(this);
        num2 = new QLineEdit(this);
        result = new QLineEdit(this);
        result->setReadOnly(true);

        // Numeronappulat
        for (int i = 0; i <= 9; ++i) {
            QString buttonText = QString::number(i);
            QPushButton *button = new QPushButton(buttonText, this);
            connect(button, SIGNAL(clicked()), this, SLOT(onNumberClicked()));
            numberButtons.append(button);
        }

        // Operaationappulat
        add = new QPushButton("+", this);
        sub = new QPushButton("-", this);
        mul = new QPushButton("*", this);
        div = new QPushButton("/", this);

        // Clear ja Enter nappulat
        clear = new QPushButton("C", this);
        enter = new QPushButton("Enter", this);

        // Aseta käyttöliittymän layout
        QGridLayout *layout = new QGridLayout(this);
        layout->addWidget(num1, 0, 0, 1, 3);
        layout->addWidget(num2, 1, 0, 1, 3);
        layout->addWidget(result, 2, 0, 1, 3);

        int row = 3;
        for (int i = 1; i <= 9; ++i) {
            layout->addWidget(numberButtons[i], row, (i - 1) % 3);
            if (i % 3 == 0) {
                ++row;
            }
        }

        layout->addWidget(numberButtons[0], 6, 1);

        layout->addWidget(add, 3, 3);
        layout->addWidget(sub, 4, 3);
        layout->addWidget(mul, 5, 3);
        layout->addWidget(div, 6, 3);

        layout->addWidget(clear, 7, 0, 1, 2);
        layout->addWidget(enter, 7, 2, 1, 2);

        // Yhdistä nappulat operaatio-funktioihin
        connect(add, SIGNAL(clicked()), this, SLOT(onAddClicked()));
        connect(sub, SIGNAL(clicked()), this, SLOT(onSubClicked()));
        connect(mul, SIGNAL(clicked()), this, SLOT(onMulClicked()));
        connect(div, SIGNAL(clicked()), this, SLOT(onDivClicked()));
        connect(clear, SIGNAL(clicked()), this, SLOT(onClearClicked()));
        connect(enter, SIGNAL(clicked()), this, SLOT(onEnterClicked()));
    }

private slots:
    void onNumberClicked() {
        QPushButton *button = qobject_cast<QPushButton *>(sender());
        if (button) {
            QLineEdit *currentLineEdit = (currentLineEdit == num1) ? num1 : num2;
            currentLineEdit->setText(currentLineEdit->text() + button->text());
        }
    }

    void onAddClicked() {
        performOperation("+");
    }

    void onSubClicked() {
        performOperation("-");
    }

    void onMulClicked() {
        performOperation("*");
    }

    void onDivClicked() {
        performOperation("/");
    }

    void onClearClicked() {
        num1->clear();
        num2->clear();
        result->clear();
    }

    void onEnterClicked() {
        performOperation("");
    }

private:
    void performOperation(const QString &operation) {
        QString operand1Str = num1->text();
        QString operand2Str = num2->text();

        if (operand1Str.isEmpty() || operand2Str.isEmpty()) {
            result->setText("Invalid input");
            return;
        }

        double operand1 = operand1Str.toDouble();
        double operand2 = operand2Str.toDouble();
        double resultValue;

        if (operation == "+") {
            resultValue = operand1 + operand2;
        } else if (operation == "-") {
            resultValue = operand1 - operand2;
        } else if (operation == "*") {
            resultValue = operand1 * operand2;
        } else if (operation == "/") {
            if (operand2 != 0) {
                resultValue = operand1 / operand2;
            } else {
                result->setText("Division by zero");
                return;
            }
        } else {  // Enter button pressed
            result->setText("Invalid operation");
            return;
        }

        result->setText(QString::number(resultValue));
    }

    QLineEdit *num1;
    QLineEdit *num2;
    QLineEdit *result;
    QPushButton *add;
    QPushButton *sub;
    QPushButton *mul;
    QPushButton *div;
    QPushButton *clear;
    QPushButton *enter;
    QList<QPushButton *> numberButtons;
};

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    Calculator calculator;
    calculator.show();

    return app.exec();
}
