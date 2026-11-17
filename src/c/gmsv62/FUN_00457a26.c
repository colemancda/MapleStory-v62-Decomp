/* FUN_00457a26 - 0x00457a26 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00457a26(void)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int iVar5;
  int unaff_EBP;
  int aiStack_4c [3];
  undefined *puStack_40;
  
  FUN_00879bb8();
  if (0 < *(int *)(extraout_ECX + 0x4d4)) {
    iVar5 = *(int *)(extraout_ECX + 0x4d4) + -1;
    *(int *)(extraout_ECX + 0x4d4) = iVar5;
    puStack_40 = (undefined *)0x0;
    aiStack_4c[2] = 0xc6;
    *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(*(int *)(extraout_ECX + 0x4cc) + iVar5 * 4)
    ;
    aiStack_4c[1] = 0x457c62;
    FUN_0060142b();
    *(undefined4 *)(unaff_EBP + -4) = 6;
    puStack_40 = (undefined *)0x457c73;
    FUN_00457cda();
    puStack_40 = (undefined *)0x457c8c;
    FUN_00457cda();
    puStack_40 = (undefined *)0x457c96;
    FUN_00457d37();
    puStack_40 = (undefined *)0x457ca1;
    FUN_00457d37();
    puStack_40 = (undefined *)0x457cb0;
    FUN_004751b2();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *(undefined4 *)(extraout_ECX + 0x18) = 1;
    FUN_0045ebca();
    goto LAB_00457cc3;
  }
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  iVar5 = *(int *)(extraout_ECX + 0x4d0);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar5 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(iVar5 + -4);
  }
  if (*(int *)(extraout_ECX + 0x4cc) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(*(int *)(extraout_ECX + 0x4cc) + -4);
  }
  if (iVar5 == iVar1) {
    puStack_40 = (undefined *)(unaff_EBP + -0x14);
    aiStack_4c[2] = 0x457a8d;
    piVar2 = (int *)FUN_00679d22();
    aiStack_4c[0] = *piVar2;
    puStack_40 = (undefined *)(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    aiStack_4c[2] = 0x457a9c;
    FUN_00434e21();
    iVar5 = *(int *)(unaff_EBP + -0x14);
    *(undefined1 *)(unaff_EBP + -4) = 0;
LAB_00457aa4:
    if (iVar5 != 0) {
      aiStack_4c[0] = iVar5 + -0xc;
      puStack_40 = (undefined *)0x457ab5;
      FUN_00434e38();
    }
  }
  else {
    if (*(int *)(extraout_ECX + 0x4d0) == 0) {
LAB_00457acb:
      puStack_40 = (undefined *)(unaff_EBP + -0x14);
      aiStack_4c[2] = 0x457ade;
      FUN_00679d22();
      *(undefined1 *)(unaff_EBP + -4) = 2;
      puStack_40 = (undefined *)0x457aeb;
      FUN_00414f8b();
      iVar5 = *(int *)(unaff_EBP + -0x14);
      *(undefined1 *)(unaff_EBP + -4) = 0;
      aiStack_4c[0] = extraout_ECX_00;
      goto LAB_00457aa4;
    }
    iVar5 = *(int *)(*(int *)(extraout_ECX + 0x4d0) + -4);
    *(int *)(unaff_EBP + -0x20) = iVar5;
    if (iVar5 == 0) goto LAB_00457acb;
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    if (0 < iVar5) {
      do {
        puStack_40 = (undefined *)(unaff_EBP + -0x28);
        aiStack_4c[2] = 0x457b27;
        FUN_0084a5e4();
        *(undefined4 *)(unaff_EBP + -0x18) = DAT_00973a94;
        *(undefined1 *)(unaff_EBP + -4) = 3;
        FUN_0045e2eb();
        puStack_40 = (undefined *)(unaff_EBP + -0x1c);
        aiStack_4c[2] = 0x457b4b;
        puVar3 = (undefined4 *)FUN_0045a1d8();
        puStack_40 = (undefined *)*puVar3;
        *(undefined1 *)(unaff_EBP + -4) = 4;
        aiStack_4c[2] = 0x457b66;
        uVar4 = FUN_0045efbb();
        *(undefined4 *)(unaff_EBP + -0x18) = uVar4;
        puStack_40 = (undefined *)0x457b6f;
        _strlen(&DAT_00964314);
        puStack_40 = &DAT_00964314;
        aiStack_4c[2] = 0x457b7a;
        FUN_0045efbb();
        *(undefined1 *)(unaff_EBP + -4) = 3;
        FUN_00414ebb();
        *(undefined1 *)(unaff_EBP + -4) = 0;
        if (*(int *)(unaff_EBP + -0x24) != 0) {
          puStack_40 = (undefined *)0x457b97;
          FUN_0045e794();
          *(undefined4 *)(unaff_EBP + -0x24) = 0;
        }
        *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
      } while (*(int *)(unaff_EBP + -0x14) < *(int *)(unaff_EBP + -0x20));
    }
    puStack_40 = (undefined *)(unaff_EBP + -0x1c);
    aiStack_4c[2] = 0x457bbc;
    uVar4 = FUN_00679d22();
    *(undefined4 *)(unaff_EBP + -0x20) = uVar4;
    *(undefined1 *)(unaff_EBP + -4) = 5;
    puStack_40 = (undefined *)0x457bc9;
    _strlen(&DAT_00964314);
    puStack_40 = &DAT_00964314;
    aiStack_4c[2] = 0x457bd4;
    FUN_0045efbb();
    puStack_40 = (undefined *)**(undefined4 **)(unaff_EBP + -0x20);
    aiStack_4c[2] = 0x457bed;
    FUN_0045efbb();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_00414ebb();
    aiStack_4c[0] = extraout_ECX_01;
  }
  puStack_40 = (undefined *)0x0;
  aiStack_4c[2] = 0;
  aiStack_4c[1] = 0;
  *(int **)(unaff_EBP + -0x20) = aiStack_4c;
  FUN_00450368(unaff_EBP + -0x10);
  FUN_007db3ad();
  FUN_00445a30();
  FUN_00445a30();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(undefined4 *)(extraout_ECX + 0x4d8) = 0;
  FUN_00414ebb();
LAB_00457cc3:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


