/* FUN_51403f6e - 0x51403f6e in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


void FUN_51403f6e(void)

{
  int *piVar1;
  undefined2 *puVar2;
  void *pvVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int unaff_EBP;
  undefined4 *puVar7;
  
  FUN_5140ad20();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  puVar2 = *(undefined2 **)(unaff_EBP + 0x1c);
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffdc;
  if (puVar2 != (undefined2 *)0x0) {
    *puVar2 = 0;
  }
  pvVar3 = *(void **)(unaff_EBP + 8);
  *(undefined4 **)(unaff_EBP + 8) = (undefined4 *)((int)pvVar3 + 8);
  FUN_5140126a();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iVar6 = FUN_51405b5b();
  *(int *)(unaff_EBP + 0x1c) = iVar6;
  if (iVar6 == 0) {
    Ordinal_8(unaff_EBP + -0x24);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_51405a4b((void *)(unaff_EBP + -0x24),3,(ushort *)(unaff_EBP + 0xc));
    uVar5 = *(uint *)(unaff_EBP + -0x1c);
    *(uint *)(unaff_EBP + 0x1c) = uVar5;
    if (uVar5 == 0xfffffffe) {
      FUN_51409cf6((int)pvVar3 + 0x10);
    }
    else {
      if (uVar5 == 0xffffffff) {
        puVar7 = *(undefined4 **)((int)pvVar3 + 0x20);
      }
      else {
        puVar7 = (undefined4 *)FUN_5140466c((void *)((int)pvVar3 + 0x10),uVar5);
      }
      if (puVar7 == (undefined4 *)0x0) {
        if (*(int *)(unaff_EBP + 0x1c) != 0) {
          *(undefined1 *)(unaff_EBP + -4) = 1;
          iVar6 = FUN_51405818((short *)(unaff_EBP + -0x24));
          if (iVar6 < 0) {
            FUN_5140ac47(iVar6);
          }
          piVar1 = (int *)((int)pvVar3 + 0xc);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            *(undefined4 *)((int)pvVar3 + 8) = 0;
          }
          FUN_514040d5();
          return;
        }
      }
      else {
        if (puVar2 != (undefined2 *)0x0) {
          *puVar2 = 0xd;
          uVar4 = *puVar7;
          *puVar7 = 0;
          *(undefined4 *)(puVar2 + 4) = uVar4;
        }
        FUN_5140455a((void *)((int)pvVar3 + 0x10),(int)puVar7);
        FUN_51403c50(pvVar3);
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iVar6 = FUN_51405818((short *)(unaff_EBP + -0x24));
    if (iVar6 < 0) {
      FUN_5140ac47(iVar6);
    }
  }
  else {
    for (puVar7 = *(undefined4 **)((int)pvVar3 + 0x1c); puVar7 != (undefined4 *)0x0;
        puVar7 = (undefined4 *)(puVar7[-3] + 0x10 & -(uint)(puVar7[-3] != 0))) {
      iVar6 = FUN_51405508(puVar7,*(undefined4 **)(unaff_EBP + 0x1c));
      if (iVar6 == 0) {
        if (puVar2 != (undefined2 *)0x0) {
          *puVar2 = 0xd;
          uVar4 = *puVar7;
          *puVar7 = 0;
          *(undefined4 *)(puVar2 + 4) = uVar4;
        }
        FUN_5140455a((void *)((int)pvVar3 + 0x10),(int)puVar7);
        FUN_51403c50(pvVar3);
        break;
      }
    }
  }
  puVar7 = *(undefined4 **)(unaff_EBP + 8);
  piVar1 = puVar7 + 1;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    *puVar7 = 0;
  }
  FUN_514040d5();
  return;
}


