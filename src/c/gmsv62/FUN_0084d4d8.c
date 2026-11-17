/* FUN_0084d4d8 - 0x0084d4d8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0084d4d8(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int extraout_ECX;
  int unaff_EBP;
  bool bVar4;
  int iStack_20;
  
  FUN_00879bb8();
  bVar4 = DAT_00978360 != 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (bVar4) {
    iStack_20 = 0x84d501;
    iVar1 = (*DAT_0097b704)();
    iStack_20 = *(int *)(unaff_EBP + 8);
    iVar2 = FUN_007c0104();
    *(int *)(unaff_EBP + 8) = iVar2;
    if (iVar2 == 0) {
      iStack_20 = 0x17e;
      uVar3 = FUN_00679d22(unaff_EBP + 8);
      iStack_20 = 0xc;
      *(undefined1 *)(unaff_EBP + -4) = 1;
      FUN_00471102(uVar3);
      *(undefined1 *)(unaff_EBP + -4) = 0;
    }
    else {
      if (299999 < iVar1 - *(int *)(extraout_ECX + 0x3154)) {
        iStack_20 = 0;
        *(int *)(extraout_ECX + 0x3154) = iVar1;
        FUN_0060142b(0x68,0);
        iStack_20 = *(int *)(*(int *)(unaff_EBP + 8) + 0xd78);
        *(undefined1 *)(unaff_EBP + -4) = 3;
        FUN_00457d37();
        iStack_20 = *(int *)(unaff_EBP + 0xc);
        FUN_00457cda();
        *(int **)(unaff_EBP + 8) = &iStack_20;
        iStack_20 = 0;
        FUN_00414f8b(unaff_EBP + 0x10);
        FUN_00459cb5();
        iStack_20 = unaff_EBP + -0x1c;
        FUN_004751b2();
        *(undefined1 *)(unaff_EBP + -4) = 0;
        iStack_20 = 0x84d5e3;
        FUN_0045ebca();
        goto LAB_0084d5e3;
      }
      iStack_20 = 0x141;
      uVar3 = FUN_00679d22(unaff_EBP + 0xc);
      iStack_20 = 0xc;
      *(undefined1 *)(unaff_EBP + -4) = 2;
      FUN_00471102(uVar3);
      *(undefined1 *)(unaff_EBP + -4) = 0;
    }
    iStack_20 = 0x84d57c;
    FUN_00414ebb();
  }
LAB_0084d5e3:
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iStack_20 = 0x84d5ef;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


