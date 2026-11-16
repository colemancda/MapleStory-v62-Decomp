/* FUN_5040ba25 - 0x5040ba25 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


void FUN_5040ba25(void)

{
  int *piVar1;
  void *this;
  int iVar2;
  uint uVar3;
  undefined2 *puVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  int unaff_EBP;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  FUN_5042a430();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffa4;
  iVar2 = FUN_504027b5();
  if (iVar2 < 0) {
LAB_5040ba9a:
    FUN_5040bfad();
    return;
  }
  this = *(void **)(unaff_EBP + 8);
  puVar9 = (undefined4 *)((int)this + 0x98);
  *(undefined4 **)(unaff_EBP + 8) = puVar9;
  *(undefined4 **)(unaff_EBP + -0x28) = puVar9;
  FUN_50401895();
  puVar8 = (undefined4 *)((int)this + 0x1c);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  *(undefined4 **)(unaff_EBP + -0x24) = puVar8;
  FUN_50401895();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (((byte)*(undefined4 *)(unaff_EBP + 0xc) & 0x30) == 0x30) {
    piVar1 = (int *)((int)this + 0x20);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      *puVar8 = 0;
    }
    piVar1 = (int *)((int)this + 0x9c);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      *puVar9 = 0;
    }
    goto LAB_5040ba9a;
  }
  if (*(int *)((int)this + 0xc0) == 0) {
    piVar1 = (int *)((int)this + 0x20);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      *puVar8 = 0;
    }
    piVar1 = (int *)((int)this + 0x9c);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      *puVar9 = 0;
    }
    goto LAB_5040bf94;
  }
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  uVar5 = *(undefined4 *)(*(int *)((int)this + 200) + 4);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  *(undefined4 *)(unaff_EBP + -0x38) = uVar5;
  FUN_5040c194(unaff_EBP + -0x3c);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  uVar3 = FUN_5040a987(this,unaff_EBP + 0x20,(void *)(unaff_EBP + -0x34));
  if (uVar3 != 1) {
    if (uVar3 != 2) {
      FUN_5040b0ee();
      *(undefined1 *)(unaff_EBP + -4) = 3;
      FUN_50404f67(unaff_EBP + -0x3c);
      *(undefined1 *)(unaff_EBP + -4) = 2;
      FUN_50404f67(unaff_EBP + -0x34);
      piVar1 = (int *)((int)this + 0x20);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        *puVar8 = 0;
      }
      piVar1 = (int *)((int)this + 0x9c);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        *puVar9 = 0;
      }
      FUN_5040bfad();
      return;
    }
    iVar2 = *(int *)((int)this + 0xc4);
    FUN_5040c194(iVar2);
    FUN_50404f67(unaff_EBP + -0x34);
    puVar9 = *(undefined4 **)(unaff_EBP + 8);
    *(undefined4 *)(unaff_EBP + -0x30) = *(undefined4 *)(iVar2 + 4);
  }
  if ((*(byte *)(unaff_EBP + 0xd) & 1) == 0) {
    FUN_504068bd((int)this + 0xd8);
  }
  if ((*(int *)((int)this + 0xe0) != 0) && (*(int *)(*(int *)((int)this + 0xe8) + 0x14) != -1)) {
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_50404f67(unaff_EBP + -0x3c);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_50404f67(unaff_EBP + -0x34);
    piVar1 = (int *)((int)this + 0x20);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      *puVar8 = 0;
    }
    piVar1 = puVar9 + 1;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      *puVar9 = 0;
    }
    goto LAB_5040bf94;
  }
  if ((*(byte *)(unaff_EBP + 0xc) & 0x20) != 0) {
    iVar2 = 0;
    uVar3 = *(uint *)((int)this + 0xc4);
    while (uVar3 != 0) {
      if (*(int *)(unaff_EBP + -0x30) == *(int *)(uVar3 + 4)) goto LAB_5040bbdf;
      iVar7 = *(int *)(uVar3 - 0xc);
      FUN_50404f7d((void *)(unaff_EBP + -0x3c),uVar3);
      uVar3 = iVar7 + 0x10U & -(uint)(iVar7 != 0);
    }
    goto LAB_5040bbfb;
  }
  *(undefined4 *)(unaff_EBP + -0x1c) = 0xffffffff;
  goto LAB_5040bc0c;
LAB_5040bbdf:
  for (; uVar3 != 0; uVar3 = *(int *)(uVar3 - 0xc) + 0x10U & -(uint)(*(int *)(uVar3 - 0xc) != 0)) {
    iVar2 = iVar2 + *(int *)(*(int *)(uVar3 + 4) + 0xc);
  }
LAB_5040bbfb:
  *(int *)(unaff_EBP + -0x1c) = (iVar2 * *(int *)(unaff_EBP + -0x14)) / 1000;
LAB_5040bc0c:
  iVar2 = *(int *)((int)this + 0xe0);
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  uVar3 = (uint)(iVar2 == 0);
  *(uint *)(unaff_EBP + -0x20) = uVar3;
  if (uVar3 == 0) {
    uVar5 = *(undefined4 *)(*(int *)((int)this + 0xe8) + 0x10);
  }
  else {
    uVar5 = *(undefined4 *)(*(int *)((int)this + 0x24) + 0x328);
  }
  uVar3 = *(uint *)((int)this + 0xc4);
  *(undefined4 *)(unaff_EBP + 8) = uVar5;
  while (uVar3 != 0) {
    iVar2 = *(int *)(uVar3 + 4);
    uVar3 = -(uint)(*(int *)(uVar3 - 0xc) != 0) & *(int *)(uVar3 - 0xc) + 0x10U;
    if (*(int *)(unaff_EBP + -0x30) == iVar2) {
      *(undefined4 *)(unaff_EBP + -0x18) = 1;
    }
    *(int *)(unaff_EBP + 8) =
         *(int *)(unaff_EBP + 8) +
         (uint)(*(int *)(iVar2 + 0xc) * *(int *)(unaff_EBP + -0x14)) / 1000;
    puVar4 = (undefined2 *)FUN_5040c60a((void *)((int)this + 0xd8));
    *puVar4 = 6;
    if (uVar3 == 0) {
      uVar5 = *(undefined4 *)(*(int *)(unaff_EBP + -0x38) + 8);
    }
    else {
      uVar5 = *(undefined4 *)(iVar2 + 8);
    }
    *(undefined4 *)(puVar4 + 4) = 0;
    iVar7 = *(int *)(unaff_EBP + -0x18);
    *(undefined4 *)(puVar4 + 6) = uVar5;
    *(undefined4 *)(puVar4 + 8) = *(undefined4 *)(unaff_EBP + 8);
    if (iVar7 == 0) {
      uVar5 = 0xffffffff;
    }
    else {
      uVar5 = *(undefined4 *)(unaff_EBP + -0x1c);
    }
    *(undefined4 *)(puVar4 + 10) = uVar5;
    *(undefined4 *)(puVar4 + 0xc) = *(undefined4 *)(iVar2 + 0x10);
    *(undefined4 *)(puVar4 + 0xe) = *(undefined4 *)(iVar2 + 0x14);
    *(undefined4 *)(puVar4 + 0x10) = *(undefined4 *)(iVar2 + 0x18);
    *(undefined4 *)(puVar4 + 0x12) = *(undefined4 *)(iVar2 + 0x1c);
  }
  if ((*(byte *)(unaff_EBP + 0xc) & 0x10) != 0) {
    puVar6 = (undefined4 *)FUN_5040c60a((void *)((int)this + 0xd8));
    puVar8 = *(undefined4 **)((int)this + 0xe4);
    puVar9 = puVar6;
    for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
    }
    puVar6[7] = 0xffffffff;
    puVar6[9] = 0;
  }
  if ((*(int *)(unaff_EBP + -0x20) != 0) && (*(int *)((int)this + 0xe0) != 0)) {
    iVar2 = *(int *)(*(int *)((int)this + 0xe4) + 0x18);
    *(int *)(unaff_EBP + 0xc) = *(int *)((int)this + 0xe4);
    if (-1 < iVar2) {
      Ordinal_8(unaff_EBP + -0x5c);
      iVar2 = FUN_504057dd((short *)(unaff_EBP + -0x5c),(short *)&DAT_50439040);
      if (iVar2 < 0) {
        FUN_5042a358(iVar2);
      }
      *(undefined1 *)(unaff_EBP + -4) = 5;
      Ordinal_8(unaff_EBP + -0x4c);
      iVar2 = FUN_504057dd((short *)(unaff_EBP + -0x4c),(short *)&DAT_50439040);
      if (iVar2 < 0) {
        FUN_5042a358(iVar2);
      }
      iVar2 = *(int *)((int)this + 0x34);
      *(undefined1 *)(unaff_EBP + -4) = 6;
      if (iVar2 == 0) {
        FUN_5042a358(0x80004003);
      }
      piVar1 = *(int **)((int)this + 0x34);
      uVar5 = *(undefined4 *)(*(int *)(unaff_EBP + 0xc) + 0x18);
      iVar2 = *piVar1;
      *(int **)(unaff_EBP + 8) = piVar1;
      iVar2 = (**(code **)(iVar2 + 0x90))
                        (piVar1,uVar5,0,*(undefined4 *)(unaff_EBP + -0x4c),
                         *(undefined4 *)(unaff_EBP + -0x48),*(undefined4 *)(unaff_EBP + -0x44),
                         *(undefined4 *)(unaff_EBP + -0x40),*(undefined4 *)(unaff_EBP + -0x5c),
                         *(undefined4 *)(unaff_EBP + -0x58),*(undefined4 *)(unaff_EBP + -0x54),
                         *(undefined4 *)(unaff_EBP + -0x50));
      if (iVar2 < 0) {
        FUN_5042a366(iVar2,*(int **)(unaff_EBP + 8),&DAT_50435298);
      }
      *(undefined1 *)(unaff_EBP + -4) = 5;
      iVar2 = FUN_5040278b((short *)(unaff_EBP + -0x4c));
      if (iVar2 < 0) {
        FUN_5042a358(iVar2);
      }
      *(undefined1 *)(unaff_EBP + -4) = 4;
      iVar2 = FUN_5040278b((short *)(unaff_EBP + -0x5c));
      if (iVar2 < 0) {
        FUN_5042a358(iVar2);
      }
    }
    if (-1 < *(int *)(*(int *)(unaff_EBP + 0xc) + 0x1c)) {
      Ordinal_8(unaff_EBP + -0x5c);
      iVar2 = FUN_504057dd((short *)(unaff_EBP + -0x5c),(short *)&DAT_50439040);
      if (iVar2 < 0) {
        FUN_5042a358(iVar2);
      }
      iVar2 = *(int *)(*(int *)(unaff_EBP + 0xc) + 0x10);
      *(undefined1 *)(unaff_EBP + -4) = 7;
      FUN_50405839((void *)(unaff_EBP + -0x4c),iVar2,3);
      iVar2 = *(int *)((int)this + 0x34);
      *(undefined1 *)(unaff_EBP + -4) = 8;
      if (iVar2 == 0) {
        FUN_5042a358(0x80004003);
      }
      piVar1 = *(int **)((int)this + 0x34);
      uVar5 = *(undefined4 *)(*(int *)(unaff_EBP + 0xc) + 0x1c);
      iVar2 = *piVar1;
      *(int **)(unaff_EBP + 8) = piVar1;
      iVar2 = (**(code **)(iVar2 + 0x90))
                        (piVar1,uVar5,0,*(undefined4 *)(unaff_EBP + -0x4c),
                         *(undefined4 *)(unaff_EBP + -0x48),*(undefined4 *)(unaff_EBP + -0x44),
                         *(undefined4 *)(unaff_EBP + -0x40),*(undefined4 *)(unaff_EBP + -0x5c),
                         *(undefined4 *)(unaff_EBP + -0x58),*(undefined4 *)(unaff_EBP + -0x54),
                         *(undefined4 *)(unaff_EBP + -0x50));
      if (iVar2 < 0) {
        FUN_5042a366(iVar2,*(int **)(unaff_EBP + 8),&DAT_50435298);
      }
      *(undefined1 *)(unaff_EBP + -4) = 7;
      iVar2 = FUN_5040278b((short *)(unaff_EBP + -0x4c));
      if (iVar2 < 0) {
        FUN_5042a358(iVar2);
      }
      *(undefined1 *)(unaff_EBP + -4) = 4;
      iVar2 = FUN_5040278b((short *)(unaff_EBP + -0x5c));
      if (iVar2 < 0) {
        FUN_5042a358(iVar2);
      }
    }
    iVar2 = *(int *)(unaff_EBP + 0xc);
    if (*(int *)(iVar2 + 0x20) != 0) {
      Ordinal_8(unaff_EBP + -0x5c);
      iVar7 = FUN_504057dd((short *)(unaff_EBP + -0x5c),(short *)&DAT_50439040);
      if (iVar7 < 0) {
        FUN_5042a358(iVar7);
      }
      *(undefined1 *)(unaff_EBP + -4) = 9;
      FUN_5040b72b();
      *(undefined1 *)(unaff_EBP + -4) = 4;
      iVar7 = FUN_5040278b((short *)(unaff_EBP + -0x5c));
      if (iVar7 < 0) {
        FUN_5042a358(iVar7);
      }
    }
    if (*(int *)(iVar2 + 0x24) != 0) {
      FUN_50405839((void *)(unaff_EBP + -0x5c),*(int *)(iVar2 + 0x10),3);
      *(undefined1 *)(unaff_EBP + -4) = 10;
      FUN_5040b72b();
      *(undefined1 *)(unaff_EBP + -4) = 4;
      iVar2 = FUN_5040278b((short *)(unaff_EBP + -0x5c));
      if (iVar2 < 0) {
        FUN_5042a358(iVar2);
      }
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (*(int *)(unaff_EBP + -0x38) != 0) {
    FUN_5040508d(unaff_EBP + -0x3c);
    *(undefined4 *)(unaff_EBP + -0x38) = 0;
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (*(int *)(unaff_EBP + -0x30) != 0) {
    FUN_5040508d(unaff_EBP + -0x34);
  }
  puVar8 = *(undefined4 **)(unaff_EBP + -0x24);
  piVar1 = puVar8 + 1;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    *puVar8 = 0;
  }
  puVar8 = *(undefined4 **)(unaff_EBP + -0x28);
  piVar1 = puVar8 + 1;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    *puVar8 = 0;
  }
LAB_5040bf94:
  FUN_5040bfad();
  return;
}


