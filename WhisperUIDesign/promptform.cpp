#include "promptform.h"
#include "ui_promptform.h"

PromptForm::PromptForm(QWidget *parent) :
    m_ui(new Ui::PromptForm)
{
    m_ui->setupUi(this);
    Qt::WindowFlags m_flags = windowFlags();
    setWindowFlags(m_flags | Qt::WindowStaysOnTopHint);
    setWindowFlags(m_flags | Qt::FramelessWindowHint);
    setAttribute(Qt::WA_TranslucentBackground);
    m_parent = parent;
}

PromptForm::~PromptForm()
{
    delete m_ui;
}

void PromptForm::setMinLevel(const int level){
    m_min_level = level;
}

void PromptForm::setPrompt(QString prompt, const int level) {
    if (level < m_min_level || m_parent == NULL || m_parent->isHidden())return;
    m_ui->prompt_label->setText(level_prefix[level] + prompt);
    m_ui->widget->setStyleSheet(level_stylesheet[level]);
    move(QPoint(m_parent->x(), m_parent->y() + m_parent->height() - 18));
    show();
}
