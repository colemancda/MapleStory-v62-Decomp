/* FUN_00696251 - 0x00696251 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00696251(void)

{
  undefined4 uVar1;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uVar2;
  undefined1 auStack_44 [4];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int iStack_38;
  int iStack_34;
  
  FUN_00879bb8();
  if (*(int *)(unaff_EBP + 8) == 1) {
    if (*(int *)(*(int *)(extraout_ECX + 0x78) + 0x60) < 1) {
      *(undefined1 **)(unaff_EBP + 8) = auStack_44;
      uVar2 = 0xd00;
    }
    else {
      iStack_34 = unaff_EBP + -0x30;
      iStack_38 = 0x69629a;
      FUN_0045b90e();
      iStack_34 = 0;
      iStack_38 = 0;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      uStack_3c = 0x6962a6;
      FUN_0045ed72();
      iStack_38 = 0x6962ad;
      uVar2 = FUN_0045ee27();
      iStack_34 = unaff_EBP + -0x2c;
      iStack_38 = 0x6962be;
      FUN_0045b90e();
      iStack_34 = 0;
      iStack_38 = 0;
      *(undefined1 *)(unaff_EBP + -4) = 1;
      uStack_3c = 0x6962cb;
      FUN_0045ed72();
      iStack_38 = 0x6962d2;
      uVar1 = FUN_0045ee27();
      *(undefined4 *)(unaff_EBP + -0x14) = uVar1;
      iStack_34 = unaff_EBP + -0x28;
      iStack_38 = 0x6962e4;
      FUN_0045b90e();
      iStack_34 = 0;
      iStack_38 = 0;
      *(undefined1 *)(unaff_EBP + -4) = 2;
      uStack_3c = 0x6962f1;
      FUN_0045ed72();
      iStack_38 = 0x6962f8;
      uVar1 = FUN_0045ee27();
      *(undefined4 *)(unaff_EBP + -0x10) = uVar1;
      iStack_34 = unaff_EBP + -0x24;
      iStack_38 = 0x69630a;
      FUN_0045b90e();
      iStack_34 = 0;
      iStack_38 = 0;
      *(undefined1 *)(unaff_EBP + -4) = 3;
      uStack_3c = 0x696317;
      FUN_0045ed72();
      iStack_38 = 0x69631e;
      FUN_0045ee27();
      iStack_34 = *(undefined4 *)(unaff_EBP + -0x10);
      iStack_38 = unaff_EBP + -0x20;
      uStack_3c = 0x69632c;
      FUN_0045e02d();
      iStack_34 = *(undefined4 *)(unaff_EBP + -0x14);
      iStack_38 = unaff_EBP + -0x1c;
      *(undefined1 *)(unaff_EBP + -4) = 4;
      uStack_3c = 0x69633e;
      FUN_0045e02d();
      iStack_38 = unaff_EBP + -0x18;
      *(undefined1 *)(unaff_EBP + -4) = 5;
      uStack_3c = 0x69634e;
      iStack_34 = uVar2;
      iStack_34 = FUN_0045e02d();
      *(undefined1 *)(unaff_EBP + -4) = 6;
      iStack_38 = 0x696360;
      FUN_00414f8b();
      *(undefined1 *)(unaff_EBP + -4) = 5;
      iStack_34 = 0x69636c;
      FUN_00414ebb();
      *(undefined1 *)(unaff_EBP + -4) = 4;
      iStack_34 = 0x696378;
      FUN_00414ebb();
      *(undefined1 *)(unaff_EBP + -4) = 3;
      iStack_34 = 0x696384;
      FUN_00414ebb();
      *(undefined1 *)(unaff_EBP + -4) = 2;
      iStack_34 = 0x696390;
      FUN_00414ebb();
      *(undefined1 *)(unaff_EBP + -4) = 1;
      iStack_34 = 0x69639c;
      FUN_00414ebb();
      *(undefined1 *)(unaff_EBP + -4) = 0;
      iStack_34 = 0x6963a7;
      FUN_00414ebb();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      iStack_34 = 0x6963b3;
      FUN_00414ebb();
      if ((*(char **)(extraout_ECX + 0xb0) != (char *)0x0) &&
         (**(char **)(extraout_ECX + 0xb0) != '\0')) goto LAB_006963e1;
      *(undefined1 **)(unaff_EBP + 8) = auStack_44;
      uVar2 = 0xcfb;
    }
    iStack_34 = 0;
    iStack_38 = 0;
    uStack_3c = 0;
    uStack_40 = 0;
    FUN_00679d22(auStack_44,uVar2);
    FUN_007db3ad();
  }
  else {
LAB_006963e1:
    if (*(int *)(extraout_ECX + 0x68) == 0) {
      *(undefined4 *)(extraout_ECX + 100) = *(undefined4 *)(unaff_EBP + 8);
      *(undefined4 *)(extraout_ECX + 0x68) = 1;
      if (*(int *)(extraout_ECX + 0x14) != 0) {
        iStack_34 = 0x6963ff;
        FUN_00815de9();
      }
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


