#ifndef CUSTOMSTYLE_H
#define CUSTOMSTYLE_H

#include <QProxyStyle>

class CustomStyle : public QProxyStyle
{
    Q_OBJECT
public:
    explicit CustomStyle (const QString& styleName, QObject* parent = nullptr);

    void drawPrimitive(QStyle::PrimitiveElement element, const QStyleOption* option, QPainter* painter, const QWidget* widget) const override;
    void drawControl(QStyle::ControlElement element, const QStyleOption* option, QPainter* painter, const QWidget* widget = nullptr) const override;
    void drawComplexControl(QStyle::ComplexControl control, const QStyleOptionComplex* option, QPainter* painter, const QWidget* widget) const override;
    void polish(QPalette &pal) override;
    void polish(QWidget* widget) override;
};

#endif // CUSTOMSTYLE_H
