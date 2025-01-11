#include <QApplication>
#include <QPainter>
#include <QWidget>
#include <cmath>

class GraphWidget : public QWidget {
    void paintEvent(QPaintEvent *event) override {
        QPainter painter(this);
        int width = this->width();
        int height = this->height();

        painter.drawLine(width / 2, 0, width / 2, height);
        painter.drawLine(0, height / 2, width, height / 2);

        painter.drawText(width / 2 + 30,  30, "y");
        painter.drawText(width - 30, height / 2 + 20, "x");

        FirstGraph(painter, -M_PI/2, M_PI/2, QColor(Qt::yellow));
        SecondGraph(painter, -M_PI/2, M_PI/2, QColor(Qt::green));

        painter.setPen(Qt::red);
        painter.drawText(10, 20, "Легенда: ");


    }

    void FirstGraph(QPainter &painter, double startX, double endX, QColor color) {
        painter.setPen(Qt::yellow);
        painter.drawText(10, 40, "u(x) = 2x^3 - |cos(x)|");
        painter.setPen(color);
        for (double x = startX; x <= endX; x += 0.001) {
            double y =2*pow(x,3) - abs(cos(x)) ;
            int pixelX = (width() / 2) + x * 100;
            int pixelY = (height() / 2) - y * 100;
            painter.drawPoint(pixelX, pixelY);
        }
    }
    void SecondGraph(QPainter &painter, double startX, double endX, QColor color) {
        painter.setPen(Qt::green);
        painter.drawText(10, 60, "g(x) = ch(x) - |x|");
        painter.setPen(color);
        for (double x = startX; x <= endX; x += 0.001) {
            double y =cosh(x) - abs(x);
            int pixelX = (width() / 2) + x * 100;
            int pixelY = (height() / 2) - y * 100;
            painter.drawPoint(pixelX, pixelY);
        }
    }
};

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    GraphWidget w;
    w.resize(800, 600);
    w.show();
    return app.exec();
}
