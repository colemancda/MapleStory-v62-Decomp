/* FUN_007c01a2 - 0x007c01a2 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007c01a2(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int extraout_ECX;
  uint uVar6;
  int unaff_EBP;
  undefined4 *puVar7;
  
  FUN_00879bb8();
  if (*(undefined4 **)(extraout_ECX + 8) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(extraout_ECX + 8))();
  }
  uVar6 = *(uint *)(extraout_ECX + 0x30);
  while (uVar6 != 0) {
    iVar2 = *(int *)((-(uint)(uVar6 != 0) & uVar6 - 0x10) + 4);
    (**(code **)**(undefined4 **)(*(int *)(uVar6 + 4) + 0x10))();
    uVar6 = -(uint)(iVar2 != 0) & iVar2 + 0x10U;
  }
  puVar7 = *(undefined4 **)(extraout_ECX + 0x44);
  if (puVar7 != (undefined4 *)0x0) {
    while( true ) {
      uVar4 = *puVar7;
      iVar2 = *(int *)((-(uint)(puVar7 != (undefined4 *)0x0) & (uint)(puVar7 + -4)) + 4);
      *(uint *)(unaff_EBP + -0x10) = -(uint)(iVar2 != 0) & iVar2 + 0x10U;
      *(undefined4 **)(unaff_EBP + -0x24) = puVar7;
      iVar2 = FUN_007c00e8(uVar4);
      uVar4 = puVar7[1];
      *(int *)(unaff_EBP + -0x20) = iVar2;
      iVar3 = FUN_007c00e8(uVar4);
      *(int *)(unaff_EBP + -0x1c) = iVar3;
      if ((iVar2 != 0) && (iVar3 != 0)) {
        *(undefined4 *)(unaff_EBP + -0x14) = 0;
        uVar4 = (**(code **)(*(int *)(iVar3 + 4) + 0x10))();
        *(undefined4 *)(unaff_EBP + -0x18) = uVar4;
        piVar5 = (int *)(**(code **)(*(int *)(iVar2 + 4) + 0x10))();
        uVar4 = FUN_0087a90a(*piVar5 - **(int **)(unaff_EBP + -0x18));
        *(undefined4 *)(unaff_EBP + -0x18) = uVar4;
        iVar2 = (**(code **)(*(int *)(iVar2 + 4) + 0x10))();
        iVar3 = (**(code **)(*(int *)(iVar3 + 4) + 0x10))();
        iVar2 = FUN_0087a90a(*(int *)(iVar2 + 4) - *(int *)(iVar3 + 4));
        if ((*(int *)(unaff_EBP + -0x18) < 700) && (iVar2 < 500)) {
          *(undefined4 *)(unaff_EBP + -0x14) = 1;
        }
        if ((*(int *)(unaff_EBP + -0x18) < 100) && (iVar2 < 100)) {
          *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) | 2;
        }
        iVar2 = *(int *)(unaff_EBP + -0x1c);
        if ((*(int *)(*(int *)(unaff_EBP + -0x20) + 0x4e0) != 0) || (*(int *)(iVar2 + 0x4e0) != 0))
        {
          *(undefined4 *)(unaff_EBP + -0x14) = 0;
        }
        if ((*(int *)(*(int *)(unaff_EBP + -0x20) + 0x4f4) != 0) || (*(int *)(iVar2 + 0x4f4) != 0))
        {
          *(undefined4 *)(unaff_EBP + -0x14) = 0;
        }
        iVar3 = *(int *)(unaff_EBP + -0x24);
        iVar1 = *(int *)(unaff_EBP + -0x14);
        if ((iVar1 != *(int *)(iVar3 + 0x1c)) &&
           (iVar2 = FUN_0079a2c2(iVar1,iVar2,*(undefined4 *)(iVar3 + 0x18)), iVar2 != 0)) {
          *(int *)(iVar3 + 0x1c) = iVar1;
        }
      }
      if (*(int *)(unaff_EBP + -0x10) == 0) break;
      puVar7 = *(undefined4 **)(unaff_EBP + -0x10);
    }
  }
  puVar7 = *(undefined4 **)(extraout_ECX + 0x74);
  if (puVar7 != (undefined4 *)0x0) {
    while( true ) {
      uVar4 = *puVar7;
      iVar2 = *(int *)((-(uint)(puVar7 != (undefined4 *)0x0) & (uint)(puVar7 + -4)) + 4);
      *(uint *)(unaff_EBP + -0x10) = -(uint)(iVar2 != 0) & iVar2 + 0x10U;
      *(undefined4 **)(unaff_EBP + -0x28) = puVar7;
      iVar2 = FUN_007c00e8(uVar4);
      uVar4 = puVar7[1];
      *(int *)(unaff_EBP + -0x20) = iVar2;
      iVar3 = FUN_007c00e8(uVar4);
      *(int *)(unaff_EBP + -0x18) = iVar3;
      if ((((iVar2 != 0) && (iVar3 != 0)) && (*(int *)(iVar2 + 0x17e8) == *(int *)(iVar3 + 0x17e0)))
         && (*(int *)(iVar2 + 0x17ec) == *(int *)(iVar3 + 0x17e4))) {
        *(undefined4 *)(unaff_EBP + -0x14) = 0;
        uVar4 = (**(code **)(*(int *)(iVar3 + 4) + 0x10))();
        *(undefined4 *)(unaff_EBP + -0x24) = uVar4;
        piVar5 = (int *)(**(code **)(*(int *)(iVar2 + 4) + 0x10))();
        uVar4 = FUN_0087a90a(*piVar5 - **(int **)(unaff_EBP + -0x24));
        *(undefined4 *)(unaff_EBP + -0x1c) = uVar4;
        iVar3 = (**(code **)(*(int *)(iVar3 + 4) + 0x10))();
        iVar2 = (**(code **)(*(int *)(iVar2 + 4) + 0x10))();
        iVar2 = FUN_0087a90a(*(int *)(iVar2 + 4) - *(int *)(iVar3 + 4));
        if ((*(int *)(unaff_EBP + -0x1c) < 700) && (iVar2 < 500)) {
          *(undefined4 *)(unaff_EBP + -0x14) = 1;
        }
        if ((*(int *)(unaff_EBP + -0x1c) < 100) && (iVar2 < 100)) {
          *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) | 2;
        }
        iVar2 = *(int *)(unaff_EBP + -0x18);
        if ((*(int *)(*(int *)(unaff_EBP + -0x20) + 0x4e0) != 0) || (*(int *)(iVar2 + 0x4e0) != 0))
        {
          *(undefined4 *)(unaff_EBP + -0x14) = 0;
        }
        if ((*(int *)(*(int *)(unaff_EBP + -0x20) + 0x4f4) != 0) || (*(int *)(iVar2 + 0x4f4) != 0))
        {
          *(undefined4 *)(unaff_EBP + -0x14) = 0;
        }
        iVar3 = *(int *)(unaff_EBP + -0x28);
        iVar1 = *(int *)(unaff_EBP + -0x14);
        if ((iVar1 != *(int *)(iVar3 + 0x1c)) &&
           (iVar2 = FUN_0079aa60(iVar1,iVar2,*(undefined4 *)(iVar3 + 0x18)), iVar2 != 0)) {
          *(int *)(iVar3 + 0x1c) = iVar1;
        }
      }
      if (*(int *)(unaff_EBP + -0x10) == 0) break;
      puVar7 = *(undefined4 **)(unaff_EBP + -0x10);
    }
  }
  puVar7 = *(undefined4 **)(extraout_ECX + 0x88);
  if (puVar7 != (undefined4 *)0x0) {
    while( true ) {
      uVar4 = *puVar7;
      iVar2 = *(int *)((-(uint)(puVar7 != (undefined4 *)0x0) & (uint)(puVar7 + -4)) + 4);
      *(uint *)(unaff_EBP + -0x10) = -(uint)(iVar2 != 0) & iVar2 + 0x10U;
      *(undefined4 **)(unaff_EBP + -0x20) = puVar7;
      iVar2 = FUN_007c00e8(uVar4);
      uVar4 = puVar7[1];
      *(int *)(unaff_EBP + -0x14) = iVar2;
      iVar3 = FUN_007c00e8(uVar4);
      *(int *)(unaff_EBP + -0x18) = iVar3;
      if ((iVar2 != 0) && (iVar3 != 0)) {
        *(undefined4 *)(unaff_EBP + -0x24) = 0;
        uVar4 = (**(code **)(*(int *)(iVar3 + 4) + 0x10))();
        *(undefined4 *)(unaff_EBP + -0x28) = uVar4;
        piVar5 = (int *)(**(code **)(*(int *)(iVar2 + 4) + 0x10))();
        uVar4 = FUN_0087a90a(*piVar5 - **(int **)(unaff_EBP + -0x28));
        *(undefined4 *)(unaff_EBP + -0x1c) = uVar4;
        iVar3 = (**(code **)(*(int *)(iVar3 + 4) + 0x10))();
        iVar2 = (**(code **)(*(int *)(iVar2 + 4) + 0x10))();
        iVar2 = FUN_0087a90a(*(int *)(iVar2 + 4) - *(int *)(iVar3 + 4));
        if ((*(int *)(unaff_EBP + -0x1c) < 700) && (iVar2 < 500)) {
          uVar6 = 1;
        }
        else {
          uVar6 = *(uint *)(unaff_EBP + -0x24);
        }
        if ((*(int *)(unaff_EBP + -0x1c) < 100) && (iVar2 < 100)) {
          uVar6 = uVar6 | 2;
        }
        iVar2 = *(int *)(unaff_EBP + -0x20);
        if (uVar6 != *(uint *)(iVar2 + 0xc)) {
          FUN_0079b1fe(uVar6,*(undefined4 *)(unaff_EBP + -0x18),*(undefined4 *)(iVar2 + 8));
          *(uint *)(iVar2 + 0xc) = uVar6;
        }
      }
      if (*(int *)(unaff_EBP + -0x10) == 0) break;
      puVar7 = *(undefined4 **)(unaff_EBP + -0x10);
    }
  }
  if (*(int *)(extraout_ECX + 0x5c) != 0) {
    iVar3 = (*DAT_0097b704)();
    iVar2 = *(int *)(extraout_ECX + 0x50);
    if ((iVar2 != 0) && (iVar3 != iVar2 && -1 < iVar3 - iVar2)) {
      *(int *)(extraout_ECX + 0x4c) = iVar3 + 100;
      if (iVar3 + 100 == 0) {
        *(undefined4 *)(extraout_ECX + 0x4c) = 1;
      }
      *(undefined4 *)(extraout_ECX + 0x50) = 0;
    }
    if (*(int *)(extraout_ECX + 0x4c) != 0) {
      iVar2 = iVar3 - *(int *)(extraout_ECX + 0x4c);
      while ((iVar2 < 0 && (*(int *)(extraout_ECX + 0x5c) != 0))) {
        *(undefined4 *)(unaff_EBP + -0x38) = *(undefined4 *)(*(int *)(extraout_ECX + 0x60) + 4);
        FUN_007c156b();
        *(undefined4 *)(unaff_EBP + -4) = 0;
        if (*(int *)(unaff_EBP + -0x38) != 0) {
          *(undefined4 *)(unaff_EBP + -0x30) = 0;
          *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(*(int *)(unaff_EBP + -0x38) + 0xd78);
          *(undefined1 *)(unaff_EBP + -4) = 1;
          iVar2 = FUN_007c16cd(unaff_EBP + -0x2c,unaff_EBP + -0x34);
          if (iVar2 != 0) {
            *(undefined4 *)(*(int *)(unaff_EBP + -0x30) + 0x18) = 0;
          }
          FUN_007cf189();
          *(undefined1 *)(unaff_EBP + -4) = 0;
          if (*(int *)(unaff_EBP + -0x30) != 0) {
            FUN_004f6e32(0);
            *(undefined4 *)(unaff_EBP + -0x30) = 0;
          }
        }
        FUN_007c1c5a(*(undefined4 *)(extraout_ECX + 0x60));
        iVar3 = (*DAT_0097b704)();
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        FUN_007c1588();
        iVar2 = iVar3 - *(int *)(extraout_ECX + 0x4c);
      }
      if ((-1 < iVar3 - *(int *)(extraout_ECX + 0x4c)) && (*(int *)(extraout_ECX + 0x5c) != 0)) {
        iVar3 = iVar3 + 1000;
      }
      *(int *)(extraout_ECX + 0x50) = iVar3;
      if (iVar3 == 0) {
        *(undefined4 *)(extraout_ECX + 0x50) = 1;
      }
      *(undefined4 *)(extraout_ECX + 0x4c) = 0;
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


