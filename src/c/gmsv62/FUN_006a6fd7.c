/* FUN_006a6fd7 - 0x006a6fd7 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006a6fd7(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int extraout_ECX;
  int extraout_ECX_00;
  int unaff_EBP;
  undefined4 uVar5;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int *piStack_40;
  
  FUN_00879bb8();
  piStack_40 = *(int **)(unaff_EBP + 8);
  iStack_44 = 0x6a6ff1;
  FUN_0081622a();
  piStack_40 = (int *)(unaff_EBP + 8);
  iStack_44 = 0x6a6ffc;
  FUN_00448dc6();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  piStack_40 = (int *)0x72b;
  iStack_44 = unaff_EBP + -0x14;
  iStack_48 = 0x6a7013;
  puVar1 = (undefined4 *)FUN_00679d22();
  piStack_40 = (int *)*puVar1;
  iStack_44 = *(undefined4 *)(extraout_ECX + 0x74);
  iStack_48 = unaff_EBP + -0x10;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_4c = 0x6a702b;
  FUN_00550bc4();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    piStack_40 = (int *)(*(int *)(unaff_EBP + -0x14) + -0xc);
    iStack_44 = 0x6a703f;
    FUN_00434e38();
  }
  piStack_40 = &DAT_00980690;
  iStack_44 = 0x6a704e;
  FUN_00403191();
  piStack_40 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iStack_44 = 0x6a705b;
  FUN_00403191();
  piStack_40 = (int *)(unaff_EBP + -0x3c);
  iStack_44 = unaff_EBP + -0x2c;
  iStack_4c = unaff_EBP + -0x18;
  iStack_48 = 0x10;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 6;
  iStack_48 = 0x6a707f;
  iStack_48 = FUN_00449749();
  iStack_4c = 0x6a7088;
  uVar2 = FUN_00449713();
  *(int **)(unaff_EBP + -0x1c) = &iStack_4c;
  FUN_00448a17(uVar2);
  uVar5 = 0x47;
  uVar2 = 0x28;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_004115d9(0x28,0x47);
  FUN_00448e3a(uVar2,uVar5);
  piStack_40 = (int *)0x6a70b3;
  FUN_004497b5();
  piStack_40 = (int *)(unaff_EBP + -0x2c);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iStack_44 = 0x6a70c0;
  piStack_40 = (int *)FUN_00402bc3();
  if ((int)piStack_40 < 0) {
    iStack_44 = 0x6a70cb;
    FUN_00878dfb();
  }
  piStack_40 = (int *)(unaff_EBP + -0x3c);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_44 = 0x6a70d8;
  piStack_40 = (int *)FUN_00402bc3();
  if ((int)piStack_40 < 0) {
    iStack_44 = 0x6a70e3;
    FUN_00878dfb();
  }
  piStack_40 = &DAT_00980690;
  iStack_44 = 0x6a70ec;
  FUN_00403191();
  piStack_40 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  iStack_44 = 0x6a70f9;
  FUN_00403191();
  piStack_40 = (int *)(unaff_EBP + -0x2c);
  iStack_44 = unaff_EBP + -0x3c;
  iStack_4c = unaff_EBP + -0x18;
  iStack_48 = 0xf;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 10;
  iStack_48 = 0x6a711d;
  iStack_48 = FUN_00449749();
  iStack_4c = 0x6a7126;
  uVar2 = FUN_00449713();
  *(int **)(unaff_EBP + -0x1c) = &iStack_4c;
  iStack_4c = extraout_ECX_00;
  FUN_00448a17(uVar2);
  uVar5 = 0x46;
  uVar2 = 0x27;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  FUN_004115d9(0x27,0x46);
  FUN_00448e3a(uVar2,uVar5);
  piStack_40 = *(int **)(unaff_EBP + -0x18);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  if (piStack_40 != (int *)0x0) {
    iStack_44 = 0x6a715a;
    (**(code **)(*piStack_40 + 8))();
  }
  piStack_40 = (int *)(unaff_EBP + -0x3c);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  iStack_44 = 0x6a7167;
  piStack_40 = (int *)FUN_00402bc3();
  if ((int)piStack_40 < 0) {
    iStack_44 = 0x6a7172;
    FUN_00878dfb();
  }
  piStack_40 = (int *)(unaff_EBP + -0x2c);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_44 = 0x6a717f;
  piStack_40 = (int *)FUN_00402bc3();
  if ((int)piStack_40 < 0) {
    iStack_44 = 0x6a718a;
    FUN_00878dfb();
  }
  if (*(int *)(extraout_ECX + 0xb4) == 0) {
    piStack_40 = (int *)0x3;
    iStack_44 = 0xff;
    iStack_48 = 0x6a71a3;
    FUN_004031b7();
    iVar3 = *(int *)(*(int *)(extraout_ECX + 0x7c) + 0x48);
    piVar4 = *(int **)(unaff_EBP + 8);
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    uVar2 = *(undefined4 *)(extraout_ECX + 0x80 + (uint)(iVar3 != 0) * 4);
    if (piVar4 == (int *)0x0) {
      piStack_40 = (int *)0x80004003;
      iStack_44 = 0x6a71cc;
      FUN_00878dfb();
      piVar4 = *(int **)(unaff_EBP + 8);
    }
    iVar3 = *piVar4;
    iStack_4c = *(int *)(unaff_EBP + -0x3c);
    iStack_48 = *(int *)(unaff_EBP + -0x38);
    iStack_44 = *(undefined4 *)(unaff_EBP + -0x34);
    *(int **)(unaff_EBP + -0x18) = piVar4;
    piStack_40 = *(int **)(unaff_EBP + -0x30);
    iVar3 = (**(code **)(iVar3 + 0x80))(piVar4,0x14,0x41,uVar2);
    if (iVar3 < 0) {
      piStack_40 = (int *)&DAT_00963cc8;
      iStack_44 = *(undefined4 *)(unaff_EBP + -0x18);
      iStack_4c = 0x6a71fe;
      iStack_48 = iVar3;
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 3;
  }
  else {
    if (*(int *)(extraout_ECX + 0xb4) != 2) goto LAB_006a7280;
    piStack_40 = (int *)0x3;
    iStack_44 = 0xff;
    iStack_48 = 0x6a721b;
    FUN_004031b7();
    piVar4 = *(int **)(unaff_EBP + 8);
    uVar2 = *(undefined4 *)(extraout_ECX + 0x84);
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    if (piVar4 == (int *)0x0) {
      piStack_40 = (int *)0x80004003;
      iStack_44 = 0x6a7236;
      FUN_00878dfb();
      piVar4 = *(int **)(unaff_EBP + 8);
    }
    iVar3 = *piVar4;
    iStack_4c = *(int *)(unaff_EBP + -0x3c);
    iStack_48 = *(int *)(unaff_EBP + -0x38);
    iStack_44 = *(undefined4 *)(unaff_EBP + -0x34);
    *(int **)(unaff_EBP + -0x18) = piVar4;
    piStack_40 = *(int **)(unaff_EBP + -0x30);
    iVar3 = (**(code **)(iVar3 + 0x80))(piVar4,0x14,0x41,uVar2);
    if (iVar3 < 0) {
      piStack_40 = (int *)&DAT_00963cc8;
      iStack_44 = *(undefined4 *)(unaff_EBP + -0x18);
      iStack_4c = 0x6a7268;
      iStack_48 = iVar3;
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 3;
  }
  piStack_40 = (int *)(unaff_EBP + -0x3c);
  iStack_44 = 0x6a7275;
  piStack_40 = (int *)FUN_00402bc3();
  if ((int)piStack_40 < 0) {
    iStack_44 = 0x6a7280;
    FUN_00878dfb();
  }
LAB_006a7280:
  *(undefined1 *)(unaff_EBP + -4) = 0;
  piStack_40 = (int *)0x6a728c;
  FUN_00414ebb();
  piStack_40 = *(int **)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piStack_40 != (int *)0x0) {
    iStack_44 = 0x6a729d;
    (**(code **)(*piStack_40 + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


