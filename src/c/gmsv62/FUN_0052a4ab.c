/* FUN_0052a4ab - 0x0052a4ab in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_0052a4ab(void)

{
  undefined4 uVar1;
  int iVar2;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int unaff_EBP;
  undefined4 uVar3;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  
  FUN_00879bb8();
  uVar3 = 0;
  if ((*(int *)(extraout_ECX + 0x18) != 0) || (*(int *)(unaff_EBP + 0x10) < 1)) {
    uVar1 = 0;
    goto LAB_0052a6a1;
  }
  iStack_34 = 0;
  iStack_38 = 0;
  iStack_3c = 0xd9;
  iStack_40 = 0x52a4df;
  FUN_0060142b();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uVar1 = 1;
  if (*(int *)(unaff_EBP + 8) == 0) {
    iStack_34 = unaff_EBP + -0x18;
    iStack_38 = unaff_EBP + -0x10;
    iStack_3c = unaff_EBP + -0x14;
    iStack_40 = unaff_EBP + 0xc;
    iStack_44 = extraout_ECX;
    iVar2 = FUN_00533470(*(undefined4 *)(unaff_EBP + 0xc),*(undefined4 *)(unaff_EBP + 0x14));
    if (iVar2 == 1) {
      if ((*(int *)(unaff_EBP + 0xc) < 10000000) && (0x6d < *(int *)(unaff_EBP + 0xc))) {
        iStack_34 = 2;
        iStack_38 = 0x52a60c;
        FUN_00457cda();
        iStack_34 = unaff_EBP + -0x30;
        iStack_38 = 0x52a618;
        FUN_004b57b6();
        iStack_34 = *(undefined4 *)(unaff_EBP + 0x10);
        iStack_38 = 0x52a623;
        FUN_00457d37();
        iStack_34 = *(undefined4 *)(unaff_EBP + -0x14);
        iStack_38 = 0x52a62e;
        FUN_00457d37();
        iStack_34 = *(undefined4 *)(unaff_EBP + 0xc);
        iStack_38 = 0x52a639;
        FUN_00457d37();
        iStack_34 = *(undefined4 *)(unaff_EBP + -0x10);
        iStack_38 = 0x52a644;
        FUN_00457cda();
        iStack_34 = *(undefined4 *)(unaff_EBP + -0x18);
        iStack_38 = 0x52a64f;
        FUN_00457cda();
LAB_0052a64f:
        iStack_34 = unaff_EBP + -0x30;
        iStack_38 = 0x52a65e;
        FUN_004751b2();
        goto LAB_0052a65e;
      }
      iStack_34 = 0;
      iStack_38 = 0;
      iStack_3c = 0;
      iStack_40 = 0;
      *(int **)(unaff_EBP + 0x14) = &iStack_44;
      iStack_44 = extraout_ECX_01;
      FUN_00679d22(&iStack_44,0x1171);
      FUN_007db3ad();
    }
  }
  else {
    if (*(int *)(unaff_EBP + 8) != 1) {
LAB_0052a65e:
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      *(undefined4 *)(extraout_ECX + 0x18) = 1;
      iStack_34 = 0x52a66d;
      FUN_0045ebca();
      goto LAB_0052a6a1;
    }
    iStack_34 = unaff_EBP + -0x20;
    iStack_38 = unaff_EBP + -0x18;
    iStack_3c = unaff_EBP + -0x10;
    iStack_40 = unaff_EBP + -0x14;
    iStack_44 = unaff_EBP + -0x1c;
    iVar2 = FUN_005375e2(*(undefined4 *)(unaff_EBP + 0xc),*(undefined4 *)(unaff_EBP + 0x14),
                         extraout_ECX,unaff_EBP + 8);
    if (iVar2 == 1) {
      if ((*(int *)(extraout_ECX + 0x1d58) <= (int)(uint)*(byte *)(unaff_EBP + -0x10)) &&
         ((int)(uint)*(byte *)(unaff_EBP + -0x10) <= *(int *)(extraout_ECX + 0x1d5c))) {
        iStack_34 = 0x12;
        iStack_38 = 0x52a544;
        FUN_00457cda();
        iStack_34 = unaff_EBP + -0x30;
        iStack_38 = 0x52a550;
        FUN_004b57b6();
        iStack_34 = *(undefined4 *)(unaff_EBP + 0x10);
        iStack_38 = 0x52a55b;
        FUN_00457d37();
        iStack_34 = *(undefined4 *)(unaff_EBP + -0x14);
        iStack_38 = 0x52a566;
        FUN_00457d37();
        iStack_34 = *(undefined4 *)(unaff_EBP + 8);
        iStack_38 = 0x52a571;
        FUN_00457d37();
        iStack_34 = *(undefined4 *)(unaff_EBP + -0x1c);
        iStack_38 = 0x52a57c;
        FUN_00457d37();
        iStack_34 = *(undefined4 *)(unaff_EBP + -0x10);
        iStack_38 = 0x52a587;
        FUN_00457cda();
        iStack_34 = *(undefined4 *)(unaff_EBP + -0x18);
        iStack_38 = 0x52a592;
        FUN_00457cda();
        iStack_34 = *(undefined4 *)(unaff_EBP + -0x20);
        iStack_38 = 0x52a59d;
        FUN_00457d37();
        goto LAB_0052a64f;
      }
      iStack_34 = 0;
      iStack_38 = 0;
      iStack_3c = 0;
      iStack_40 = 0;
      *(int **)(unaff_EBP + 0x14) = &iStack_44;
      iStack_44 = extraout_ECX_00;
      FUN_00679d22(&iStack_44,0x1187);
      FUN_007db3ad();
      uVar3 = 4;
    }
  }
  uVar1 = uVar3;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iStack_34 = 0x52a69f;
  FUN_0045ebca();
LAB_0052a6a1:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar1;
}


