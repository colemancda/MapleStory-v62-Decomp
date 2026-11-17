/* FUN_005b73c3 - 0x005b73c3 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005b73c3(void)

{
  int iVar1;
  int *extraout_ECX;
  int unaff_EBP;
  undefined1 auStack_44 [4];
  undefined4 uStack_40;
  int *piStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  
  FUN_00879bb8();
  if (extraout_ECX[0x1c2] == 1) {
    iStack_34 = 0;
    uStack_38 = 0;
    piStack_3c = extraout_ECX + 0x1b;
    uStack_40 = 0;
    if (extraout_ECX[0x1c3] == 0) {
      *(undefined1 **)(unaff_EBP + -0x10) = auStack_44;
      FUN_00679d22(auStack_44,0x1df);
      iVar1 = FUN_007db791();
      if (iVar1 != 6) goto LAB_005b751c;
      iStack_34 = 0;
      uStack_38 = 0;
      piStack_3c = (int *)0x6f;
      uStack_40 = 0x5b7428;
      FUN_0060142b();
      iStack_34 = 0x32;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      uStack_38 = 0x5b7435;
      FUN_00457cda();
      iStack_34 = unaff_EBP + -0x20;
      uStack_38 = 0x5b7444;
      FUN_004751b2();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      extraout_ECX[0x1c3] = 1;
    }
    else {
      *(undefined1 **)(unaff_EBP + -0x10) = auStack_44;
      FUN_00679d22(auStack_44,0x1e0);
      iVar1 = FUN_007db791();
      if (iVar1 != 6) goto LAB_005b751c;
      iStack_34 = 0;
      uStack_38 = 0;
      piStack_3c = (int *)0x6f;
      uStack_40 = 0x5b7486;
      FUN_0060142b();
      iStack_34 = 0x33;
      *(undefined4 *)(unaff_EBP + -4) = 1;
      uStack_38 = 0x5b7493;
      FUN_00457cda();
      iStack_34 = unaff_EBP + -0x20;
      uStack_38 = 0x5b74a2;
      FUN_004751b2();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      extraout_ECX[0x1c3] = 0;
    }
  }
  else {
    iStack_34 = 0;
    uStack_38 = 0;
    piStack_3c = extraout_ECX + 0x1b;
    uStack_40 = 0;
    *(undefined1 **)(unaff_EBP + -0x10) = auStack_44;
    FUN_00679d22(auStack_44,0x1e3);
    iVar1 = FUN_007db791();
    if (iVar1 != 6) goto LAB_005b751c;
    iStack_34 = 0;
    uStack_38 = 0;
    piStack_3c = (int *)0x6f;
    uStack_40 = 0x5b74e9;
    FUN_0060142b();
    iStack_34 = 10;
    *(undefined4 *)(unaff_EBP + -4) = 2;
    uStack_38 = 0x5b74f9;
    FUN_00457cda();
    iStack_34 = unaff_EBP + -0x30;
    uStack_38 = 0x5b7508;
    FUN_004751b2();
    iStack_34 = 2;
    uStack_38 = 0x5b7510;
    (**(code **)(*extraout_ECX + 0x34))();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  }
  iStack_34 = 0x5b751c;
  FUN_0045ebca();
LAB_005b751c:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


