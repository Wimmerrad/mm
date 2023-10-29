#include "global.h"

#pragma GLOBAL_ASM("asm/non_matchings/code/z_kankyo/func_800F5090.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/z_kankyo/Environment_ZBufValToFixedPoint.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/z_kankyo/Environment_Init.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/z_kankyo/func_800F5954.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/z_kankyo/Environment_LerpWeight.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/z_kankyo/func_800F5B10.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/z_kankyo/Environment_UpdateSkybox.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/z_kankyo/func_800F6834.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/z_kankyo/func_800F694C.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/z_kankyo/func_800F6A04.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/z_kankyo/func_800F6A40.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/z_kankyo/func_800F6AB8.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/z_kankyo/func_800F6B44.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/z_kankyo/func_800F6CEC.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/z_kankyo/func_800F6EA4.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/z_kankyo/Kankyo_IsSceneUpsideDown.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/z_kankyo/func_800F6FF8.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/z_kankyo/func_800F8554.s")

void func_800F88C4(u16 weekEventFlag);
#pragma GLOBAL_ASM("asm/non_matchings/code/z_kankyo/func_800F88C4.s")

void func_800F8970(void) {
    if (!CHECK_WEEKEVENTREG(WEEKEVENTREG_27_40) && (SCHEDULE_TIME_NOW >= SCHEDULE_TIME(9, 31))) {
        SET_WEEKEVENTREG(WEEKEVENTREG_27_40);
        func_800F88C4(WEEKEVENTREG_DEPOSITED_LETTER_TO_KAFEI_SOUTH_UPPER_CLOCKTOWN);
    }

    if (!CHECK_WEEKEVENTREG(WEEKEVENTREG_27_80) && (SCHEDULE_TIME_NOW >= SCHEDULE_TIME(10, 3))) {
        SET_WEEKEVENTREG(WEEKEVENTREG_27_80);
        func_800F88C4(WEEKEVENTREG_DEPOSITED_LETTER_TO_KAFEI_NORTH_CLOCKTOWN);
    }

    if (!CHECK_WEEKEVENTREG(WEEKEVENTREG_28_01) && (SCHEDULE_TIME_NOW >= SCHEDULE_TIME(10, 35))) {
        SET_WEEKEVENTREG(WEEKEVENTREG_28_01);
        func_800F88C4(WEEKEVENTREG_DEPOSITED_LETTER_TO_KAFEI_EAST_UPPER_CLOCKTOWN);
    }

    if (!CHECK_WEEKEVENTREG(WEEKEVENTREG_28_02) && (SCHEDULE_TIME_NOW >= SCHEDULE_TIME(10, 53))) {
        SET_WEEKEVENTREG(WEEKEVENTREG_28_02);
        func_800F88C4(WEEKEVENTREG_DEPOSITED_LETTER_TO_KAFEI_EAST_LOWER_CLOCKTOWN);
    }

    if (!CHECK_WEEKEVENTREG(WEEKEVENTREG_28_04) && (SCHEDULE_TIME_NOW >= SCHEDULE_TIME(11, 25))) {
        SET_WEEKEVENTREG(WEEKEVENTREG_28_04);
        func_800F88C4(WEEKEVENTREG_DEPOSITED_LETTER_TO_KAFEI_SOUTH_LOWER_CLOCKTOWN);
    }
}

#pragma GLOBAL_ASM("asm/non_matchings/code/z_kankyo/func_800F8A9C.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/z_kankyo/Environment_Update.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/z_kankyo/func_800F8D84.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/z_kankyo/Environment_DrawSunLensFlare.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/z_kankyo/func_800F9824.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/z_kankyo/func_800FA39C.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/z_kankyo/func_800FA3C4.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/z_kankyo/Environment_DrawRain.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/z_kankyo/func_800FAAB4.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/z_kankyo/func_800FAC20.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/z_kankyo/func_800FAF74.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/z_kankyo/func_800FB010.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/z_kankyo/Environment_AddLightningBolts.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/z_kankyo/func_800FB388.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/z_kankyo/func_800FB758.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/z_kankyo/func_800FB9B4.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/z_kankyo/Environment_DrawCustomLensFlare.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/z_kankyo/Kankyo_InitGameOverLights.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/z_kankyo/Kankyo_FadeInGameOverLights.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/z_kankyo/Kankyo_FadeOutGameOverLights.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/z_kankyo/func_800FC3DC.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/z_kankyo/Environment_FillScreen.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/z_kankyo/Environment_DrawSandstorm.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/z_kankyo/func_800FD2B4.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/z_kankyo/func_800FD538.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/z_kankyo/Environment_LerpAmbientColor.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/z_kankyo/Environment_LerpDiffuseColor.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/z_kankyo/Environment_LerpFogColor.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/z_kankyo/Environment_LerpFog.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/z_kankyo/get_days_elapsed.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/z_kankyo/reset_days_elapsed.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/z_kankyo/get_current_day.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/z_kankyo/func_800FD750.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/z_kankyo/func_800FD768.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/z_kankyo/func_800FD78C.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/z_kankyo/func_800FD858.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/z_kankyo/func_800FD928.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/z_kankyo/func_800FD980.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/z_kankyo/func_800FDAF8.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/z_kankyo/func_800FDC94.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/z_kankyo/func_800FE390.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/z_kankyo/func_800FE3E0.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/z_kankyo/Environment_StopTime.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/z_kankyo/Environment_StartTime.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/z_kankyo/Environment_IsTimeStopped.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/z_kankyo/func_800FE4B8.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/z_kankyo/func_800FE590.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/z_kankyo/func_800FE5D0.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/z_kankyo/func_800FE610.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/z_kankyo/func_800FE620.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/z_kankyo/func_800FE658.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/z_kankyo/func_800FE6F8.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/z_kankyo/func_800FE778.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/z_kankyo/func_800FE788.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/z_kankyo/func_800FE798.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/z_kankyo/func_800FE7A8.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/z_kankyo/func_800FE9B4.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/z_kankyo/func_800FEA50.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/z_kankyo/func_800FEAB0.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/z_kankyo/func_800FEAC0.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/z_kankyo/func_800FEAF4.s")
