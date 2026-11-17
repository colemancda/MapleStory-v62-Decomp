/* FUN_0043f1a0 - 0x0043f1a0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0043f1a0(void)

{
  int iVar1;
  undefined4 uVar2;
  int *extraout_ECX;
  int iVar3;
  int unaff_EBP;
  bool bVar4;
  
  FUN_00879bb8();
  if ((*(int *)(unaff_EBP + 8) == 0) &&
     (iVar1 = _memcmp((void *)((int)extraout_ECX + 0x1b1),extraout_ECX + 1,0x1ad), iVar1 == 0))
  goto LAB_0043f3c6;
  FUN_0043f124(extraout_ECX + 1);
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  iVar1 = *(int *)((int)extraout_ECX + 0x49);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar1 == 0) {
LAB_0043f235:
    if ((*(int *)((int)extraout_ECX + 0x49) == 0) &&
       (iVar1 = (**(code **)(*extraout_ECX + 4))(), iVar1 != 0)) {
      uVar2 = FUN_004084c5(unaff_EBP + -0x1c,0x153d80);
      *(undefined1 *)(unaff_EBP + -4) = 2;
      FUN_00411712(uVar2);
      iVar1 = *(int *)(unaff_EBP + -0x10);
      bVar4 = iVar1 != 0;
      *(undefined1 *)(unaff_EBP + -4) = 0;
      if (*(int *)(unaff_EBP + -0x18) != 0) {
        FUN_00412f17(0);
        iVar1 = *(int *)(unaff_EBP + -0x10);
      }
      if (bVar4) goto LAB_0043f294;
    }
    extraout_ECX[0x10b] = 0;
    extraout_ECX[0x10d] = 1;
    extraout_ECX[0x10c] = 1;
    extraout_ECX[0x10e] = 0;
    iVar1 = FUN_004133b5();
    extraout_ECX[0x111] = iVar1;
    *(undefined4 *)(unaff_EBP + 8) = 0;
    FUN_00408b49();
    FUN_00402fa6();
    iVar1 = *(int *)(unaff_EBP + 8);
    extraout_ECX[0x112] = iVar1;
    if (iVar1 != 0) {
      FUN_004030b1();
      *(undefined4 *)(unaff_EBP + 8) = 0;
    }
  }
  else {
    iVar1 = FUN_004084c5(unaff_EBP + -0x1c,iVar1);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_00412817();
    FUN_00412829();
    iVar1 = *(int *)(iVar1 + 4);
    *(int *)(unaff_EBP + -0x10) = iVar1;
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_00412829();
    if (iVar1 == 0) goto LAB_0043f235;
    iVar1 = *(int *)(unaff_EBP + -0x10);
LAB_0043f294:
    iVar3 = *(int *)((int)extraout_ECX + 0x49);
    if (iVar3 == 0) {
      iVar3 = 0x153d80;
    }
    extraout_ECX[0x10b] = iVar3;
    extraout_ECX[0x10c] = *(int *)(iVar1 + 0x24);
    extraout_ECX[0x10d] = *(int *)(iVar1 + 0x28);
    extraout_ECX[0x10e] = *(int *)(iVar1 + 0x2c);
    iVar1 = FUN_004133b5();
    extraout_ECX[0x111] = iVar1;
    iVar1 = *(int *)(unaff_EBP + -0x10);
    FUN_00408b49();
    FUN_00402fa6();
    extraout_ECX[0x112] = *(int *)(iVar1 + 0x1c);
  }
  if (extraout_ECX[299] == 0) {
    if ((((DAT_00978358 != 0) &&
         (extraout_ECX != (int *)(-(uint)(DAT_00978358 != 0) & DAT_00978358 + 0x78U))) ||
        (DAT_00978354 == 0)) || (*(int *)(DAT_00978354 + 0xc) == 0)) {
      FUN_00441501(0);
      (**(code **)(*extraout_ECX + 0xc))(extraout_ECX[0x12d],1);
    }
    FUN_0043f7b6(extraout_ECX[0x329],0xffffffff);
    FUN_00442330();
    (**(code **)(*extraout_ECX + 8))();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    FUN_00412f17(0);
  }
LAB_0043f3c6:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


