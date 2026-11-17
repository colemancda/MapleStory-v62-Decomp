/* FUN_007b1e42 - 0x007b1e42 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007b1e42(void)

{
  int *piVar1;
  undefined2 uVar2;
  byte bVar3;
  int iVar4;
  int *piVar5;
  undefined2 *puVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uVar10;
  undefined4 uVar11;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  
  FUN_00879bb8();
  bVar3 = DAT_0097bfbc & 1;
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  if (bVar3 == 0) {
    DAT_0097bfbc = DAT_0097bfbc | 1;
    iStack_38 = 0x897b50;
    iStack_3c = 0x7b1e71;
    _DAT_0097bfb8 = FUN_005f3a71();
  }
  iStack_38 = 0xffc;
  iStack_3c = unaff_EBP + -0x10;
  iStack_40 = 0x7b1e8c;
  FUN_00679d22();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  iVar7 = DAT_00978368;
  iVar9 = *(int *)(DAT_00978368 + 0x32dc);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (iVar9 != 0) {
    iStack_38 = 0xc2b;
    iStack_3c = unaff_EBP + -0x24;
    iStack_40 = 0x7b1ec2;
    piVar5 = (int *)FUN_00679d22();
    iStack_3c = *piVar5;
    *(undefined1 *)(unaff_EBP + -4) = 4;
    if (iStack_3c == 0) {
      iStack_38 = 0;
    }
    else {
      iStack_38 = *(undefined4 *)(iStack_3c + -4);
    }
    iStack_40 = 0x7b1edd;
    FUN_0045efbb();
    *(undefined1 *)(unaff_EBP + -4) = 3;
    if (*(int *)(unaff_EBP + -0x24) != 0) {
      iStack_38 = *(int *)(unaff_EBP + -0x24) + -0xc;
      iStack_3c = 0x7b1ef1;
      FUN_00434e38();
    }
    piVar5 = *(int **)(iVar7 + 0x32d4);
    if (piVar5 != (int *)0x0) {
      piVar1 = piVar5 + *(int *)(iVar7 + 0x32d8);
      for (; piVar5 < piVar1; piVar5 = piVar5 + 1) {
        if (*piVar5 != 0) {
          iVar9 = *piVar5;
          goto LAB_007b1f12;
        }
      }
    }
    iVar9 = 0;
LAB_007b1f12:
    *(int *)(unaff_EBP + -0x20) = iVar9;
    while (iVar9 != 0) {
      iStack_38 = 0;
      iStack_3c = unaff_EBP + -0x20;
      iStack_40 = 0x7b1f25;
      puVar6 = (undefined2 *)FUN_007b458d();
      uVar2 = *puVar6;
      iStack_38 = 0xffffffff;
      iStack_3c = 0x7b1f32;
      puVar6 = (undefined2 *)FUN_005ee789();
      *puVar6 = uVar2;
      iVar9 = *(int *)(unaff_EBP + -0x20);
    }
    iStack_38 = unaff_EBP + -0x1c;
    iStack_3c = unaff_EBP + -0x10;
    iStack_40 = unaff_EBP + -0x14;
    FUN_005ec4c5();
  }
  iVar4 = DAT_00978368;
  iVar7 = *(int *)(DAT_00978368 + 0x32f4);
  iVar9 = DAT_00978368 + 0x32e8;
  *(int *)(unaff_EBP + -0x28) = iVar9;
  if (iVar7 != 0) {
    iStack_38 = 0xc2c;
    iStack_3c = unaff_EBP + -0x24;
    iStack_40 = 0x7b1f7d;
    piVar5 = (int *)FUN_00679d22();
    iStack_3c = *piVar5;
    *(undefined1 *)(unaff_EBP + -4) = 5;
    if (iStack_3c == 0) {
      iStack_38 = 0;
    }
    else {
      iStack_38 = *(undefined4 *)(iStack_3c + -4);
    }
    iStack_40 = 0x7b1f98;
    FUN_0045efbb();
    *(undefined1 *)(unaff_EBP + -4) = 3;
    if (*(int *)(unaff_EBP + -0x24) != 0) {
      iStack_38 = *(int *)(unaff_EBP + -0x24) + -0xc;
      iStack_3c = 0x7b1fac;
      FUN_00434e38();
    }
    piVar5 = *(int **)(iVar4 + 0x32ec);
    if (piVar5 != (int *)0x0) {
      piVar1 = piVar5 + *(int *)(iVar4 + 0x32f0);
      for (; piVar5 < piVar1; piVar5 = piVar5 + 1) {
        if (*piVar5 != 0) {
          iVar7 = *piVar5;
          goto LAB_007b1fcd;
        }
      }
    }
    iVar7 = 0;
LAB_007b1fcd:
    *(int *)(unaff_EBP + -0x20) = iVar7;
    if (iVar7 != 0) {
      while( true ) {
        iStack_38 = 0;
        iStack_3c = unaff_EBP + -0x20;
        iStack_40 = 0x7b1fe5;
        puVar6 = (undefined2 *)FUN_007b458d();
        uVar2 = *puVar6;
        iVar9 = CONCAT22((short)((uint)iVar9 >> 0x10),uVar2);
        iStack_38 = 0xffffffff;
        iStack_3c = 0x7b1ff2;
        puVar6 = (undefined2 *)FUN_005ee789();
        *puVar6 = uVar2;
        if (*(int *)(unaff_EBP + -0x20) == 0) break;
        iVar9 = *(int *)(unaff_EBP + -0x28);
      }
    }
    iStack_38 = unaff_EBP + -0x18;
    iStack_3c = unaff_EBP + -0x10;
    iStack_40 = unaff_EBP + -0x14;
    FUN_005ec4c5();
  }
  iStack_38 = 0x69c;
  *(undefined4 *)(unaff_EBP + -0x28) = DAT_0097926c;
  iStack_3c = 0x7b2025;
  iVar7 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x2c) = iVar7;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (iVar7 == 0) {
    iVar7 = 0;
  }
  else {
    iStack_38 = 0x7b2037;
    iVar7 = FUN_007e62e9();
  }
  uVar8 = -(uint)(iVar7 != 0) & iVar7 + 8U;
  *(uint *)(unaff_EBP + -0x30) = -(uint)(uVar8 != 0) & uVar8 - 8;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_38 = 0x7b205e;
  FUN_004c26c4();
  iStack_38 = 0;
  iStack_3c = 0;
  *(int **)(unaff_EBP + -0x2c) = &iStack_40;
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iStack_40 = extraout_ECX;
  FUN_00450368(unaff_EBP + -0x10);
  uVar11 = 0x897b50;
  uVar10 = 4;
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_004c2677(4,0x897b50);
  FUN_007eddac(uVar10,uVar11);
  iStack_38 = 0x7b2095;
  FUN_007ee0f6();
  iStack_38 = 0x7b209d;
  FUN_007e6e3c();
  iStack_38 = 0x7b20a5;
  iVar7 = FUN_004bc6a2();
  if (iVar7 == 1) {
    iVar7 = *(int *)(unaff_EBP + -0x14);
    uVar8 = *(uint *)(*(int *)(unaff_EBP + -0x30) + 0xd8);
    if ((iVar7 != 0) && (uVar8 < *(uint *)(iVar7 + -4))) {
      iVar7 = CONCAT22((short)((uint)iVar9 >> 0x10),*(undefined2 *)(iVar7 + uVar8 * 2));
      iStack_38 = 1;
      iStack_40 = 0x7b20d4;
      iStack_3c = iVar7;
      iVar9 = FUN_006fc790();
      iStack_3c = *(undefined4 *)(iVar9 + 0x18);
      iStack_40 = iVar7;
      FUN_0084b9c7();
      iStack_38 = 0x7b20e6;
      FUN_008344dd();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_38 = 0x7b20f2;
  FUN_004c26e1();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iStack_38 = 0x7b20fe;
  FUN_005ee767();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_38 = 0x7b210a;
  FUN_005ee767();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iStack_38 = 0x7b2115;
  FUN_005ee767();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iStack_38 = 0x7b2121;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


