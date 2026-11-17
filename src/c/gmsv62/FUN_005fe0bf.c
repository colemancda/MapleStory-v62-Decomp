/* FUN_005fe0bf - 0x005fe0bf in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005fe0bf(void)

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
  if (extraout_ECX[0x2a8] == 1) {
    iStack_34 = 0;
    uStack_38 = 0;
    piStack_3c = extraout_ECX + 0x1b;
    uStack_40 = 0;
    if (extraout_ECX[0x2a9] == 0) {
      *(undefined1 **)(unaff_EBP + -0x10) = auStack_44;
      FUN_00679d22(auStack_44,0x1df);
      iVar1 = FUN_007db791();
      if (iVar1 != 6) goto LAB_005fe218;
      iStack_34 = 0;
      uStack_38 = 0;
      piStack_3c = (int *)0x6f;
      uStack_40 = 0x5fe124;
      FUN_0060142b();
      iStack_34 = 0x32;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      uStack_38 = 0x5fe131;
      FUN_00457cda();
      iStack_34 = unaff_EBP + -0x20;
      uStack_38 = 0x5fe140;
      FUN_004751b2();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      extraout_ECX[0x2a9] = 1;
    }
    else {
      *(undefined1 **)(unaff_EBP + -0x10) = auStack_44;
      FUN_00679d22(auStack_44,0x1e0);
      iVar1 = FUN_007db791();
      if (iVar1 != 6) goto LAB_005fe218;
      iStack_34 = 0;
      uStack_38 = 0;
      piStack_3c = (int *)0x6f;
      uStack_40 = 0x5fe182;
      FUN_0060142b();
      iStack_34 = 0x33;
      *(undefined4 *)(unaff_EBP + -4) = 1;
      uStack_38 = 0x5fe18f;
      FUN_00457cda();
      iStack_34 = unaff_EBP + -0x20;
      uStack_38 = 0x5fe19e;
      FUN_004751b2();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      extraout_ECX[0x2a9] = 0;
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
    if (iVar1 != 6) goto LAB_005fe218;
    iStack_34 = 0;
    uStack_38 = 0;
    piStack_3c = (int *)0x6f;
    uStack_40 = 0x5fe1e5;
    FUN_0060142b();
    iStack_34 = 10;
    *(undefined4 *)(unaff_EBP + -4) = 2;
    uStack_38 = 0x5fe1f5;
    FUN_00457cda();
    iStack_34 = unaff_EBP + -0x30;
    uStack_38 = 0x5fe204;
    FUN_004751b2();
    iStack_34 = 2;
    uStack_38 = 0x5fe20c;
    (**(code **)(*extraout_ECX + 0x34))();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  }
  iStack_34 = 0x5fe218;
  FUN_0045ebca();
LAB_005fe218:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


