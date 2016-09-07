#ifndef CD74HC166_H_
#define CD74HC166_H_

#define HC166_PORT  GPIOC

// 74HC166��������
#define HC166_IN    GPIO_PIN_7

// 74HC166���ݱ���
#define HC166_SH    GPIO_PIN_1
// 74HC166ʱ��
#define HC166_CLK   GPIO_PIN_2

// ����ȡ��  0����ֹȡ��  1��ʹ��ȡ��
#define INPUT_REV   0


//******************************************************************************
//������  ��HC166_Init
//������������ʼ����ת��оƬCD74HC166�Ľӿ�
//����    ����
//���    ����
//����ֵ  ����
//******************************************************************************
extern void HC166_Init(void);


//******************************************************************************
//������  ��HC166_Read
//������������CD74HC166��ȡ����
//����    ��pdata   ���ݴ�ŵĵ�ַ
//          bits    ��ȡ���ݵ�λ��
//���    ����
//����ֵ  ����
//******************************************************************************
extern void HC166_Read(u8 *pdata, u8 bits);

#endif