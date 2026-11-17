/* FUN_00700569 - 0x00700569 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00700569(void)

{
  short sVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int *extraout_ECX;
  int extraout_ECX_00;
  uint uVar5;
  int unaff_EBP;
  uint uVar6;
  undefined1 *puStack_48;
  int iStack_44;
  int *piStack_40;
  
  FUN_00879bb8();
  uVar5 = 0;
  uVar2 = (uint)(*(int *)(unaff_EBP + 8) == 0);
  uVar6 = extraout_ECX[0x162];
  *(uint *)(unaff_EBP + -0x18) = uVar2;
  if (uVar2 != uVar6) {
    iStack_44 = 0x70059e;
    piStack_40 = (int *)uVar2;
    FUN_004b2699();
  }
  if (*(short *)(unaff_EBP + 0xc) != 0) {
    piStack_40 = (int *)0x7005b0;
    FUN_0087a1b0();
    piStack_40 = (int *)0x0;
    iStack_44 = 0;
    puStack_48 = &stack0xffffffc4;
    uVar3 = FUN_00412335(*(undefined2 *)(unaff_EBP + 0xc));
    *(undefined1 ***)(unaff_EBP + -0x10) = &puStack_48;
    FUN_004033a1(uVar3);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar4 = unaff_EBP + -0x2c;
    FUN_0040263d(iVar4);
    FUN_004048a4(iVar4);
    *(undefined4 *)(unaff_EBP + -4) = 1;
    puStack_48 = (undefined1 *)0x7005f3;
    iVar4 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x14) = iVar4;
    *(undefined4 *)(unaff_EBP + 8) = 0;
    if (iVar4 != 0) {
      piStack_40 = (int *)(unaff_EBP + -0x14);
      iStack_44 = 0x700609;
      piStack_40 = (int *)FUN_00404b30();
      if (((int)piStack_40 < 0) && (piStack_40 != (int *)0x80004002)) {
        iStack_44 = 0x70061a;
        FUN_00878dfb();
      }
    }
    piStack_40 = (int *)(unaff_EBP + -0x2c);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    iStack_44 = 0x700627;
    iVar4 = FUN_00402bc3();
    iStack_44 = (int)piStack_40;
    if (iVar4 < 0) {
      iStack_44 = 0x700632;
      piStack_40 = (int *)iVar4;
      FUN_00878dfb();
      iStack_44 = extraout_ECX_00;
    }
    piStack_40 = (int *)0x0;
    *(int **)(unaff_EBP + -0x10) = &iStack_44;
    puStack_48 = (undefined1 *)0x6cd;
    FUN_00679e4e(&iStack_44);
    puStack_48 = (undefined1 *)(unaff_EBP + -0x3c);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_0040263d();
    iStack_44 = FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 5;
    puStack_48 = (undefined1 *)0x70066a;
    uVar3 = FUN_00412550();
    *(undefined4 *)(unaff_EBP + -0x10) = uVar3;
    puStack_48 = (undefined1 *)(unaff_EBP + -0x3c);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    piStack_40 = (int *)FUN_00402bc3();
    if ((int)piStack_40 < 0) {
      iStack_44 = 0x700687;
      FUN_00878dfb();
    }
    if (*(int *)(DAT_0097926c + 0x80) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(*(int *)(DAT_0097926c + 0x80) + -4);
    }
    if (*(int *)(unaff_EBP + -0x10) < iVar4) {
      for (; (iVar4 = extraout_ECX[uVar2 + 0x173], iVar4 != 0 && (uVar5 < *(uint *)(iVar4 + -4)));
          uVar5 = uVar5 + 1) {
        if (*(uint *)(unaff_EBP + -0x10) == (uint)**(ushort **)(iVar4 + 4 + uVar5 * 8)) {
          piStack_40 = (int *)(*(uint *)(unaff_EBP + -0x10) * 3 + 4000 + *(int *)(unaff_EBP + -0x18)
                              );
          iStack_44 = 0x7006d7;
          (**(code **)(*extraout_ECX + 0x20))();
        }
      }
    }
    uVar6 = 0;
    while( true ) {
      iVar4 = extraout_ECX[extraout_ECX[0x162] + 0x173];
      if ((iVar4 == 0) || (*(uint *)(iVar4 + -4) <= uVar6)) goto LAB_00700763;
      *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(iVar4 + uVar6 * 8 + 4);
      piStack_40 = (int *)0x70070e;
      FUN_00705dac();
      sVar1 = **(short **)(unaff_EBP + -0x18);
      *(undefined1 *)(unaff_EBP + -4) = 6;
      if (sVar1 == *(short *)(unaff_EBP + 0xc)) break;
      *(undefined1 *)(unaff_EBP + -4) = 3;
      if (*(short **)(unaff_EBP + -0x18) != (short *)0x0) {
        piStack_40 = (int *)0x0;
        iStack_44 = 0x70072f;
        FUN_00705e5b();
        *(undefined4 *)(unaff_EBP + -0x18) = 0;
      }
      uVar6 = uVar6 + 1;
    }
    extraout_ECX[0x163] = uVar6;
    if (extraout_ECX[0x177] != 0) {
      piStack_40 = (int *)0x70074e;
      FUN_006fbe67();
    }
    *(undefined1 *)(unaff_EBP + -4) = 3;
    if (*(int *)(unaff_EBP + -0x18) != 0) {
      piStack_40 = (int *)0x0;
      iStack_44 = 0x700760;
      FUN_00705e5b();
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
    }
LAB_00700763:
    piStack_40 = *(int **)(unaff_EBP + 8);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (piStack_40 != (int *)0x0) {
      iStack_44 = 0x700774;
      (**(code **)(*piStack_40 + 8))();
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


