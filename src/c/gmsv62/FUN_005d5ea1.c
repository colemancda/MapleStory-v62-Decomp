/* FUN_005d5ea1 - 0x005d5ea1 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005d5ea1(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int extraout_ECX;
  uint uVar5;
  undefined4 *puVar6;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  FUN_00429303();
  FUN_005a7a5a();
  uVar5 = *(uint *)(extraout_ECX + 0x28);
  while (uVar5 != 0) {
    iVar1 = *(int *)((-(uint)(uVar5 != 0) & uVar5 - 0x10) + 4);
    (**(code **)**(undefined4 **)(uVar5 + 4))();
    uVar5 = -(uint)(iVar1 != 0) & iVar1 + 0x10U;
  }
  uVar5 = *(uint *)(extraout_ECX + 0x3c);
  while (uVar5 != 0) {
    iVar1 = *(int *)((-(uint)(uVar5 != 0) & uVar5 - 0x10) + 4);
    *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(uVar5 + 4);
    FUN_005d1003();
    puVar6 = (undefined4 *)**(undefined4 **)(unaff_EBP + -0x10);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    (*(code *)*puVar6)();
    iVar3 = FUN_005c4e5b();
    if (iVar3 < 1) {
      FUN_005d66f8(uVar5);
      iVar3 = FUN_00413367(*(int *)(unaff_EBP + -0x10) + 0x3c4,
                           *(undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x3cc));
      if (iVar3 < 2) {
        FUN_005c4eb9();
      }
      else {
        FUN_005c52ed();
      }
      FUN_005d6644(unaff_EBP + -0x14);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00434d5d();
    uVar5 = -(uint)(iVar1 != 0) & iVar1 + 0x10U;
  }
  uVar5 = *(uint *)(extraout_ECX + 0x50);
  while (uVar5 != 0) {
    iVar1 = *(int *)((-(uint)(uVar5 != 0) & uVar5 - 0x10) + 4);
    *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(uVar5 + 4);
    FUN_005d1003();
    puVar6 = (undefined4 *)**(undefined4 **)(unaff_EBP + -0x18);
    *(undefined4 *)(unaff_EBP + -4) = 1;
    (*(code *)*puVar6)();
    uVar4 = FUN_00413367(*(int *)(unaff_EBP + -0x18) + 0x340,
                         *(undefined4 *)(*(int *)(unaff_EBP + -0x18) + 0x348));
    if (0x7fffffff < uVar4) {
      FUN_005d66f8(uVar5);
      puVar6 = *(undefined4 **)(*(int *)(unaff_EBP + -0x18) + 0x3fc);
      while (puVar6 != (undefined4 *)0x0) {
        uVar2 = *puVar6;
        iVar3 = *(int *)((-(uint)(puVar6 != (undefined4 *)0x0) & (uint)(puVar6 + -4)) + 4);
        puVar6 = (undefined4 *)(-(uint)(iVar3 != 0) & iVar3 + 0x10U);
        iVar3 = FUN_004308f4(uVar2);
        if (iVar3 != 0) {
          FUN_005c549f();
        }
      }
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00434d5d();
    uVar5 = -(uint)(iVar1 != 0) & iVar1 + 0x10U;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


