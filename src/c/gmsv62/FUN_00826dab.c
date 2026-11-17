/* FUN_00826dab - 0x00826dab in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00826dab(void)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined1 *extraout_ECX;
  undefined1 *extraout_ECX_00;
  undefined1 *extraout_ECX_01;
  int unaff_EBP;
  undefined1 *puStack_218;
  int iStack_214;
  int iStack_20c;
  int *piStack_208;
  undefined *puStack_204;
  int *piStack_200;
  undefined4 uStack_1fc;
  undefined4 *puStack_1f8;
  int iStack_1f4;
  
  FUN_00879bb8();
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xfffffe10;
  iStack_1f4 = 0x6c1;
  puStack_1f8 = (undefined4 *)(unaff_EBP + -0x14);
  uStack_1fc = 0x826dd6;
  puVar1 = (undefined4 *)FUN_00679d86();
  uStack_1fc = *puVar1;
  iStack_1f4 = 0;
  puStack_1f8 = &DAT_0097c1a8;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  piStack_200 = (int *)0x826de9;
  FUN_00829d96();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    iStack_1f4 = *(int *)(unaff_EBP + -0x14) + -0xc;
    puStack_1f8 = (undefined4 *)0x826e00;
    FUN_00403384();
  }
  if (DAT_0097c1a8 == (int *)0x0) {
    iStack_1f4 = 0x80004003;
    puStack_1f8 = (undefined4 *)0x826e13;
    FUN_00878dfb();
  }
  piVar2 = DAT_0097c1a8;
  iStack_1f4 = 0xffffffff;
  puStack_1f8 = (undefined4 *)0xffffffff;
  uStack_1fc = 0x11;
  piStack_200 = DAT_0097c1a8;
  puStack_204 = (undefined *)0x826e25;
  iStack_20c = (**(code **)(*DAT_0097c1a8 + 0x14))();
  if (iStack_20c < 0) {
    puStack_204 = &DAT_00963cf8;
    piStack_208 = piVar2;
    FUN_00878e09();
  }
  puStack_204 = (undefined *)0x6c3;
  piStack_208 = (int *)(unaff_EBP + -0x14);
  iStack_20c = 0x826e45;
  piVar2 = (int *)FUN_00679d86();
  iStack_20c = *piVar2;
  puStack_204 = (undefined *)0x0;
  piStack_208 = &DAT_0097c1a0;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  FUN_00829dfb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    puStack_204 = (undefined *)(*(int *)(unaff_EBP + -0x14) + -0xc);
    piStack_208 = (int *)0x826e70;
    FUN_00403384();
  }
  *(int *)(unaff_EBP + -0x14) = DAT_0097c1a0;
  piStack_208 = (int *)(unaff_EBP + -0x14);
  puStack_204 = (undefined *)0x1;
  iStack_20c = 0x826e84;
  (*DAT_0097bc40)();
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  puStack_204 = (undefined *)0x6c4;
  piStack_208 = (int *)(unaff_EBP + -0x14);
  *(undefined4 *)(unaff_EBP + -4) = 2;
  iStack_20c = 0x826ea0;
  piVar2 = (int *)FUN_00679d86();
  iStack_20c = *piVar2;
  puStack_204 = (undefined *)0x0;
  piStack_208 = (int *)(unaff_EBP + -0x1c);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00829e60();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    puStack_204 = (undefined *)(*(int *)(unaff_EBP + -0x14) + -0xc);
    piStack_208 = (int *)0x826ec8;
    FUN_00403384();
  }
  puStack_204 = (undefined *)0x104;
  piStack_208 = (int *)(unaff_EBP + -0x1f0);
  iStack_20c = 0;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  (*DAT_0097b384)();
  iStack_214 = 0x826eef;
  FUN_008280b0();
  iStack_214 = 0x826efc;
  FUN_008280f6();
  iStack_214 = unaff_EBP + -0x1f0;
  *(undefined1 **)(unaff_EBP + -0x28) = &stack0xfffffdf0;
  puStack_218 = (undefined1 *)0x826f0f;
  FUN_00432cfc();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_214 = 0x826f1b;
  FUN_00829380();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iStack_214 = 0x826f26;
  FUN_00827589();
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  iStack_214 = unaff_EBP + -0x24;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  puStack_218 = (undefined1 *)0x826f3d;
  puVar1 = (undefined4 *)FUN_00679d86();
  puStack_218 = (undefined1 *)*puVar1;
  iStack_214 = unaff_EBP + -0x2c;
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_00829ec5();
  *(undefined1 *)(unaff_EBP + -4) = 6;
  puVar3 = extraout_ECX;
  if (*(int *)(unaff_EBP + -0x24) != 0) {
    puVar3 = (undefined1 *)(*(int *)(unaff_EBP + -0x24) + -0xc);
    iStack_214 = 0x826f65;
    FUN_00403384();
  }
  iStack_214 = 0;
  *(undefined1 ***)(unaff_EBP + -0x28) = &puStack_218;
  puStack_218 = puVar3;
  FUN_004033a1(u_Base_wz_0096c680);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_00829380();
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00559498(unaff_EBP + -0xdc);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  puStack_218 = (undefined1 *)0x826fa1;
  iVar4 = FUN_004032b4();
  *(int *)(unaff_EBP + -100) = iVar4;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  if (iVar4 != 0) {
    iStack_214 = 0x826fb7;
    iVar4 = FUN_0082b349();
    if ((iVar4 < 0) && (iVar4 != -0x7fffbffe)) {
      iStack_214 = 0x826fc8;
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  iStack_214 = 0x826fd8;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    iStack_214 = 0x826fe3;
    FUN_00878dfb();
  }
  FUN_0087a1b0();
  *(int **)(unaff_EBP + -0x28) = &iStack_214;
  puStack_218 = (undefined1 *)0x826ffb;
  FUN_0044cba3();
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  puStack_218 = (undefined1 *)&iStack_20c;
  uVar5 = FUN_00412335(0x3e);
  *(undefined1 ***)(unaff_EBP + -0x40) = &puStack_218;
  FUN_004033a1(uVar5);
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  FUN_008293a6();
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  FUN_008275dd();
  iStack_214 = 0x827035;
  iStack_214 = FUN_008293a3();
  *(undefined1 ***)(unaff_EBP + -0x28) = &puStack_218;
  puStack_218 = extraout_ECX_00;
  FUN_00448a17(&DAT_009640ac);
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  FUN_00559a18();
  FUN_005593dc();
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  FUN_0082752f();
  if (DAT_0097c1a0 == 0) {
    iStack_214 = 0x827073;
    FUN_00878dfb();
  }
  iStack_214 = 0x827082;
  FUN_00559523();
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  iStack_214 = 0x82708f;
  FUN_004035f5();
  FUN_004027b3();
  iStack_214 = 0x8270a4;
  VariantInit((VARIANTARG *)(unaff_EBP + -0xbc));
  *(char **)(unaff_EBP + -0xa8) = s_Character_0096c674;
  *(undefined **)(unaff_EBP + -0xa4) = &DAT_0096c670;
  *(char **)(unaff_EBP + -0xa0) = s_Skill_0096c668;
  *(char **)(unaff_EBP + -0x9c) = s_Reactor_0096c660;
  *(undefined ***)(unaff_EBP + -0x98) = &PTR_LAB_0096c65c;
  *(undefined **)(unaff_EBP + -0x94) = &DAT_0096c658;
  *(char **)(unaff_EBP + -0x90) = s_Quest_0096c650;
  *(undefined **)(unaff_EBP + -0x8c) = &DAT_0096c648;
  *(char **)(unaff_EBP + -0x88) = s_Effect_0096c640;
  *(char **)(unaff_EBP + -0x84) = s_String_0096c638;
  *(undefined ***)(unaff_EBP + -0x80) = &PTR_LAB_0096c634;
  *(char **)(unaff_EBP + -0x7c) = s_Morph_0096c62c;
  *(char **)(unaff_EBP + -0x78) = s_TamingMob_0096c620;
  *(char **)(unaff_EBP + -0x74) = s_Sound_0096c618;
  *(undefined **)(unaff_EBP + -0x70) = &DAT_0096c614;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  while (*(int *)(unaff_EBP + -0x18) < 0xf) {
    *(undefined4 *)(unaff_EBP + -0x34) = 0;
    iStack_214 = unaff_EBP + -0x54;
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    puStack_218 = (undefined1 *)0x82714f;
    puVar1 = (undefined4 *)FUN_00679d86();
    puStack_218 = (undefined1 *)*puVar1;
    iStack_214 = unaff_EBP + -0x34;
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
    FUN_00829ec5();
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    FUN_00402676();
    puVar3 = *(undefined1 **)(unaff_EBP + -0xa8 + *(int *)(unaff_EBP + -0x18) * 4);
    iStack_214 = 0;
    puStack_218 = (undefined1 *)0xffffffff;
    puVar1 = (undefined4 *)FUN_004dbb20(puVar3);
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    puStack_218 = (undefined1 *)0x827194;
    uVar5 = FUN_00627c68();
    puStack_218 = (undefined1 *)*puVar1;
    *(undefined1 *)(unaff_EBP + -4) = 0x16;
    FUN_0041354c(uVar5,u__s_wz_0096c608);
    puStack_218 = (undefined1 *)0x8271af;
    uVar5 = FUN_00411641();
    *(undefined1 ***)(unaff_EBP + -0x44) = &puStack_218;
    FUN_004033a1(uVar5);
    *(undefined1 *)(unaff_EBP + -4) = 0x17;
    FUN_00829380();
    *(undefined1 *)(unaff_EBP + -4) = 0x16;
    FUN_00559498(unaff_EBP + -0xcc);
    *(undefined1 *)(unaff_EBP + -4) = 0x18;
    puStack_218 = (undefined1 *)0x8271e4;
    iVar4 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x58) = iVar4;
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
    if (iVar4 != 0) {
      iStack_214 = 0x8271fa;
      iVar4 = FUN_0082b349();
      if ((iVar4 < 0) && (iVar4 != -0x7fffbffe)) {
        iStack_214 = 0x82720b;
        FUN_00878dfb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x1c;
    iStack_214 = 0x82721b;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      iStack_214 = 0x827226;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x1b;
    FUN_00402676();
    *(undefined1 *)(unaff_EBP + -4) = 0x1a;
    FUN_00402676();
    iStack_214 = 0;
    *(undefined1 ***)(unaff_EBP + -0x44) = &puStack_218;
    FUN_00448a17(puVar3);
    *(undefined1 *)(unaff_EBP + -4) = 0x1d;
    FUN_00559a18();
    FUN_005593dc();
    *(undefined1 *)(unaff_EBP + -4) = 0x1a;
    FUN_00559498(unaff_EBP + -0xec);
    *(undefined1 *)(unaff_EBP + -4) = 0x1e;
    puStack_218 = (undefined1 *)0x827279;
    uVar5 = FUN_004032b4();
    *(undefined4 *)(unaff_EBP + -0x40) = uVar5;
    iStack_214 = 0x82728f;
    iVar4 = FUN_0055cc56();
    if ((iVar4 < 0) && (iVar4 != -0x7fffbffe)) {
      iStack_214 = 0x8272a0;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x1a;
    iStack_214 = 0x8272b0;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      iStack_214 = 0x8272bb;
      FUN_00878dfb();
    }
    FUN_0087a1b0();
    *(int **)(unaff_EBP + -0x44) = &iStack_214;
    puStack_218 = puVar3;
    FUN_00448a17();
    *(undefined1 *)(unaff_EBP + -4) = 0x1f;
    puStack_218 = (undefined1 *)&iStack_20c;
    uVar5 = FUN_00412335(0x3e);
    *(undefined1 ***)(unaff_EBP + -0x48) = &puStack_218;
    FUN_004033a1(uVar5);
    *(undefined1 *)(unaff_EBP + -4) = 0x20;
    FUN_008293a6();
    *(undefined1 *)(unaff_EBP + -4) = 0x1a;
    FUN_008275dd();
    *(undefined4 *)(unaff_EBP + -0x30) = 0;
    iStack_214 = unaff_EBP + -0x28;
    *(undefined1 *)(unaff_EBP + -4) = 0x21;
    puStack_218 = (undefined1 *)0x82731f;
    puVar1 = (undefined4 *)FUN_00679d86();
    puStack_218 = (undefined1 *)*puVar1;
    iStack_214 = unaff_EBP + -0x30;
    *(undefined1 *)(unaff_EBP + -4) = 0x22;
    FUN_00829dfb();
    *(undefined1 *)(unaff_EBP + -4) = 0x21;
    FUN_00402676();
    iStack_214 = 0x827348;
    iStack_214 = FUN_008293a3();
    *(undefined1 ***)(unaff_EBP + -0x48) = &puStack_218;
    FUN_004033a1(&DAT_00965698);
    *(undefined1 *)(unaff_EBP + -4) = 0x23;
    FUN_005593dc();
    *(undefined1 *)(unaff_EBP + -4) = 0x21;
    FUN_0082752f();
    iStack_214 = 0x82737b;
    iStack_214 = FUN_00828d4d();
    *(undefined1 ***)(unaff_EBP + -0x48) = &puStack_218;
    puStack_218 = extraout_ECX_01;
    FUN_004033a1(&DAT_00965698);
    *(undefined1 *)(unaff_EBP + -4) = 0x24;
    FUN_00828d50(*(undefined4 *)(unaff_EBP + -0x18));
    FUN_005593dc();
    *(undefined1 *)(unaff_EBP + -4) = 0x21;
    FUN_0082752f();
    *(undefined1 *)(unaff_EBP + -4) = 0x1a;
    if (*(int **)(unaff_EBP + -0x30) != (int *)0x0) {
      iStack_214 = 0x8273b8;
      (**(code **)(**(int **)(unaff_EBP + -0x30) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    if (*(int **)(unaff_EBP + -0x24) != (int *)0x0) {
      iStack_214 = 0x8273c9;
      (**(code **)(**(int **)(unaff_EBP + -0x24) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    if (*(int **)(unaff_EBP + -0x34) != (int *)0x0) {
      iStack_214 = 0x8273da;
      (**(code **)(**(int **)(unaff_EBP + -0x34) + 8))();
    }
    *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 1;
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  iStack_214 = 0x8273f7;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    iStack_214 = 0x827402;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  if (*(int **)(unaff_EBP + -0x3c) != (int *)0x0) {
    iStack_214 = 0x827413;
    (**(code **)(**(int **)(unaff_EBP + -0x3c) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
    iStack_214 = 0x827424;
    (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (*(int **)(unaff_EBP + -0x2c) != (int *)0x0) {
    iStack_214 = 0x827435;
    (**(code **)(**(int **)(unaff_EBP + -0x2c) + 8))();
    FUN_00827459();
    return;
  }
  *(undefined4 *)(unaff_EBP + -4) = 2;
  if (*(int *)(unaff_EBP + -0x20) < 0) {
    iStack_214 = unaff_EBP + -0x3c;
    puStack_218 = (undefined1 *)0x82747c;
    FUN_00679d22();
    *(undefined1 *)(unaff_EBP + -4) = 0x26;
    iStack_214 = 0x827488;
    uVar6 = (*DAT_0097b444)();
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_00414ebb();
    if ((uVar6 != 0xffffffff) && ((uVar6 & 0x10) != 0)) {
      if (*(int *)(unaff_EBP + -0x20) == -0x7ff8fffb) {
        *(undefined4 *)(unaff_EBP + -0x38) = 0x22000005;
        *(undefined4 *)(unaff_EBP + -0x68) = 0x22000005;
        iStack_214 = unaff_EBP + -0x68;
        *(undefined1 *)(unaff_EBP + -4) = 0x27;
                    /* WARNING: Subroutine does not return */
        puStack_218 = (undefined1 *)0x8274c6;
        __CxxThrowException_8();
      }
      if (*(int *)(unaff_EBP + -0x20) == -0x7ff8ffa9) {
        *(undefined4 *)(unaff_EBP + -0x38) = 0x22000003;
        *(undefined4 *)(unaff_EBP + -0x60) = 0x22000003;
        iStack_214 = unaff_EBP + -0x60;
        *(undefined1 *)(unaff_EBP + -4) = 0x28;
                    /* WARNING: Subroutine does not return */
        puStack_218 = (undefined1 *)0x8274ec;
        __CxxThrowException_8();
      }
      *(undefined4 *)(unaff_EBP + -0x38) = 0x22000004;
      *(undefined4 *)(unaff_EBP + -0x50) = 0x22000004;
      iStack_214 = unaff_EBP + -0x50;
      *(undefined1 *)(unaff_EBP + -4) = 0x29;
                    /* WARNING: Subroutine does not return */
      puStack_218 = (undefined1 *)0x827509;
      __CxxThrowException_8();
    }
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + -0x1c) != (int *)0x0) {
    iStack_214 = 0x82751a;
    (**(code **)(**(int **)(unaff_EBP + -0x1c) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


