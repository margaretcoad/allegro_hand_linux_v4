#include "rDeviceAllegroHandCANDef.h"
#include <BHand/BHand.h>


// STEP
static double stepUp3[] = {
        0, 0, 0, 1,
        0, 0, 0, 0,
        0, 0, 0, 0,
        0.5, 0, 0, 0};
static double stepUp2[] = {
        0, 0, 1, 0,
        0, 0, 0, 0,
        0, 0, 0, 0,
        0.5, 0, 0, 0};
static double stepUp1[] = {
        0, 1, 0, 0,
        0, 0, 0, 0,
        0, 0, 0, 0,
        0.5, 0, 0, 0};
static double stepUp0[] = {
        0.5, 0, 0, 0,
        0, 0, 0, 0,
        0, 0, 0, 0,
        0.5, 0, 0, 0};
static double stepDown[] = {
        0, 0, 0, 0,
        0, 0, 0, 0,
        0, 0, 0, 0,
        0.5, 0, 0, 0};
static double stepUp15[] = {
        0, 0, 0, 0,
        0, 0, 0, 0,
        0, 0, 0, 0,
        0.5, 0, 0, 1};
static double stepUp14[] = {
        0, 0, 0, 0,
        0, 0, 0, 0,
        0, 0, 0, 0,
        0.5, 0, 1, 0};
static double stepUp13[] = {
        0, 0, 0, 0,
        0, 0, 0, 0,
        0, 0, 0, 0,
        0.5, 1, 0, 0};
static double stepUp12[] = {
        0, 0, 0, 0,
        0, 0, 0, 0,
        0, 0, 0, 0,
        1.5, 0, 0, 0};


extern BHand* pBHand;
extern double q_des[MAX_DOF];

static void SetGainsStep()
{
    // This function should be called after the function SetMotionType() is called.
    // Once SetMotionType() function is called, all gains are reset using the default values.
    if (!pBHand) return;
    double kp[] = {
            500, 800, 900, 500,
            500, 800, 900, 500,
            500, 800, 900, 500,
            1000, 700, 600, 600
    };
    double kd[] = {
            25, 50, 55, 40,
            25, 50, 55, 40,
            25, 50, 55, 40,
            50, 50, 50, 40
    };
    pBHand->SetGainsEx(kp, kd);
}

void MotionStepUp3()
{
    for (int i=0; i<16; i++)
        q_des[i] = stepUp3[i];
    if (pBHand) pBHand->SetMotionType(eMotionType_JOINT_PD);
}

void MotionStepUp2()
{
    for (int i=0; i<16; i++)
        q_des[i] = stepUp2[i];
    if (pBHand) pBHand->SetMotionType(eMotionType_JOINT_PD);

}

void MotionStepUp1()
{
    for (int i=0; i<16; i++)
        q_des[i] = stepUp1[i];
    if (pBHand) pBHand->SetMotionType(eMotionType_JOINT_PD);
}

void MotionStepUp0()
{
    for (int i=0; i<16; i++)
        q_des[i] = stepUp0[i];
    if (pBHand) pBHand->SetMotionType(eMotionType_JOINT_PD);
}

void MotionStepDown()
{
    for (int i=0; i<16; i++)
        q_des[i] = stepDown[i];
    if (pBHand) pBHand->SetMotionType(eMotionType_JOINT_PD);
}

void MotionStepUp15()
{
    for (int i=0; i<16; i++)
        q_des[i] = stepUp15[i];
    if (pBHand) pBHand->SetMotionType(eMotionType_JOINT_PD);
}

void MotionStepUp14()
{
    for (int i=0; i<16; i++)
        q_des[i] = stepUp14[i];
    if (pBHand) pBHand->SetMotionType(eMotionType_JOINT_PD);
}

void MotionStepUp13()
{
    for (int i=0; i<16; i++)
        q_des[i] = stepUp13[i];
    if (pBHand) pBHand->SetMotionType(eMotionType_JOINT_PD);
}

void MotionStepUp12()
{
    for (int i=0; i<16; i++)
        q_des[i] = stepUp12[i];
    if (pBHand) pBHand->SetMotionType(eMotionType_JOINT_PD);
}